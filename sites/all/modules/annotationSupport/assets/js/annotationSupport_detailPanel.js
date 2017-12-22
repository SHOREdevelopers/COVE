/*
annotation_detailpanel.js

Should be called after annotationSupport_detailPanel.js

Assumes this is in the DOM:

<div id="annotation_detail_panel">
	<div id="annotation_detail_panel_content">
		<div class="tabbedContent" tabName="annotation" id="annotation_panel_tab_annotation"></div>
		<div class="tabbedContent" tabName="filters" id="annotation_panel_tab_filters"></div>
	</div>
</div>

*/

jQuery(document).ready(function($) {
	function AnnotationPanel(){
		// Everything relies on "annotation_support" having been run
		if (typeof annotationsAsHash === 'undefined') {
			console.log('AnnotationDetailPanel: Annotations not found, did you run me before annotationSupport_init.js?');
			return;
		}



		// Build the tabs
		buildTabs();
		this.initFilterPanel();
		this.openTab('Annotations');

		// Start minimized
		this.panelOpen(false);

		// Make visible
		$("#ap_detail_panel").fadeIn("fast");


		function buildTabs(){
			// Init tab headers
			$(".ap_tab").remove();
			tabSet="";
			$(".ap_tabContent").each(function(){
				var tabName = $(this)[0].getAttribute("tabName");
				tabSet += "<div class='ap_tab' onclick='annotationPanel.openTab(\""+tabName+"\")'>"+tabName+"</div>";
			});
			$("#ap_detail_panel_content").prepend(tabSet);

			// Position the tabs
			var counter=0;
			var indent=4;
			$(".ap_tab").each(function(){
				leftMargin=indent+"rem";
				$(this).css("left",leftMargin);
				indent+=6.3;
			});
			$(".ap_tab").first().addClass("open");
		}
	};

	AnnotationPanel.prototype.openTab = function(tabName){
		this.panelOpen(true);
		// Hide tab content
		$(".ap_tabContent").hide();

		// Set up the tabs themselves
		$(".ap_tab").each(function(){
			var thisTabName = $(this).text();
			$(this).removeClass("open");
			if(tabName === thisTabName){
				$(this).addClass("open");
			}
		});

		// Reveal proper tab content
		var selector = 'div[tabName="'+tabName+'"]';
		$(selector).show();
	}

	AnnotationPanel.prototype.togglePanel = function(){
		var isMinimized = $("#ap_detail_panel").hasClass("ap_detail_panel_minimized");
		this.panelOpen(isMinimized);
	}
	AnnotationPanel.prototype.panelOpen = function(shouldOpen){
		if(shouldOpen){
			$(".ap_tab").show();
			$("#ap_detail_panel").removeClass("ap_detail_panel_minimized");
			$("#ap_button_panelToggle").removeClass("fa-arrow-circle-up");
			$("#ap_button_panelToggle").addClass("fa-arrow-circle-down");

		}else{
			$(".ap_tab").hide();
			$("#ap_detail_panel").addClass("ap_detail_panel_minimized");
			$("#ap_button_panelToggle").removeClass("fa-arrow-circle-down");
			$("#ap_button_panelToggle").addClass("fa-arrow-circle-up");
		}
	}

	// Init filter panel
	AnnotationPanel.prototype.initFilterPanel = function(){

		// Filters
		var categoryList="Categories:<br>";
		for(idx=0;idx<filterLists.annotation_categories.length;idx++){
			var thisID = generateUUID();
			categoryList += "<div filterType='category' "+
							"class='filterOption categoryOption' "+
							"id='"+thisID+"' "+
							"onclick=\"annotationPanel.toggleFilterItemState(\'"+thisID+"\')\" "+
							"filterID='"+filterLists.annotation_categories[idx].id+"'>"+
							filterLists.annotation_categories[idx].text+
							"</div>";
		}
		$("#ap_filter_category").empty();
		$("#ap_filter_category").append(categoryList);

		var tagList="Tags:<br>";
		for(idx=0;idx<filterLists.tags.length;idx++){
			var thisID = generateUUID();
			tagList +=  "<div filterType='tag' "+
						"class='filterOption tagOption' "+
						"id='"+thisID+"' "+
						"onclick=\"annotationPanel.toggleFilterItemState(\'"+thisID+"\')\" "+
						"filterID='"+filterLists.tags[idx].id+"'>"+
						filterLists.tags[idx].text+
						"</div>";
		}
		$("#ap_filter_tags").empty();
		$("#ap_filter_tags").append(tagList);

		var userList="People:<br>";
		for(idx=0;idx<filterLists.user.length;idx++){
			var thisID = generateUUID();
			userList += "<div filterType='person' "+
						"class='filterOption personOption' "+
						"id='"+thisID+"' "+
						"onclick=\"annotationPanel.toggleFilterItemState(\'"+thisID+"\')\" "+
						"filterID='"+filterLists.user[idx].id+"'>"+
						filterLists.user[idx].text+
						" ("+filterLists.user[idx].id+")"+
						"</div>";
		}
		$("#ap_filter_people").empty();
		$("#ap_filter_people").append(userList);

		// Sort them
		this.sortFilterItems();
	}

	AnnotationPanel.prototype.toggleFilterItemState = function(id){
		var selector="#"+id;

		// Remove from filter
		if($(selector).hasClass("active")){
			$(selector).removeClass("active");

			switch($(selector).attr("filterType")) {
			    case "tag":
					$(selector).appendTo("#ap_filter_tags");
					break;

				case "category":
					$(selector).appendTo("#ap_filter_category");
					break;

				case "person":
					$(selector).appendTo("#ap_filter_people");
					break;
			}

		// Add to filter
		}else{
			$(selector).addClass("active");
			$(selector).appendTo("#ap_filter_active");
		}

		applyFilters();
		this.sortFilterItems();

	}

	AnnotationPanel.prototype.sortFilterItems = function(divID){
		this.sortFiltersIn("#ap_filter_tags");
		this.sortFiltersIn("#ap_filter_category");
		this.sortFiltersIn("#ap_filter_people");
		this.sortFiltersIn("#ap_filter_active");
	}
	AnnotationPanel.prototype.sortFiltersIn = function(divID){
		var tags = $(divID).children(".filterOption");
		var sortedTags = tags.sort(function(a,b){
			return $(a).text().toLowerCase().localeCompare($(b).text().toLowerCase());
		});
		$(divID).html(sortedTags);
	}

	// Load a particular annotation into the annotation panel
	AnnotationPanel.prototype.loadAnnotation = function(spanID){
		this.panelOpen(true);
		var thisAnnotation = annotationsWithMetadata($("span[spanID='"+spanID+"']").first())[0];

		// Load annotation info into infobar

		var sourceInfo =  "<div class='";
		switch (thisAnnotation.type) {
			case "user":
				sourceInfo += "personOption";
				break;

			case "tag":
				sourceInfo += "tagOption";
				break;

			case "category":
				sourceInfo += "categoryOption";
				break;
		}


		var sourceInfo = "<table><tr>";
		// Author
		if(thisAnnotation.displaystring_author.length > 0){
			sourceInfo += "	<td class='personOption ";
			sourceInfo += "	popover_typeIdentifierString'>"+thisAnnotation.displaystring_author+"</td>";
		}

		// Tags
		if(thisAnnotation.displaystring_tags.length > 0){
			sourceInfo += "	<td class='tagOption ";
			sourceInfo += "	popover_typeIdentifierString'>"+thisAnnotation.displaystring_tags+"</td>";
		}

		// Categories
		if(thisAnnotation.displaystring_categories.length > 0){
			sourceInfo += "	<td class='categoryOption ";
			sourceInfo += "	popover_typeIdentifierString'>"+thisAnnotation.displaystring_categories+"</td>";
		}
		sourceInfo  += "</tr></table>";

		$("#ap_annotation_sourceinfo").empty();
		$("#ap_annotation_sourceinfo").append(sourceInfo);

		// Load source text into detail pane
		var convertLinebreaksToHTML = thisAnnotation.annotation.quote.replace(/(?:\r\n|\r|\n)/g, '<br />');
		$("#ap_annotation_sourcetext").empty();
		$("#ap_annotation_sourcetext").append("&ldquo;"+convertLinebreaksToHTML+"&rdquo;");
		$("#ap_annotation_sourcetext").scrollTop(0);

		// Load annotation into detail pane
		$("#ap_annotation_annotation").empty();
		$("#ap_annotation_annotation").append(thisAnnotation.annotation.text);
		$("#ap_annotation_annotation").scrollTop(0);

		this.openTab('Annotations');
	}
});
