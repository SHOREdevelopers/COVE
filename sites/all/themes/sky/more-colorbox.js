// Used this to invoke Colorbox Node on the fly: https://www.drupal.org/node/2023859
jQuery(document).ready(function($) {
$('.view-annosidebar .views-field-text').find('.views-more-link').addClass('colorbox-node');
//bind the colorboxNode to each link element
   $('.colorbox-node').each(function(){
      $(this).colorboxNode({'launch': false});
   });
});
