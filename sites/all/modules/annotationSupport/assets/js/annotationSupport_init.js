jQuery(document).ready(function($) {

	// Sanity check: if there are annotations on this page
	if (typeof annotations !== 'undefined') {
		console.log('AnnotationSupport: Found annotations! Injecting support.');
		annotationToolInit();
		$("#annotation_detail_panel").fadeIn("fast");
	}else{
		return;
	}

	// Init: After annotations are loaded
	function annotationToolInit(){

		currentPopoverID=null;
		currentSelectedSpan=null;
		debounceTimer=null;
		collectedAnnotations=[];
		densityView=false;
		filterApplied=false;

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
		$("#ap_button_panelToggle").click(function(){
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
		$(".annotator-hl").each(function(index) {

			// Add a unique ID for every span
			var uniqueSpanID = generateUUID();
			$(this).attr('spanID', uniqueSpanID);

			// Create a lookup table for filters
			var thisDataUUID = $(this)[0].getAttribute("data-uuid");
			if(!(thisDataUUID in spansByDataUUID)){
				spansByDataUUID[thisDataUUID]=[];
			}
			spansByDataUUID[thisDataUUID].push(uniqueSpanID);

			// Add some transparency to the colors
			// Assumes rgb(r,g,b) converts to rgba(r,g,b,0.6)
			var bgcolor = $(this).css('background-color').split(",");
			var backgroundColorWithOpacityAdjustment = "rgba("+parseInt(bgcolor[0].replace(/\D/g,''))+","
															  +parseInt(bgcolor[1].replace(/\D/g,''))+","
															  +parseInt(bgcolor[2].replace(/\D/g,''))+
															  ",0.6)";
			annotationColorsBySpanID[uniqueSpanID]=backgroundColorWithOpacityAdjustment;
		});
		resetAnnotationColor();

		// Add click handler
		$("span[spanid]").click(function() {
	  		debounceCollect(this);
		});


		$("#ap_filter_active").append("Click on tags, categories or people to build a filter.");
		$("#annotation_detail_panel").fadeIn("fast");
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
		$.each(collectedAnnotations, function(i, el){
		    if($.inArray(el, u_collectedAnnotations) === -1) u_collectedAnnotations.push(el);
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
				thisAnnotation.displaystring_author = thisAnnotation.author_username + " ("+thisAnnotation.author_email+")";
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
			var annotationText = $("<div>").html(thisAnnotation.annotation.text).text().trim();
			annotationText = annotationText.replace(/(\r\n|\n|\r)/gm,"");
			thisAnnotation.teaser = annotationText.substring(0,teaserLength);
			if(annotationText.length > teaserLength){
				thisAnnotation.teaser += "…";
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
		$( "#annotation_detail_panel" ).empty();
		var content = "";//"Annotation count: "+collectedAnnotations.length;
		var annotationsUnderThisClick = annotationsWithMetadata(collectedAnnotations);

		var previousText="";
		$.each( annotationsUnderThisClick, function( key, thisAnnotation ) {
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

		removeExistingPopover();

		// Build a popover
		currentPopoverID=generateUUID();
		currentPopoverDiv='#'+currentPopoverID;
		var popover =
		'<div id="'+currentPopoverID+'" class="popover_wrapper" tabindex="-1">'+
		 	'<div class="push popover_content">'+
		    	content+
		  	'</div>'+
		'</div>';

		// Find the right location
		$('body').append(popover);
		$(currentPopoverDiv).hide();
		var divUnderClick = "span[spanID='"+collectedAnnotations[0].getAttribute("spanID")+"']";
		var topPos = $(divUnderClick).position().top;
		var leftPos = $(divUnderClick).position().left + ($(divUnderClick).width()/2);
		var allRelatedAnnotation = "span[data-uuid='"+collectedAnnotations[0].getAttribute("data-uuid")+"']";
		$(allRelatedAnnotation).addClass("annotationSelected");
		$(divUnderClick).addClass("annotationSelectedExact");
		currentSelectedSpan=$(allRelatedAnnotation);

		// Display
		$(currentPopoverDiv).on( "focusout", function(){removeExistingPopover();});
		$(currentPopoverDiv).css({top: topPos, left: leftPos, position:'absolute'}).fadeIn("fast");
		$(currentPopoverDiv).focus();

		// Add click linked
		$("table").each(function(index) {
			$(this).on( "click", function(){
				removeExistingPopover();
				annotationPanel.loadAnnotation($(this)[0].getAttribute("spanID"));
			});
		});

	}

	function removeExistingPopover(){
		if(currentPopoverID != null){
			var currentPopoverDiv='#'+currentPopoverID;
			$("span").removeClass("annotationSelected");
			$("span").removeClass("annotationSelectedExact");
			$(currentPopoverDiv).fadeOut("fast", function(){});
		}
	}

	$( window ).resize(function() {
	  removeExistingPopover();
	});


	function toggleDensity(){
		setDensityMode(!densityView);
		applyFilters();
	}
	function setDensityMode(modeShouldBeOn){
		densityView=modeShouldBeOn;
		if(modeShouldBeOn){
			$("#button_densityView").removeClass("fa-file-text-o");
			$("#button_densityView").addClass("fa-file-text");
			$("span[spanid]").each(function(index) {
				$(this).css("background-color", "rgba(64,64,64,.3)");
			});
		}else{
			$("#button_densityView").removeClass("fa-file-text");
			$("#button_densityView").addClass("fa-file-text-o");
			resetAnnotationColor();
		}
	}


	function toggleFilter(){
		filterApplied=!filterApplied;
		applyFilters();
	}
	function applyFilters(){

		// Remove all click handler and all colors
		$("span[spanID]").removeAttr("style");
		$("span[spanID]").off();

		// Turn on selected if there is anything to apply
		if(filterApplied && ($("#ap_filter_active").find("div").length > 0) ){
			$("#button_filterApplied").removeClass("fa-toggle-off");
			$("#button_filterApplied").addClass("fa-toggle-on");
			$("#button_filterAppliedStatus").addClass("on");
			$("#button_filterAppliedStatus").removeClass("off");

			// Build an array of uuids that match the filter criteria
			var matchingAnnotationIDs = [];
			$("#ap_filter_active").find("div").each(function(){

				// string: tag | category | person
				var filterType = $(this)[0].getAttribute("filtertype");

				// id: tag | catID | email
				var filterID = $(this)[0].getAttribute("filterid");

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
			$("span[spanID]").each(function(){
				var thisSpanID = $(this)[0].getAttribute("spanID");
				if(theseSpansMatchFilter.indexOf(thisSpanID) > -1){
					$(this).css("border", "1px grey dashed");
					$(this).css("border-left", "0px");
					$(this).css("border-right", "0px");
					if(densityView){
						$(this).css("background-color", "rgba(64,64,64,.3)");
					}else{
						$(this).css("background-color", annotationColorsBySpanID[thisSpanID]);
					}
					$(this).click(function() {debounceCollect(this);});
				}
			});

		// Turn off
		}else{
			$("#button_filterApplied").removeClass("fa-toggle-on");
			$("#button_filterApplied").addClass("fa-toggle-off");
			$("#button_filterAppliedStatus").removeClass("on");
			$("#button_filterAppliedStatus").addClass("off");
			resetFilters();
		}
	}

	// Clear out the filters
	function resetFilters(){

		// reset the colors
		setDensityMode(densityView);

		// Add click handler
		$("span[spanid]").click(function() {
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
		$("span[spanid]").each(function(index) {
			var thisSpanID = $(this)[0].getAttribute("spanID");
			$(this).removeClass();
			$(this).css("background-color", annotationColorsBySpanID[thisSpanID]);
			idx++;
		});
	}
});
