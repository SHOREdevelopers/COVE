/*
  Control code for Annotator Categories. Collects settings set by the admin, sorts the categories by rank, and sets the category name to a variable used by the Categories extension.
  Extension file at annotator-full-extension-categories.js 
*/
// Amanda: Extension file at annotator-full-extension-categories.js was actually missing--must have gotten dropped at some point. Added it back from /master and this fixed the issue of categories displaying after being chosen, but not the issue of no way to choose a category for an annotation.
(function ($) {
  Drupal.behaviors.annotatorCategories = {
    attach: function (context, settings) {
      // settings defined in CategoriesAnnotatorPlugin.class.inc
      Drupal.Annotator.annotator('addPlugin', 'Categories', Drupal.settings.annotator_categories);
    }
  };
})(jQuery);
