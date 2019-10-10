jQuery(document).ready(function(jQuery) {

/* jQuery(function() {
    jQuery("#ap_detail_panel").resizable({
    handles: 'n, s',
    maxHeight: 400,
});
});
 */
 
// Hide default tooltip on title attribute, since that contains email address which we want to hide
jQuery('[title]').mouseover(function () {
        $this = jQuery(this);
        $this.data('title', $this.attr('title'));
        // Using null here wouldn't work in IE, but empty string will work just fine.
        $this.attr('title', '');
    }).mouseout(function () {
        $this = jQuery(this);
        $this.attr('title', $this.data('title'));
    });

	// Sanity check: if there are annotations on this page
	if (typeof annotations !== 'undefined') {
		console.log('AnnotationSupport: Found annotations! Injecting support.');


		currentSelectedSpan=null;
		debounceTimer=null;
		collectedAnnotations=[];
		densityView=false;
		filterApplied=false;

		// Register last mouse click
		document.addEventListener("click", printMousePos);
		lastClickPosition=[];
		function printMousePos(event) {
			lastClickPosition.x = event.pageX;
			lastClickPosition.y = event.pageY;
		}

		// Inject <div> structure
		// FIXME: there's got to be a nicer way to do this
		var panelDivs;
		panelDivs +='<div id="ap_detail_panel">';
		panelDivs +='<div id="ap_detail_panel_content">';
		panelDivs +='<div class="ap_tab_pinned">';
		panelDivs +='<div id="ap_button_panelToggle" class="fa fa_button fa-arrow-circle-left"></div>';
		panelDivs +='</div>';
		panelDivs +='<div id="button_densityView" class="ap_DensityButton fa fa_button fa-adjust" aria-hidden="true" onclick="toggleDensity()" tabName="Density"></div>';
		panelDivs +='<div class="ap_tabContent" id="ap_tab_annotation" tabName="Annotations">';
		panelDivs +='<div id="ap_annotation_sourceinfo"></div>';
		panelDivs +='<div id="ap_annotation_sourcetext"><center>Annotation Details</center></div>';
		panelDivs +='<div id="ap_annotation_annotation"><span class="fa fa-info-circle" aria-hidden="true"></span> Select an annotation from the text above, or click the "filters" tab to filter the document.</div>';
		panelDivs +='</div>';
		panelDivs +='<div class="ap_tabContent" id="ap_tab_filter" tabName="Filters">';
		panelDivs +='<div class="ap_filterSet activeSet">';
		panelDivs +='<div id="button_filterApplied" class="fa fa-toggle-off" aria-hidden="true" onclick="toggleFilter()"></div>';
		panelDivs +='<div id="button_filterAppliedStatus" class="off"></div>';
		panelDivs +='<hr>';
		panelDivs +='<div id="ap_filter_active"></div>';
		panelDivs +='</div>';
		panelDivs +='<div class="ap_filterSet tagSet">';
		panelDivs +='Tags:';
		panelDivs +='<div id="ap_filter_tags"></div>';
		panelDivs +='</div>';
		panelDivs +='<div class="ap_filterSet categorySet">';
		panelDivs +='Categories:';
		panelDivs +='<div id="ap_filter_category"></div>';
		panelDivs +='</div>';
		panelDivs +='<div class="ap_filterSet peopleSet">';
		panelDivs +='People:';
		panelDivs +='<div id="ap_filter_people"></div>';
		panelDivs +='</div>';
		panelDivs +='</div>';
		panelDivs +='</div>';
		panelDivs +='</div>';


		jQuery("body").append(panelDivs);
		annotationToolInit();
		jQuery("#annotation_detail_panel").fadeIn("fast");
	}else{
		return;
	}
});

	// Init: After annotations are loaded
	function annotationToolInit(){
		// Everything relies on "annotations" object, which comes from cove studio snapshot
		if (typeof annotations === 'undefined') {
			console.log('AnnotationTool: No annotations found!');
			return;
		}

		// Convert array to slightly more useful hash by ID
		annotationHash("refresh");

		// Init panel
		annotationPanel = new AnnotationPanel();

		// Configure tabs and make visible
		jQuery("#ap_button_panelToggle").click(function(){
			annotationPanel.togglePanel();
		});

		// Categories from filterList
		categoriesByID=[];
		for(idx=0;idx<filterLists.annotation_categories.length;idx++){
			categoriesByID[filterLists.annotation_categories[idx].id]=filterLists.annotation_categories[idx].text;
		}

		// Keep a copy of the background colors at load
		annotationColorsBySpanID = [];
		spansByDataUUID = [];
		jQuery(".annotator-hl").each(function(index) {

			// Add a unique ID for every span
			var uniqueSpanID = generateUUID();
			jQuery(this).attr('spanID', uniqueSpanID);

			// Create a lookup table for filters
			var thisDataUUID = jQuery(this)[0].getAttribute("data-uuid");
			if(!(thisDataUUID in spansByDataUUID)){
				spansByDataUUID[thisDataUUID]=[];
			}
			spansByDataUUID[thisDataUUID].push(uniqueSpanID);

			// Add some transparency to the colors
			// Assumes rgb(r,g,b) converts to rgba(r,g,b,0.6)
			var bgcolor = jQuery(this).css('background-color').split(",");
			var backgroundColorWithOpacityAdjustment = "rgba("+parseInt(bgcolor[0].replace(/\D/g,''))+","
															  +parseInt(bgcolor[1].replace(/\D/g,''))+","
															  +parseInt(bgcolor[2].replace(/\D/g,''))+
															  ",0.6)";
			annotationColorsBySpanID[uniqueSpanID]=backgroundColorWithOpacityAdjustment;
		});
		resetAnnotationColor();

		// Add click handler
		jQuery("span[spanid]").click(function() {
	  		debounceCollect(this);
		});


		jQuery("#ap_filter_active").append("Click on tags, categories or people to build a filter.");
		jQuery("#annotation_detail_panel").fadeIn("fast");
	}

	// Collect all the annotations from a click event
	function debounceCollect(annotation){
		if(debounceTimer == null){
			started=true;
		}
		collectedAnnotations.push(annotation);
		clearTimeout(debounceTimer);
		debounceTimer = setTimeout("debounce_stop()", 10);
	}
	function debounce_stop(){


		//FIXME: this is not the way to de-dup an spansArrayvar uniqueNames = [];
		u_collectedAnnotations=[];
		jQuery.each(collectedAnnotations, function(i, el){
		    if(jQuery.inArray(el, u_collectedAnnotations) === -1) u_collectedAnnotations.push(el);
		});

		displayPopOverWith(u_collectedAnnotations);
		debounceTimer=null;
		collectedAnnotations=[];
	}

	// Takes an array of spans (from onclick) and returns a more useful JSON
	function annotationsWithMetadata(spansArray){
		var excerptLength=125;
		var teaserLength=200;
		var data = [];
		for(var idx=0;idx<spansArray.length;idx++){
			var thisAnnotation =[];
			thisAnnotation.spanID = spansArray[idx].getAttribute("spanID");
			thisAnnotation.annotation = annotationHash()[spansArray[idx].getAttribute("data-uuid")];


			var convertLinebreaksToHTML = thisAnnotation.annotation.quote.replace(/(?:\r\n|\r|\n)/g, ' ');
			thisAnnotation.annotated_text = convertLinebreaksToHTML.trim().substring(0,excerptLength);

			thisAnnotation.author_email = thisAnnotation.annotation.user?thisAnnotation.annotation.user:null;
			thisAnnotation.author_username = thisAnnotation.annotation.username;
			thisAnnotation.tags = thisAnnotation.annotation.tags;


			// Author
			thisAnnotation.displaystring_author="";
			if(thisAnnotation.author_username){
				thisAnnotation.displaystring_author = thisAnnotation.author_username
				// + " ("+thisAnnotation.author_email+")"; Commenting out to remove email address from display.
			}

			// Tags
			thisAnnotation.displaystring_tags="";
			if(thisAnnotation.annotation.tags.length > 0){
				for(var idx2=0;idx2<thisAnnotation.annotation.tags.length;idx2++){
					thisAnnotation.displaystring_tags += ("<span class='popover_tag'>"+thisAnnotation.annotation.tags[idx2]+"</span>");
				}
			}

			// Categories
			thisAnnotation.displaystring_categories="";
			if(thisAnnotation.annotation.annotation_categories.length > 0){
				for(var idx2=0;idx2<thisAnnotation.annotation.annotation_categories.length;idx2++){
					thisAnnotation.displaystring_categories += ("<span class='popover_category'>"+categoriesByID[thisAnnotation.annotation.annotation_categories[idx2]]+"</span>");
				}
			}

			// Strip tags and linebreaks into teaser
			var annotationText = jQuery("<div>").html(thisAnnotation.annotation.text).text().trim();
			annotationText = annotationText.replace(/(\r\n|\n|\r)/gm,"");
			thisAnnotation.teaser = annotationText.substring(0,teaserLength);
			if(annotationText.length > teaserLength){
				thisAnnotation.teaser += " <strong>…</strong>";
			}

			data[idx]=thisAnnotation;
		}
		return data;
	}

	function annotationHash(option){
		if (typeof annotationsAsHash === 'undefined' || option === "refresh") {
			annotationsAsHash=[];
			if (!('uuid' in annotations[0])){
				console.error("AnnotationTool: ERROR Cannot find UUID in annotations, are you using an old snapshot?");
			}
			for(idx=0;idx<annotations.length;idx++){
				thisAnnotation=annotations[idx];
				annotationsAsHash[thisAnnotation.uuid]=thisAnnotation;
			}
		}
		return annotationsAsHash;
	}

	// Reveal a popover populated with the content
	function displayPopOverWith(collectedAnnotations){
		jQuery( "#annotation_detail_panel" ).empty();
		var content = "";//"Annotation count: "+collectedAnnotations.length;
		var annotationsUnderThisClick = annotationsWithMetadata(collectedAnnotations);

		var previousText="";
		jQuery.each( annotationsUnderThisClick, function( key, thisAnnotation ) {
				content += "<table spanID='"+thisAnnotation.spanID+"' id='"+thisAnnotation.annotation.uuid+"'>";

				if(thisAnnotation.annotated_text !== previousText){
					content += "<tr>";
					content += "	<td class='popover_annotatedText' colspan=2>&ldquo;…"+thisAnnotation.annotated_text+"…&rdquo;</td>";
					content += "</tr>";
				}
				previousText=thisAnnotation.annotated_text;


				// Author
				if(thisAnnotation.displaystring_author.length > 0){
					content += "<tr>";
					content += "	<td class='personOption ";
					content += "	popover_typeIdentifierString'>"+thisAnnotation.displaystring_author+"</td>";
					content += "</tr>";
				}

				// Tags
				if(thisAnnotation.displaystring_tags.length > 0){
					content += "<tr>";
					content += "	<td class='tagOption ";
					content += "	popover_typeIdentifierString'>"+thisAnnotation.displaystring_tags+"</td>";
					content += "</tr>";
				}

				// Categories
				if(thisAnnotation.displaystring_categories.length > 0){
					content += "<tr>";
					content += "	<td class='categoryOption ";
					content += "	popover_typeIdentifierString'>"+thisAnnotation.displaystring_categories+"</td>";
					content += "</tr>";
				}

				content += "<tr>";
				content += "	<td class='popover_teaser'>"+thisAnnotation.teaser+"</td>";
				content += "</tr>";
				content += "</table>";
		});

		// Build a popover
		jQuery(".popover_wrapper").remove();
		var currentPopoverID=generateUUID();
		var currentPopoverDiv='#'+currentPopoverID;
		var popover =
		'<div id="'+currentPopoverID+'" class="popover_wrapper" tabindex="-1">'+
		 	'<div class="push popover_content">'+
		    	content+
		  	'</div>'+
		'</div>';

		// Find the right location
		jQuery('body').append(popover);
		jQuery(currentPopoverDiv).hide();
		var divUnderClick = "span[spanID='"+collectedAnnotations[0].getAttribute("spanID")+"']";
		var topPos = lastClickPosition.y;
		var leftPos = lastClickPosition.x;// + ($(divUnderClick).width()/2);
		var allRelatedAnnotation = "span[data-uuid='"+collectedAnnotations[0].getAttribute("data-uuid")+"']";
		jQuery(allRelatedAnnotation).addClass("annotationSelected");
		jQuery(divUnderClick).addClass("annotationSelectedExact");
		currentSelectedSpan=jQuery(allRelatedAnnotation);

		// Display
		jQuery(currentPopoverDiv).on( "focusout", function(){removeExistingPopover();});
		jQuery(currentPopoverDiv).css({top: topPos, left: leftPos, position:'absolute'}).fadeIn("fast");
		jQuery(currentPopoverDiv).focus();

		// Add click linked
		jQuery("table").each(function(index) {
			jQuery(this).on( "click", function(){
				removeExistingPopover();
				annotationPanel.loadAnnotation(jQuery(this)[0].getAttribute("spanID"));
			});
		});

	}

	function removeExistingPopover(){
		jQuery("span").removeClass("annotationSelected");
		jQuery("span").removeClass("annotationSelectedExact");
		jQuery(document).click( function(event) { if( jQuery(event.target).closest('.popover_wrapper').length == 0 ) { jQuery('.popover_wrapper').fadeOut('slow'); } } );
		}


	jQuery( window ).resize(function() {
	  removeExistingPopover();
	});

	jQuery( window ).scroll(function() {
	  removeExistingPopover();
	});

	function toggleDensity(){
		setDensityMode(!densityView);
		applyFilters();
	}
	function setDensityMode(modeShouldBeOn){
		densityView=modeShouldBeOn;
		if(modeShouldBeOn){
			jQuery("#button_densityView").removeClass("fa-adjust on");
			jQuery("#button_densityView").addClass("fa-adjust off");
			jQuery("span[spanid]").each(function(index) {
				jQuery(this).css("background-color", "rgba(64,64,64,.3)");
			});
		}else{
			jQuery("#button_densityView").removeClass("fa-adjust off");
			jQuery("#button_densityView").addClass("fa-adjust on");
			resetAnnotationColor();
		}
	}


	function toggleFilter(){
		filterApplied=!filterApplied;
		applyFilters();
	}
	function applyFilters(){

		// Remove all click handler and all colors
		jQuery("span[spanID]").removeAttr("style");
		jQuery("span[spanID]").off();

		// Turn on selected if there is anything to apply
		if(filterApplied && (jQuery("#ap_filter_active").find("div").length > 0) ){
			jQuery("#button_filterApplied").removeClass("fa-toggle-off");
			jQuery("#button_filterApplied").addClass("fa-toggle-on");
			jQuery("#button_filterAppliedStatus").addClass("on");
			jQuery("#button_filterAppliedStatus").removeClass("off");

			// Build an array of uuids that match the filter criteria
			var matchingAnnotationIDs = [];
			jQuery("#ap_filter_active").find("div").each(function(){

				// string: tag | category | person
				var filterType = jQuery(this)[0].getAttribute("filtertype");

				// id: tag | catID | email
				var filterID = jQuery(this)[0].getAttribute("filterid");

				for(idx=0;idx<annotations.length;idx++){
					var thisAnnotation = annotations[idx];

					switch (filterType) {
						case "tag":
							if(thisAnnotation.tags.indexOf(filterID) > -1){
								matchingAnnotationIDs.push(thisAnnotation.uuid);
							}
							break;

						case "category":
							if(thisAnnotation.annotation_categories.indexOf(parseInt(filterID)) > -1){
								matchingAnnotationIDs.push(thisAnnotation.uuid);
							}
							break;

						case "person":
							if(thisAnnotation.user.indexOf(filterID) > -1){
								matchingAnnotationIDs.push(thisAnnotation.uuid);
							}
							break;
					}
				}

			});

			// Map uuids to spanIDs
			var theseSpansMatchFilter=[];
			for(idx=0;idx<matchingAnnotationIDs.length;idx++){
				var thisAnnotationID=matchingAnnotationIDs[idx];
				for(idx2=0;idx2<spansByDataUUID[thisAnnotationID].length;idx2++){
					theseSpansMatchFilter.push(spansByDataUUID[thisAnnotationID][idx2]);
				}
			}

			// Finally restore the spans that match our filter parameters
			jQuery("span[spanID]").each(function(){
				var thisSpanID = jQuery(this)[0].getAttribute("spanID");
				if(theseSpansMatchFilter.indexOf(thisSpanID) > -1){
					jQuery(this).css("border", "1px grey dashed");
					jQuery(this).css("border-left", "0px");
					jQuery(this).css("border-right", "0px");
					if(densityView){
						jQuery(this).css("background-color", "rgba(64,64,64,.3)");
					}else{
						jQuery(this).css("background-color", annotationColorsBySpanID[thisSpanID]);
					}
					jQuery(this).click(function() {debounceCollect(this);});
				}
			});

		// Turn off
		}else{
			jQuery("#button_filterApplied").removeClass("fa-toggle-on");
			jQuery("#button_filterApplied").addClass("fa-toggle-off");
			jQuery("#button_filterAppliedStatus").removeClass("on");
			jQuery("#button_filterAppliedStatus").addClass("off");
			resetFilters();
		}
	}

	// Clear out the filters
	function resetFilters(){

		// reset the colors
		setDensityMode(densityView);

		// Add click handler
		jQuery("span[spanid]").click(function() {
	  		debounceCollect(this);
		});
	}

	// Eugene Burtsev
	// https://github.com/eburtsev/jquery-uuid
	function generateUUID() {
		return 'xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx'.replace(/[xy]/g, function(c) {
			var r = Math.random() * 16 | 0,
				v = c == 'x' ? r : (r & 0x3 | 0x8);
			return v.toString(16);
		});
	}


	// Resets the annotations to their original colors
	function resetAnnotationColor() {
		idx = 0;
		jQuery("span[spanid]").each(function(index) {
			var thisSpanID = jQuery(this)[0].getAttribute("spanID");
			jQuery(this).removeClass();
			jQuery(this).css("background-color", annotationColorsBySpanID[thisSpanID]);
			idx++;
		});
	}
