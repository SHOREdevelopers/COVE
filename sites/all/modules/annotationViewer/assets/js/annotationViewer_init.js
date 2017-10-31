jQuery(document).ready(function($) {
	$(window).on("load", function() {

		// Sanity check: if there are annotations on this page
		if ($('body').find('.field-name-body').length !== 0) {
			console.log('AnnotationViewer: Ok! Injecting sidebar.');

			// Grab handle to annotator object (this is ugly)
			var annotator = $('.field-name-body').annotator().annotator().data('annotator');


			// Load the localizations
			$.i18n.load(i18n_dict);

			// Load the annotations (the global var 'annotations' is part of the snapshot)
			annotator.loadAnnotations(annotations);


			// Permissions determine UI in annotation
			var allowedUser = 'anon';
			annotator.addPlugin('Permissions', {
				user: allowedUser,
				permissions: {
					'read': [allowedUser],
					'update': ['none'],
					'delete': ['none'],
					'admin': ['none']
				},
				showViewPermissionsCheckbox: false,
				showEditPermissionsCheckbox: false
			});


			// Add the annotation sidebar plugin
			annotator.addPlugin('AnnotatorViewer');

			// Include reference to self so it can apply click actions to page and refer to self
			annotator.plugins.AnnotatorViewer.addToPage(annotator.plugins.AnnotatorViewer);

			// Add Categories and define their classes
			// This also (weirdly) is responsible for inserting the ids
			// But just in the sidebar
			annotator.addPlugin('Categories', {
				Historical: 'annotator-hl-5',
				Textual: 'annotator-hl-6',
				Cultural: 'annotator-hl-3',
				Interpretative: 'annotator-hl-4',
				Linguistic: 'annotator-hl-7'
			});


			// Allow the annotation panel to be scrollable via slimscroll
			$('#anotacions-uoc-panel').slimscroll({
				height: '100%'
			});

		}
	})
});
