// Wrap in drupal so we can get injected vars (in this case we want the basepath for the module later)
Drupal.behaviors.AnnotationViewer = {
	attach: function(context, settings) {


		(function() {
			var __bind = function(fn, me) {
					return function() {
						return fn.apply(me, arguments);
					};
				},
				__hasProp = {}.hasOwnProperty,
				__extends = function(child, parent) {
					for (var key in parent) {
						if (__hasProp.call(parent, key)) child[key] = parent[key];
					}

					function ctor() {
						this.constructor = child;
					}
					ctor.prototype = parent.prototype;
					child.prototype = new ctor();
					child.__super__ = parent.prototype;
					return child;
				};

			// FIXME: Replace these with FA icons
			var IMAGE_DELETE = Drupal.settings.annotationViewer.basepath + '/assets/img/icono_eliminar.png';
			var IMAGE_DELETE_OVER = Drupal.settings.annotationViewer.basepath + '/assets/img/papelera_over.png';
			var SHARED_ICON = Drupal.settings.annotationViewer.basepath + '/assets/img/shared-icon.png';
			var EDIT_ICON = Drupal.settings.annotationViewer.basepath + '/assets/img/shared-icon.png';



			// FIXME: This code is fond of hardcoding CSS selectors, which is brutal to keep track of
			// I'm cleaning them up as I go
			var selector_annotationPanel_id = "anotacions-uoc-panel";
			var selector_annotationContainer_class = "container-anotacions";
			var selector_annotationCount_id = "count-anotations";
			var prefix_annotationblock_selector = "#annotation-";

			Annotator.Plugin.AnnotatorViewer = (function(_super) {
				__extends(AnnotatorViewer, _super);

				AnnotatorViewer.prototype.events = {
					'annotationsLoaded': 'onAnnotationsLoaded',
					'annotationCreated': 'onAnnotationCreated',
					'annotationDeleted': 'onAnnotationDeleted',
					'annotationUpdated': 'onAnnotationUpdated',
					".annotator-viewer-delete click": "onDeleteClick",
					".annotator-viewer-edit click": "onEditClick",
					".annotator-viewer-delete mouseover": "onDeleteMouseover",
					".annotator-viewer-delete mouseout": "onDeleteMouseout",
				};


				AnnotatorViewer.prototype.field = null;
				AnnotatorViewer.prototype.input = null;
				AnnotatorViewer.prototype.options = {
					AnnotatorViewer: {}
				};


				function AnnotatorViewer(element, options) {
					// Add panel
					if (jQuery('body').find('.container-anotacions').length !== 0) {
						console.log("WARNING: You've called me twice, refusing to create again");
					} else {
						this.onAnnotationCreated = __bind(this.onAnnotationCreated, this);
						this.onAnnotationUpdated = __bind(this.onAnnotationUpdated, this);
						this.onDeleteClick = __bind(this.onDeleteClick, this);
						this.onEditClick = __bind(this.onEditClick, this);
						this.onDeleteMouseover = __bind(this.onDeleteMouseover, this);
						this.onDeleteMouseout = __bind(this.onDeleteMouseout, this);
						this.onCancelPanel = __bind(this.onCancelPanel, this);
						this.onSavePanel = __bind(this.onSavePanel, this);
						AnnotatorViewer.__super__.constructor.apply(this, arguments);
					}
				};

				AnnotatorViewer.prototype.pluginInit = function() {
					if (!Annotator.supported()) {
						return;
					}

					jQuery('#type_share').click(this.onFilter);
					jQuery('#type_own').click(this.onFilter);

				};

				/*
				Check the checkboxes filter to search the annotations to show.
				Shared annotations have the class shared
				My annotations have the me class
				*/
				AnnotatorViewer.prototype.onFilter = function(event) {
					var annotations_panel = jQuery('.'+selector_annotationContainer_class).find('.annotator-marginviewer-element');
					jQuery(annotations_panel).hide();

					var class_view = "";

					var checkbox_selected = jQuery('li.filter-panel').find('input:checked');
					if (checkbox_selected.length > 0) {
						jQuery('li.filter-panel').find('input:checked').each(function() {
							class_view += jQuery(this).attr('rel') + '.';
						});
						var selector = '.'+ selector_annotationContainer_class + ' > li.';
						jQuery(selector + class_view.substring(0, class_view.length - 1)).show();
					} else {
						jQuery(annotations_panel).show();
					}


				};

				AnnotatorViewer.prototype.onDeleteClick = function(event) {
					event.stopPropagation();
					if (confirm(i18n_dict.confirm_delete)) {
						this.click;
						return this.onButtonClick(event, 'delete');
					}
					return false;
				};

				AnnotatorViewer.prototype.onEditClick = function(event) {
					event.stopPropagation();
					return this.onButtonClick(event, 'edit');
				};

				AnnotatorViewer.prototype.onButtonClick = function(event, type) {
					var item;
					//item contains all the annotation information, this information is stored in an attribute called data-annotation.
					item = jQuery(event.target).parents('.annotator-marginviewer-element');
					if (type == 'delete') return this.annotator.deleteAnnotation(item.data('annotation'));
					if (type == 'edit') { //We want to transform de div to a textarea
						//Find the text field
						var annotator_textArea = item.find('div.anotador_text');
						this.textareaEditor(annotator_textArea, item.data('annotation'));

					}
				};

				//Textarea editor controller
				AnnotatorViewer.prototype.textareaEditor = function(annotator_textArea, item) {
					//First we have to get the text, if no, we will have an empty text area after replace the div
					if (jQuery('li'+prefix_annotationblock_selector + item.id).find('textarea.panelTextArea').length == 0) {
						var content = item.text;
						var editableTextArea = jQuery("<textarea id='textarea-" + item.id + "'' class='panelTextArea'>" + content + "</textarea>");
						var annotationCSSReference = 'li'+prefix_annotationblock_selector + item.id + ' > div.annotator-marginviewer-text';

						annotator_textArea.replaceWith(editableTextArea);
						editableTextArea.css('height', editableTextArea[0].scrollHeight + 'px');
						editableTextArea.blur(); //Textarea blur
						if (typeof(this.annotator.plugins.RichEditor) != 'undefined') {
							this.tinymceActivation(annotationCSSReference + ' > textarea#textarea-' + item.id);
						}
						jQuery('<div class="annotator-textarea-controls annotator-editor"></div>').insertAfter(editableTextArea);
						var control_buttons = jQuery(annotationCSSReference + '> .annotator-textarea-controls');
						jQuery('<a href="#save" class="annotator-panel-save">Save</a>').appendTo(control_buttons).bind("click", {
							annotation: item
						}, this.onSavePanel);
						jQuery('<a href="#cancel" class="annotator-panel-cancel">Cancel</a>').appendTo(control_buttons).bind("click", {
							annotation: item
						}, this.onCancelPanel);
					}
				};

				AnnotatorViewer.prototype.tinymceActivation = function(selector) {
					tinymce.init({
						selector: selector,
						plugins: "media image insertdatetime link paste",
						menubar: false,
						statusbar: false,
						toolbar_items_size: 'small',
						extended_valid_elements: "",
						toolbar: "undo redo bold italic alignleft aligncenter alignright alignjustify | link image media"
					});
				}

				//Event triggered when save the content of the annotation
				AnnotatorViewer.prototype.onSavePanel = function(event) {

					var current_annotation = event.data.annotation;
					var textarea = jQuery('li'+prefix_annotationblock_selector + current_annotation.id).find("#textarea-" + current_annotation.id);
					if (typeof(this.annotator.plugins.RichEditor) != 'undefined') {
						current_annotation.text = tinymce.activeEditor.getContent();
						tinymce.remove("#textarea-" + current_annotation.id);
						tinymce.activeEditor.setContent(current_annotation.text);
					} else {
						current_annotation.text = textarea.val();
						//this.normalEditor(current_annotation,textarea);
					}
					var anotation_reference = "annotation-" + current_annotation.id;
					jQuery('#' + anotation_reference).data('annotation', current_annotation);

					this.annotator.updateAnnotation(current_annotation);
				};

				//Event triggered when save the content of the annotation
				AnnotatorViewer.prototype.onCancelPanel = function(event) {
					var current_annotation = event.data.annotation;
					var styleHeight = 'style="height:12px"';
					if (current_annotation.text.length > 0) styleHeight = '';

					if (typeof(this.annotator.plugins.RichEditor) != 'undefined') {
						tinymce.remove("#textarea-" + current_annotation.id);

						var textAnnotation = '<div class="anotador_text" ' + styleHeight + '>' + current_annotation.text + '</div>';
						var anotacio_capa = '<div class="annotator-marginviewer-text"><div class="' + current_annotation.category + ' anotator_color_box"></div>' + textAnnotation + '</div>';
						var textAreaEditor = jQuery('li'+prefix_annotationblock_selector + current_annotation.id + ' > .annotator-marginviewer-text');

						textAreaEditor.replaceWith(anotacio_capa);
					} else {
						var textarea = jQuery('li'+prefix_annotationblock_selector + current_annotation.id).find('textarea.panelTextArea');
						this.normalEditor(current_annotation, textarea);
					}

				};

				//Annotator in a non editable state
				AnnotatorViewer.prototype.normalEditor = function(annotation, editableTextArea) {
					var buttons = jQuery('li'+prefix_annotationblock_selector + annotation.id).find('div.annotator-textarea-controls');
					var textAnnotation = this.removeTags('iframe', annotation.text);
					editableTextArea.replaceWith('<div class="anotador_text">' + textAnnotation + '</div>');
					buttons.remove();
				};


				AnnotatorViewer.prototype.onDeleteMouseover = function(event) {
					jQuery(event.target).attr('src', IMAGE_DELETE_OVER);
				};

				AnnotatorViewer.prototype.onDeleteMouseout = function(event) {
					jQuery(event.target).attr('src', IMAGE_DELETE);
				};

				AnnotatorViewer.prototype.onAnnotationCreated = function(annotation) {
					this.createReferenceAnnotation(annotation);
					jQuery('#'+selector_annotationCount_id).text(jQuery('.'+selector_annotationContainer_class).find('.annotator-marginviewer-element').length);
				};

				AnnotatorViewer.prototype.onAnnotationUpdated = function(annotation) {
					jQuery(prefix_annotationblock_selector + annotation.id).html(this.mascaraAnnotation(annotation));
				};

				AnnotatorViewer.prototype.onAnnotationsLoaded = function(annotations) {
					var annotation;
					// Update the annotation counter
					jQuery('#'+selector_annotationCount_id).text(jQuery('.'+selector_annotationContainer_class).find('.annotator-marginviewer-element').length);
					if (annotations.length > 0) {
						for (i = 0, len = annotations.length; i < len; i++) {
							annotation = annotations[i];
							this.createReferenceAnnotation(annotation);
						}
					}
				};


				AnnotatorViewer.prototype.onAnnotationDeleted = function(annotation) {
					jQuery("li").remove(prefix_annotationblock_selector + annotation.id);
					jQuery('#'+selector_annotationCount).text(jQuery('.'+selector_annotationContainer_class).find('.annotator-marginviewer-element').length);
				};


				// Build an individual annotation block (on the sidebar)
				AnnotatorViewer.prototype.mascaraAnnotation = function(annotation) {
					if (!annotation.data_creacio) annotation.data_creacio = jQuery.now();

					var shared_annotation = "";
					var class_label = "label";
					var delete_icon = "<img src=\"" + IMAGE_DELETE + "\" class=\"annotator-viewer-delete\" title=\"" + i18n_dict.Delete + "\" style=\" float:right;margin-top:3px;;margin-left:3px\"/><img src=\""+EDIT_ICON+"\"   class=\"annotator-viewer-edit\" title=\"Edit\" style=\"float:right;margin-top:3px\"/>";

					if (annotation.estat == 1 || annotation.permissions.read.length === 0) {
						shared_annotation = "<img src=\"" + SHARED_ICON + "\" title=\"" + i18n_dict.share + "\" style=\"margin-left:5px\"/>"
					}

					if (annotation.propietary == 0) {
						class_label = "label-compartit";
						delete_icon = "";
					}

					// Set highlight color according to annotation categories
					var anotation_class = "highlight ";
					if (annotation.annotation_categories != null) {
						for (var idx = 0; idx < annotation.annotation_categories.length; idx++) {
    						thisCategoryID=annotation.annotation_categories[idx];
							var thisClass="annotation_category-"+thisCategoryID;
							anotation_class+=thisClass+' ';
						}
					}

					//FIXME
					var textAnnotation = annotation.text;
					    //textAnnotation = 'UUID: '+annotation.uuid;
					var annotation_layer = '<div class="annotator-marginviewer-text"><div class="' + anotation_class + ' anotator_color_box"></div>';
					annotation_layer +=    '<div class="anotador_text">' + textAnnotation + '</div></div>';
					annotation_layer +=    '<div class="annotator-marginviewer-date">' + jQuery.format.date(annotation.data_creacio, "dd/MM/yyyy HH:mm:ss") + '</div>';
					annotation_layer +=    '<div class="annotator-marginviewer-quote">' + annotation.quote + '</div>';
					annotation_layer +=    '<div class="annotator-marginviewer-footer"><span class="' + class_label + '">' + annotation.user + '</span>';

					// FIXME: Disables trash and sharing icons
					// annotation_layer += + shared_annotation + delete_icon + '</div>';

					return annotation_layer;
				};

				AnnotatorViewer.prototype.createAnnotationPanel = function(annotation) {
					var checboxes = '<label class="checkbox-inline"><input type="checkbox" id="type_own" rel="me"/>My annotations</label><label class="checkbox-inline">  <input type="checkbox" id="type_share" rel="shared"/>Shared</label>';
					var annotation_layer =  '<div class="annotations-list-uoc" style="background-color:#ddd;"><div id="annotations-panel"><span class="rotate" title="' + i18n_dict.view_annotations + ' ' + i18n_dict.pdf_resum + '">' + i18n_dict.view_annotations + '<span class="label-counter" style="padding:0.2em 0.3em;float:right" id="count-anotations">0</span></span></div>';
				        annotation_layer += '<div id="'+selector_annotationPanel_id+'" style="height:80%"><ul class="container-anotacions"><li class="filter-panel">' + checboxes + '</li></ul></div></div>';
					return annotation_layer;
				};


				AnnotatorViewer.prototype.createReferenceAnnotation = function(annotation) {
					var anotation_reference = null;
					var data_owner = "me";
					var data_type = "";
					var myAnnotation = false;

					if (annotation.id != null) {
						anotation_reference = "annotation-" + annotation.uuid;
					} else {
						annotation.id = this.uniqId();
						//We need to add this id to the text anotation
						jQueryelement = jQuery('span.annotator-hl:not([id])');
						if (jQueryelement) {
							jQueryelement.prop('id', annotation.id);
						}
						anotation_reference = "annotation-" + annotation.id;
					}



					if (annotation.estat == 1 || annotation.permissions.read.length === 0) {
						data_type = "shared";
					}
					if (annotation.propietary == 0) {
						data_owner = "";
					} else {
						myAnnotation = true;
					}

					var annotation_layer = '<li class="annotator-marginviewer-element ' + data_type + ' ' + data_owner + '" id="' + anotation_reference + '">' + this.mascaraAnnotation(annotation) + '</li>';
					var malert = i18n_dict.anotacio_lost

					anotacioObject = jQuery(annotation_layer).appendTo('.container-anotacions').click(function(event) {
							var viewPanelHeight = jQuery(window).height();
							var annotation_reference = annotation.id;

							jQueryelement = jQuery("#" + annotation.id);
							if (!jQueryelement.length) {
								jQueryelement = jQuery("#" + annotation.order);
								annotation_reference = annotation.order; //If exists a sorted annotations we put it in the right order, using order attribute
							}

							if (jQueryelement.length) {
								elOffset = jQueryelement.offset();
								jQuery(this).children(".annotator-marginviewer-quote").toggle();
								jQuery('html, body').animate({
									scrollTop: jQuery("#" + annotation_reference).offset().top - (viewPanelHeight / 2)
								}, 2000);
							}
						})
						.mouseover(function() {
							jQueryelement = jQuery("span[id=" + annotation.id + "]");
							if (jQueryelement.length) {
								jQueryelement.css({
									"border-color": "#000000",
									"border-width": "1px",
									"border-style": "solid"
								});
							}
						})
						.mouseout(function() {
							jQueryelement = jQuery("span[id=" + annotation.id + "]");
							if (jQueryelement.length) {
								jQueryelement.css({
									"border-width": "0px"
								});
							}
						});

					//Inject annotation into data element
					jQuery('#' + anotation_reference).data('annotation', annotation);

				};

				// UUID generator (why?)
				AnnotatorViewer.prototype.uniqId = function() {
					return Math.round(new Date().getTime() + (Math.random() * 100));
				}


				//Strip content tags
				AnnotatorViewer.prototype.removeTags = function(striptags, html) {
					striptags = (((striptags || '') + '').toLowerCase().match(/<[a-z][a-z0-9]*>/g) || []).join('');
					var tags = /<\/?([a-z][a-z0-9]*)\b[^>]*>/gi,
						commentsAndPhpTags = /<!--[\s\S]*?-->|<\?(?:php)?[\s\S]*?\?>/gi;

					return html.replace(commentsAndPhpTags, '').replace(tags, function(jQuery0, jQuery1) {
						return html.indexOf('<' + jQuery1.toLowerCase() + '>') > -1 ? jQuery0 : '';
					});
				};

				// Scroll the viewer to a particular div
				// FIXME: if you click a multiple-layered annotation, it will
				// only take you to the first one
				var scrollInProgress=false;
				AnnotatorViewer.prototype.scrollTo = function(targetDiv){
					if(scrollInProgress){console.log("no");return;}
					scrollInProgress=true;

					// On Deck
					function doScroll(complete){
						//console.log("Scroll to: " + targetDiv);
						var annotationPanel = jQuery('#'+selector_annotationPanel_id);
						var currentPosition=annotationPanel.scrollTop();
						var targetDistanceFromTop=jQuery(targetDiv).position().top;
						var scrollToVal = (targetDistanceFromTop-currentPosition);

						// Clear selection indicator
						jQuery(".annotator-marginviewer-element").removeClass("annotation_selected");


						if(scrollToVal != 0){
							// FIXME: this should work, but it doesn't, so we just go to 0 first and then offset
							//console.log("Scrolling: "+scrollToVal + "(current:"+currentPosition+")");
							//annotationPanel.slimScroll({ scrollTo : scrollToVal  });
							annotationPanel.slimScroll({ scrollTo : '0px'  });
							annotationPanel.slimScroll({ scrollTo : targetDistanceFromTop  });

							// Bind scroll handler to clear selection indicator if scrollbar moved
							annotationPanel.slimScroll().bind('slimscrolling', function (e, pos) {
								jQuery(".annotator-marginviewer-element").removeClass("annotation_selected");
							});
						}
						complete();
					}

					// Call with completion callback
					doScroll(function(){
						var target=jQuery(targetDiv);
						target.addClass("annotation_selected");
						scrollInProgress=false;


					});

				}

				// Inject the panel into the page
				AnnotatorViewer.prototype.addToPage = function(annotationViewer){

					// Add the panel to the page
					jQuery("body").append(this.createAnnotationPanel());

					// Hide it
					jQuery('.'+selector_annotationContainer_class).hide();

					// Toggle panel when clicked
					jQuery("#annotations-panel").click(function(event) {
						jQuery('.'+selector_annotationContainer_class).toggle();
					});


					// Make each snapshot annotation clickable
					jQuery(".annotator-hl").click(function(event) {

						// Open the pane (if closed)
						jQuery('.'+selector_annotationContainer_class).show();

						// Grab the ID for this annotation
						if(this.dataset.uuid){
							var targetid = prefix_annotationblock_selector + this.dataset.uuid.toString();
						}else{
							console.error("ERROR: I cannot determine id for this annotation, missing uuid?");
							return;
						}

						// Sanity checks to help debugging
						if (jQuery('body').find('#anotacions-uoc-panel').length == 0) {
							console.log("WARNING: I can't find the annotation panel!");
							return;
						}
						if (jQuery('body').find(targetid).length == 0) {
							console.log("WARNING: I can't find the target annotation:"+targetid+"!");
							return;
						}

						// Move us to the annotation
						annotationViewer.scrollTo(targetid);

					});
				};

				// All good! Return the AV
				return AnnotatorViewer;
			})(Annotator.Plugin);
		}).call(this);
	}
};
