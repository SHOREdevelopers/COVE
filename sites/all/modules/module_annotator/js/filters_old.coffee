#
# Annotation Filters
#
# Creates a sidebar of annotations with filters
# Hides annotations not in current filter(s) from display in document
#
# TODO: Refactor so filters interface reflects current state
# rather than being updated piece-meal based on user clicks,
# which is not at all robust
#
# Mike Widner <mikewidner@stanford.edu>
#
#######

# BUG: overlapping, multi-user highlights
class Annotator.Plugin.Filters extends Annotator.Plugin
  ########
  #
  # Define variables for CSS, selectors, and data storage
  #
  ########
  events:
    'annotationsLoaded': 'setup'
    '.annotator-sidebar-filter click': 'changeFilterState'
    'annotationCreated': 'addAnnotation'
    'annotationUpdated': 'addAnnotation'
    'annotationViewerShown': 'updateCurrentIndex'

  options:
    filters: {}
    current_user: null
    selector:
      sidebar: '#annotation-filters'   # where to draw the filters
      annotation: 'annotation-'          # how to find annotations
      activeFilters: 'active-filters'
      userButtons: 'annotation-filters-user-buttons'
    class:
      hide: 'annotation-hide'
      button: 'annotation-filters-button'
      activeButton: 'annotation-filters-button-active'
      input: 'annotation-filter-input'
      activeFilter: 'annotation-filter-active'
      closeIcon: 'fa fa-trash'
      filterWrapper: 'annotation-filter-wrapper'
      filterLabel: 'annotation-filter-label'
      buttonType:
          user: 'annotation-filter-button-user'
          reset: 'annotation-filter-button-reset'
      checkboxType:
          highlights: 'annotation-filter-checkbox-highlights'

  data:
    annotations: {}
    filterValues: {}
    activeFilters: {}
    filtered: {}
    currentIndex: 0
    currentTotal: 0

  #########
  #
  # Routines to initialize the plugin
  #
  #########
  constructor: (element, options) ->
    super
    if options.current_user?
      @options.current_user = options.current_user
    if options.selector?
      if @options.selector.sidebar?
        @options.selector.sidebar = options.selector.sidebar
    if options.filters?
      @options.filters = options.filters

  pluginInit: ->
    # Subscribe to viewer event so we can stop it when annotations filtered
    @annotator.subscribe("annotationViewerShown", (Viewer) => @filterViewer(Viewer))

  setup: (annotations) ->
    # load annotations
    for annotation in annotations
      @data.annotations[annotation.id] = annotation
      @storeFilterValues annotation
      @addAnnotationID annotation
      ++@data.currentTotal
    if Object.keys(annotations).length
      @data.currentIndex = 1
    @drawAllFilters()

  addAnnotationID: (annotation) ->
    # add an ID to the annotation
    for highlight in annotation.highlights
      # give ID for jumping to the first highlight span
      $(highlight).first().attr('id', @options.selector.annotation + annotation.id)
      # but add the class to all -- for hiding/showing
      $(highlight).addClass(@options.selector.annotation + annotation.id)

  #########
  #
  # Miscellaneous utility routines
  #
  #########
  addAnnotation: (annotation) ->
    # update internal data objects with new annotation
    @data.annotations[annotation.id] = annotation
    @addAnnotationID annotation
    @storeFilterValues annotation

  getValue: (annotation, key) ->
    # return the desired value for a given key
    switch key
      when 'user' then return annotation[key]['name']
      else return annotation[key]

  ###########
  #
  # Manage filters, hide/show annotations
  #
  ###########
  storeFilterValues: (annotation) ->
    # Create a list of unique strings for each filter
    # Used for auto-complete boxes
    if @options.filters?
      for filterName in @options.filters
        if not @data.filterValues[filterName]?
          @data.filterValues[filterName] = []
        if not @data.filtered[filterName]?
          @data.activeFilters[filterName] = []
          @data.filtered[filterName] = []
        switch filterName
          when 'tags'
            if !annotation[filterName]? then break
            for tag in annotation[filterName]
              if tag not in @data.filterValues[filterName]
                @data.filterValues[filterName].push(tag)
          when 'user'
            user = @getValue(annotation, 'user')
            if user not in @data.filterValues[filterName]
              @data.filterValues[filterName].push(user)
          else
            if annotation[filterName]? and (annotation[filterName] not in @data.filterValues[filterName])
              @data.filterValues[filterName].push(annotation[filterName])

  filterAnnotations: (filterName, matchValue, match = false) ->
    # Hide all annotations that do not match the matchValue
    # The option "match" variable determines if we want to hide
    # everything that *does* match
    if filterName == 'all'
      @data.filtered['all'] = (id for id of @data.annotations)
      @hideFilteredAnnotations()
      @data.currentTotal = 0
      @redrawPager()
      return # no need to do anything else

    # Don't stack the same filter
    if @data.activeFilters[filterName]?
      @data.activeFilters[filterName] = []
      @data.filtered[filterName] = []

    for id of @data.annotations
      value = @getValue(@data.annotations[id], filterName)
      if !value then value = ''
      if value instanceof Array
        if (not match and matchValue not in value) or
          (match and matchValue in value)
            @data.filtered[filterName].push(id)
            --@data.currentTotal
      else if (not match and value != matchValue) or
        (match and (value == matchValue))
          @data.filtered[filterName].push(id)
          --@data.currentTotal
    if !@data.activeFilters[filterName]?
      @data.activeFilters[filterName] = []
    @data.activeFilters[filterName].push(matchValue)
    @hideFilteredAnnotations()
    @redrawPager()

  filterViewer: (Viewer) ->
    # Remove annotation from Viewer if filtered
    # Currently doesn't work because it's better to show
    # too much information than not enough;
    # Viewer hides when filtered annotations overlap non-filtered
    # Not the behavior we want
    return
    for annotation in Viewer.annotations
      for filter of @data.activeFilters
        if annotation.id in @data.filtered[filter]
          Viewer.hide()

  hideFilteredAnnotations: ->
    for filter of @data.filtered
      for id in @data.filtered[filter]
        $('.' + @options.selector.annotation + id).addClass(@options.class.hide)
        @publish('hide', @data.annotations[id])

  showAnnotation: (annotation) ->
    $('.' + @options.selector.annotation + annotation.id)
      .removeClass(@options.class.hide)

  removeAllFilters: ->
    # show all; reset all filters
    for filter of @data.filtered
      @removeFilter filter

  removeFilter: (filterName) ->
    filteredIDs = {}
    # Compute which annotations are in multiple filters
    # Only show ones that are not filtered out by anything
    for filter of @data.filtered
      for id in @data.filtered[filter]
        if !filteredIDs[id]?
          filteredIDs[id] = 0
        ++filteredIDs[id]
    if @data.filtered[filterName]?
      for id in @data.filtered[filterName]
        --filteredIDs[id]
        if filteredIDs[id] == 0
          @showAnnotation @data.annotations[id]
          ++@data.currentTotal
    @data.filtered[filterName] = []
    @data.activeFilters[filterName] = []
    if filterName == 'category'
      @changeShowHighlightsState('checked', true)
      @changeShowHighlightsState('disabled', false)
    @redrawPager()

  #########
  #
  # Draw UI elements
  #
  #########
  drawButton: (id, text, type, selector = @options.selector.sidebar) ->
    selector = $(selector)
    classes = [@options.class.button, @options.class.buttonType[type]].join(' ')
    selector.append($('<span>',
      {id: id, class: classes})
      .text(text)
      .on("click", @buttonClick)
    )

  drawAllFilters: ->
    # draw the filter elements in the sidebar
    sidebar = $(@options.selector.sidebar)
    sidebar.append('<h2>Annotation Filters</h2>')
    @drawPager sidebar
    sidebar.append('<div id="' + @options.selector.userButtons + '"></div>')
    @drawButton 'no-annotations', 'None', 'user', '#' + @options.selector.userButtons
    @drawButton 'own-annotations', 'Mine', 'user', '#' + @options.selector.userButtons
    @drawButton 'all-annotations', 'All', 'user', '#' + @options.selector.userButtons
    @drawCheckbox 'show-highlights', 'Show Highlights', 'highlights'

    for filter, values of @data.filterValues
      inputHTML = "<div class='#{@options.class.filterWrapper}'><label class='#{@options.class.filterLabel}' for='#{filter}'>#{filter}: </label><input name='#{filter}' class='#{@options.class.input}' /></div>"
      sidebar.append(inputHTML)
      $("input[name=#{filter}]").autocomplete
        source: values
        select: (event, ui) =>
          @filterAutocomplete(event, ui)
      # $("input[name=#{filter}]").on('hover', @hoverFilter)

    @drawButton 'reset', 'Reset', 'reset' # redundant? does "All" mean the same thing?
    sidebar.append("<div id='#{@options.selector.activeFilters}'>Active Filters</div>")

    # Default on start is "Mine"
    $('#own-annotations').addClass(@options.class.activeButton)
    @filterAnnotations 'user', @options.current_user
    @drawActiveFilter 'user', @options.current_user

  drawActiveFilter: (filterName, matchValue) ->
    classes = [filterName, @options.class.activeFilter, @options.class.closeIcon].join(' ')
    $('#' + @options.selector.activeFilters).after(
      $('<div>',
        {id: matchValue,
        class: classes})
      .text(' ' + filterName + ': ' + matchValue)
      .on("click", @removeFilterClick)
      )

  drawCheckbox: (id, text, type, selector = @options.selector.sidebar) ->
    selector = $(selector)
    classes = [@options.class.checkbox, @options.class.checkboxType[type]].join(' ')
    selector.append($("<input type='checkbox' name='#{id}' checked>",
      {name: id})
      .on("click", @checkboxToggle)
    ).append("<span id='#{id}' class='#{classes}'>#{text}</span>")

  drawPager: (selector) ->
    first = 'fa fa-angle-double-left'
    prev = 'fa fa-angle-left'
    next = 'fa fa-angle-right'
    last = 'fa fa-angle-double-right'
    $(selector).append($("<i id='first' class='pager pager-arrow #{first}'/>")).on("click", 'i#first', @pagerClick)
    $(selector).append($("<i id='prev' class='pager pager-arrow #{prev}'/>")).on("click", 'i#prev', @pagerClick)
    $(selector).append($("<span id='pager-count' class='pager'>").text(@data.currentIndex + " of " + @data.currentTotal))
    $(selector).append($("<i id='next' class='pager pager-arrow #{next}'/>")).on("click", 'i#next', @pagerClick)
    $(selector).append($("<i id='last' class='pager pager-arrow #{last}'/>")).on("click", 'i#last', @pagerClick)
    $('.pager').wrapAll('<div id="pager-wrapper"></div>')
    return

  redrawPager: () ->
    total = Object.keys(@data.annotations).length
    uniqueIDs = []
    for filter of @data.filtered
      if @data.filtered[filter].length
        @data.currentIndex = 1
        for id in @data.filtered[filter]
          if id not in uniqueIDs
            uniqueIDs.push(id)
    total -= uniqueIDs.length
    if total <= 0
      total = 0
      @data.currentIndex = 0
    if uniqueIDs.length and @data.currentIndex > @data.currentTotal
      # Filtering resets the index
      @data.currentIndex = 1
    $('#pager-count').text(@data.currentIndex + ' of ' + total)

  eraseFilter: (filterName) ->
    $('.' + filterName + '.' + @options.class.activeFilter).remove()
    if filterName == 'user'
      $('.' + @options.class.activeButton + '.' + @options.class.buttonType.user).removeClass(@options.class.activeButton)

  eraseAllFilters: () ->
    $('.' + @options.class.hide).removeClass(@options.class.hide)
    $('.' + @options.class.activeFilter).remove()

  changeShowHighlightsState: (attr, state) ->
    $("input[name='show-highlights'").attr(attr, state)

  #########
  #
  # Handle user actions
  #
  ##########
  removeFilterClick: (event) =>
    item = $(event.target)
    filterValue = item.attr('id')
    for filterName in @options.filters
      if item.hasClass(filterName)
        @removeFilter filterName
        @eraseFilter filterName

  pagerClick: (event) =>
    # update the annotations count and which one is active
    switch event.target.id
      when 'first'
        @data.currentIndex = 1
      when 'prev'
        @data.currentIndex -= 1
        if @data.currentIndex < 1 then @data.currentIndex = @data.currentTotal
      when 'next'
        @data.currentIndex += 1
        if @data.currentIndex > @data.currentTotal then @data.currentIndex = 1
      when 'last'
        @data.currentIndex = @data.currentTotal
    # Scroll to the annotation
    id = Object.keys(this.data.annotations)[@data.currentIndex - 1]
    highlight = $(@data.annotations[id].highlights[0])
    $("html, body").animate({
      scrollTop: highlight.offset().top - 20
    }, 150)
    # call last, because it updates the currentIndex
    @redrawPager()
    # Would like to show the Viewer, too
    # but that's hard/I don't know how.
    # Annotator shows the Viewer based on mouse position
    # when hovering over a highlight

  updateCurrentIndex: (Viewer) ->
    # Annotations are ordered by ID, NOT by location in the text
    # because Annotator uses XPath to locate items
    # This is way too hard to change to order by location in document
    # especially for such a small UX issue
    # When the Annotator Viewer is shown, update the pager count
    # There might be multiple annotations shown
    # so just choose the first one
    id = Viewer.annotations[0].id
    # Now update current pager index
    @data.currentIndex = Object.keys(this.data.annotations).indexOf(id.toString()) + 1;
    @redrawPager()

  checkboxToggle: (event) =>
    if event.target.name == 'show-highlights'
      if event.target.checked
        @removeFilter 'category', 'Highlight'
      else
        @filterAnnotations 'category', 'Highlight', true

  filterAutocomplete: (event, ui) ->
    # For autocomplete values
    matchValue = ui.item.value
    filterName = event.target.name
    if filterName == 'category'
      # Highlights are a type of category
      @changeShowHighlightsState('checked', false)
      @changeShowHighlightsState('disabled', true)
    @filterAnnotations filterName, matchValue
    @drawActiveFilter filterName, matchValue
    $(event.target).val('')
    false # so autocomplete won't leave text in the input box

  buttonClick: (event) =>
    # Note the fat arrow: this is called in click events, so needed
    # otherwise, we can't access @
    buttonType = $(event.target).attr('id')
    activeButton = $(event.target)
    prevActiveButton = $('.' + @options.class.activeButton)
    if prevActiveButton.attr('id') == activeButton.attr('id') then return
    prevActiveButton.removeClass(@options.class.activeButton)
    if buttonType == 'own-annotations'
      @removeFilter 'user'
      @removeFilter 'all'
      @filterAnnotations 'user', @options.current_user
      @drawActiveFilter 'user', @options.current_user
    else if buttonType == 'all-annotations'
      @removeFilter 'user'
      @removeFilter 'all'
      @eraseFilter 'user'
    else if buttonType == 'no-annotations'
      @removeFilter 'user'
      @filterAnnotations 'all', null
      @eraseFilter 'user'
    else if buttonType == 'reset'
      @removeAllFilters()
      @eraseAllFilters()
      @changeShowHighlightsState('checked', true)
      @changeShowHighlightsState('disabled', false)
      $('#all-annotations').addClass(@options.class.activeButton)
      return  # don't highlight the reset button - doesn't make sense
    activeButton.addClass(@options.class.activeButton) # active button
