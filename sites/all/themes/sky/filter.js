  var annotations = $(".annotator-hl");
  var tf = $('#tag-filter').select2({
    data: filterLists['tags'],
    placeholder: "Select one or more tags",
    theme: "classic",
    width: "300px",
  });
  var cf = $('#cat-filter').select2({
    data: filterLists['annotation_categories'],
    placeholder: "Select one or more categories",
    theme: "classic",
    width: "300px",
  });
  var uf = $('#user-filter').select2({
    data: filterLists['user'],
    placeholder: "Select one or more annotators",
    theme: "classic",
    width: "300px",
  });
  tf.on("select2:select", function (e) { 
    annotations.attr("style", "background-color: #fff");
    $("span[data-tags~='" + e.params.data.id + "']").removeAttr("style");
    console.log(e.params.data.id);
  });
  tf.on('select2:unselect', function(e){
    annotations.removeAttr("style");
  });
  cf.on("select2:select", function (e) { 
    annotations.attr("style", "background-color: #fff");
    $("span[data-annotation_categories~='" + e.params.data.id + "']").removeAttr("style");
  });
  cf.on('select2:unselect', function(e){
    annotations.removeAttr("style");
  });
  uf.on("select2:select", function (e) { 
    annotations.attr("style", "background-color: #fff");
    $("span[data-user~='" + e.params.data.id + "']").removeAttr("style");
  });
  uf.on('select2:unselect', function(e){
    annotations.removeAttr("style");
  });

  annotations.click(function(a){
    var idtarget = a.target;

    $(".glyphicon-comment").remove();
    $(idtarget).prepend('<i class="glyphicon glyphicon-comment"></i>');

    var customTags = [ '[%', '%]' ];
    var anno = Object.assign({}, idtarget.dataset)

    anno.quote = $(idtarget).text()
    var template = $('#annotation-template').html();
    Mustache.parse(template, customTags);
    var rendered = Mustache.render(template, anno);
    $("#annotation-viewer").html(rendered);
  
  });

  // TODO: Implement Next/Previous Annotation Buttons.
  // TODO: Implement Next/Previous Viewport's-worth Buttons. (page breaks?)