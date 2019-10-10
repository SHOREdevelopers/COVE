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
		jQuery("#ap_detail_panel").fadeIn("fast");


		function buildTabs(){
			// Init tab headers
			jQuery(".ap_tab").remove();
			tabSet="";
			jQuery(".ap_tabContent").each(function(){
				var tabName = jQuery(this)[0].getAttribute("tabName");
				tabSet += "<div class='ap_tab' onclick='annotationPanel.openTab(\""+tabName+"\")'>"+tabName+"</div>";
			});
			jQuery("#ap_detail_panel_content").prepend(tabSet);

			// Position the tabs
			var counter=0;
			var indent=3;
			jQuery(".ap_tab").each(function(){
				leftMargin=indent+"rem";
				jQuery(this).css("left",leftMargin);
				indent+=7;
			});
			jQuery(".ap_tab").first().addClass("open");
		}
	};

	AnnotationPanel.prototype.openTab = function(tabName){
		this.panelOpen(true);
		// Hide tab content
		jQuery(".ap_tabContent").hide();

		// Set up the tabs themselves
		jQuery(".ap_tab").each(function(){
			var thisTabName = jQuery(this).text();
			jQuery(this).removeClass("open");
			if(tabName === thisTabName){
				jQuery(this).addClass("open");
			}
		});

		// Reveal proper tab content
		var selector = 'div[tabName="'+tabName+'"]';
		jQuery(selector).show();
	}

	AnnotationPanel.prototype.togglePanel = function(){
		var isMinimized = jQuery("#ap_detail_panel").hasClass("ap_detail_panel_minimized");
		this.panelOpen(isMinimized);
	}
	AnnotationPanel.prototype.panelOpen = function(shouldOpen){
		if(shouldOpen){
			jQuery(".ap_tab").show();
			jQuery("#ap_detail_panel").removeClass("ap_detail_panel_minimized");
			jQuery(".ap_tab_pinned").removeClass("tab-closed");
			jQuery(".ap_tab_pinned").addClass("tab-open");
			jQuery("#ap_button_panelToggle").removeClass("fa-angle-double-left");
			jQuery("#ap_button_panelToggle").addClass("fa-angle-double-right");

		}else{
			jQuery(".ap_tab").hide();
			jQuery("#ap_detail_panel").addClass("ap_detail_panel_minimized");
			jQuery(".ap_tab_pinned").addClass("tab-closed");
			jQuery(".ap_tab_pinned").removeClass("tab-open");
			jQuery("#ap_button_panelToggle").removeClass("fa-angle-double-right");
			jQuery("#ap_button_panelToggle").addClass("fa-angle-double-left");
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
		jQuery("#ap_filter_category").empty();
		jQuery("#ap_filter_category").append(categoryList);

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
		jQuery("#ap_filter_tags").empty();
		jQuery("#ap_filter_tags").append(tagList);

		var userList="People:<br>";
		for(idx=0;idx<filterLists.user.length;idx++){
			var thisID = generateUUID();
			userList += "<div filterType='person' "+
						"class='filterOption personOption' "+
						"id='"+thisID+"' "+
						"onclick=\"annotationPanel.toggleFilterItemState(\'"+thisID+"\')\" "+
						"filterID='"+filterLists.user[idx].id+"'>"+
						filterLists.user[idx].text+
						/*" ("+filterLists.user[idx].id+")"+*/
						"</div>";
		}
		jQuery("#ap_filter_people").empty();
		jQuery("#ap_filter_people").append(userList);

		// Sort them
		this.sortFilterItems();
	}

	AnnotationPanel.prototype.toggleFilterItemState = function(id){
		var selector="#"+id;

		// Remove from filter
		if(jQuery(selector).hasClass("active")){
			jQuery(selector).removeClass("active");

			switch(jQuery(selector).attr("filterType")) {
			    case "tag":
					jQuery(selector).appendTo("#ap_filter_tags");
					break;

				case "category":
					jQuery(selector).appendTo("#ap_filter_category");
					break;

				case "person":
					jQuery(selector).appendTo("#ap_filter_people");
					break;
			}

		// Add to filter
		}else{
			jQuery(selector).addClass("active");
			jQuery(selector).appendTo("#ap_filter_active");
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
		var tags = jQuery(divID).children(".filterOption");
		var sortedTags = tags.sort(function(a,b){
			return jQuery(a).text().toLowerCase().localeCompare(jQuery(b).text().toLowerCase());
		});
		jQuery(divID).html(sortedTags);
	}

	// Load a particular annotation into the annotation panel
	AnnotationPanel.prototype.loadAnnotation = function(spanID){
		this.panelOpen(true);
		var thisAnnotation = annotationsWithMetadata(jQuery("span[spanID='"+spanID+"']").first())[0];

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

		jQuery("#ap_annotation_sourceinfo").empty();
		jQuery("#ap_annotation_sourceinfo").append(sourceInfo);

		// Load source text into detail pane
		var convertLinebreaksToHTML = thisAnnotation.annotation.quote.replace(/(?:\r\n|\r|\n)/g, '<br />');
		jQuery("#ap_annotation_sourcetext").empty();
		jQuery("#ap_annotation_sourcetext").append("&ldquo;"+convertLinebreaksToHTML+"&rdquo;");
		jQuery("#ap_annotation_sourcetext").scrollTop(0);

		// Load annotation into detail pane
		jQuery("#ap_annotation_annotation").empty();
		jQuery("#ap_annotation_annotation").append(thisAnnotation.annotation.text);
		jQuery("#ap_annotation_annotation").scrollTop(0);

		this.openTab('Annotations');
	}
