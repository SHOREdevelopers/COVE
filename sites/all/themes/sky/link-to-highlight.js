// Adapted slightly from http://stackoverflow.com/questions/18150090/jquery-scroll-element-to-the-middle-of-the-screen-instead-of-to-the-top-with-a

jQuery(document).ready(function($) {
    $('.to-highlight').live('click', function(e) { 
  var el = $( e.target.getAttribute('href') );
  var elOffset = el.offset().top;
  var elHeight = el.height();
  var windowHeight = $(window).height();
  var offset;

  if (elHeight < windowHeight) {
    offset = elOffset - ((windowHeight / 2) - (elHeight / 2));
  }
  else {
    offset = elOffset;
  }
  
  var speed = 700;
  $('html, body').animate({scrollTop:offset}, speed, function(){
  //$(el).effect("pulsate"));
  $(el).fadeOut(300).fadeIn(300);
  });
//$('.views-field-text').find('.views-more-link').addClass('colorbox-node');
  
});

});
