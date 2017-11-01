///////////////////////////////////////
// tagfilter.js
// Applies filters to the page
///////////////////////////////////////

// Wrap in drupal so we can get injected vars (in this case we want the basepath for the module later)
Drupal.behaviors.annotationFilter = {
	attach: function(context, settings) {

		// Wait for document to load AND the DOM to be fully present (belt and suspenders)
		jQuery(document).ready(function($) {
			$(window).on("load", function() {


				// If we find annotation on this page, begin
				if (typeof annotations !== 'undefined') {

					console.log('AnnotationFilter: Ok! Injecting filters.');


					// Toggle filter panel on/off, injects next to title
					var filterButton = ' <a href="javascript:annotationFilter_toggleFilterPanel();"><span class="fa fa-filter" aria-hidden="true"></span></a>';
					$('.field-name-body .block-title').append(filterButton);

					// This is the HTML for the panel itself
					// We first inject a placeholder, load the content into that and then
					// one it's all loaded we append it to the content
					//// FIXME: basepath is returning wrong value on COVE Drupal install
					//// var htmlFile = Drupal.settings.annotationFilter.basepath + '/assets/html/annotationFilter.html';
					var htmlFile = '/sites/all/modules/annotationFilter/assets/html/annotationFilter.html';
					$('.field-name-body').append('<div id="annotationFilter_temp"></div>');


					// Inject the panel from a static HTML file
					$("#annotationFilter_temp").load(htmlFile,
						// post-load callback
						function() {

							// FIXME: Start with the panel off and reveal it 1 second later
							// This delay is a lame race-condition fix, should be replaced
							// with something more robust (but I'm not sure which select2 event to rely on)
							$('#annotation-well').hide();
							setTimeout(function() { $('#annotation-well').show(); }, 1000);

							// Append and remove placeholder`
							$('.field-name-body').append($(this).html());
							$("#annotationFilter_temp").remove();

							var tf, cf, uf;
							var tagFilters = [];
							var categoryFilters = [];
							var annotatorFilters = [];
							initSelection();




							var isInitialized = false;
							var annotations;
							var annotationColors;

							// Actually apply the filters to the page
							function applyFiltersToPage() {

								if (!isInitialized) {

									// Grab a reference to the all the annotations
									annotations = $(".annotator-hl");

									// Keep a copy of the background colors at load
									annotationColors = [];
									annotations.each(function(index) {
										annotationColors.push($(this).css('background-color'));
									});

									isInitialized = true;
								}

								// If we have at least one filter enabled, then we will be manually re-coloring
								if (tagFilters.length > 0 || categoryFilters.length > 0 || annotatorFilters.length > 0) {
									// blank them out first
									annotations.attr("style", "background-color:rgba(1,1,1,0.1);border:0");

								// Otherwise just reset to original and GTFO
								} else {
									resetAnnotationsToOriginal();
									return;
								}

								//Tags
							    //console.log("%c TAGS: %c" + tagFilters, 'background: #bbbbbb; color: #0000FF', 'background: #FFFFFF; color: #000000');
								for (var i = 0; i < tagFilters.length; i++) {
									var thisTag = tagFilters[i];
									$("span[data-tags~='" + thisTag + "']").attr("style", "border:1px solid red");
								}

								//Categories
								//console.log("%c CATEGORIES: %c" + categoryFilters, 'background: #bbbbbb; color: #EEFF00', 'background: #FFFFFF; color: #000000');
								for (var i = 0; i < categoryFilters.length; i++) {
									var thisCategory = categoryFilters[i];
									$("span[data-annotation_categories~='" + thisCategory + "']").attr("style", "border:1px solid green");
								}

								//Annotators
								//console.log("%c ANNOTATORS: %c" + annotatorFilters, 'background: #bbbbbb; color: #FF00FF', 'background: #FFFFFF; color: #000000');
								for (var i = 0; i < annotatorFilters.length; i++) {
									var thisUser = annotatorFilters[i];
									$("span[data-user~='" + thisUser + "']").attr("style", "border:1px solid blue");
								}
							}


							// Filter add/remove handlers

							// Tag Add
							tf.on("select2:select", function(e) {
								tagFilters.push(e.params.data.id);
								applyFiltersToPage();
							});

							// Tag Remove
							tf.on('select2:unselect', function(e) {
								removeObjectFromArray(e.params.data.id, tagFilters);
								applyFiltersToPage();
							});

							// Category Add
							cf.on("select2:select", function(e) {
								categoryFilters.push(e.params.data.id);
								applyFiltersToPage();
							});
							// Category Remove
							cf.on('select2:unselect', function(e) {
								removeObjectFromArray(e.params.data.id, categoryFilters);
								applyFiltersToPage();
							});

							// Annotator Add
							uf.on("select2:select", function(e) {
								annotatorFilters.push(e.params.data.id);
								applyFiltersToPage();
							});
							// Annotator Remove
							uf.on('select2:unselect', function(e) {
								removeObjectFromArray(e.params.data.id, annotatorFilters);
								applyFiltersToPage();
							});


							// Resets the annotations to their original colors
							function resetAnnotationsToOriginal() {
								idx = 0;
								annotations.attr("style", "background-color:rgba(0,0,0,0.0);border:0");
								annotations.each(function(index) {
									$(this).css("background-color", annotationColors[idx]);
									idx++;
								});
							}

							// Helper: Remove objects from array
							function removeObjectFromArray(obj, array) {
								var idx = array.indexOf(obj);
								if (idx > -1) {
									array.splice(idx, 1);
								}
							}

							// Helper: Array Support for old IE (via https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/indexOf#Polyfill)
							Array.prototype.indexOf || (Array.prototype.indexOf = function(d, e) {
								var a;
								if (null == this) throw new TypeError('"this" is null or not defined');
								var c = Object(this),
									b = c.length >>> 0;
								if (0 === b) return -1;
								a = +e || 0;
								Infinity === Math.abs(a) && (a = 0);
								if (a >= b) return -1;
								for (a = Math.max(0 <= a ? a : b - Math.abs(a), 0); a < b;) {
									if (a in c && c[a] === d) return a;
									a++
								}
								return -1
							});

							function initSelection() {
								tf = $('#tag-filter').select2({
									data: filterLists['tags'],
									allowClear: true,
									placeholder: "Tags",
									theme: "classic",
									width: "20rem",
									allowClear: false
								});



								cf = $('#cat-filter').select2({
									data: filterLists['annotation_categories'],
									allowClear: true,
									placeholder: "Categories",
									theme: "classic",
									width: "20rem",
									allowClear: false
								});

								uf = $('#user-filter').select2({
									data: filterLists['user'],
									allowClear: true,
									placeholder: "Annotators",
									theme: "classic",
									width: "20rem",
									allowClear: false
								});
							}

							function clearSelection() {
								//Select2 boxes
								tf.val(null).trigger('change');
								cf.val(null).trigger('change');
								uf.val(null).trigger('change');

								// Arrays of filters
								tagFilters = [];
								categoryFilters = [];
								annotatorFilters = [];
							}

							// Inject a stylesheet
							tf.data('select2').$container.addClass("tagColor");
							cf.data('select2').$container.addClass("categoryColor");
							uf.data('select2').$container.addClass("userColor");

							window.annotationFilter_resetFilters = (function() {
								if (isInitialized) {
									resetAnnotationsToOriginal();
									clearSelection();
								}
							});

							window.annotationFilter_toggleFilterPanel = (function() {
								annotationFilter_resetFilters();
								jQuery('#annotation-well').toggle();
							});


					});







				}
			})
		});
	}
};
