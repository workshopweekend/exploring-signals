$(function() {
  $('pre').wrap('<div class="wrapped-code hidden"></div>');
  $('.wrapped-code').prepend('<span class="show-code-link"><span class="inner">Show code &raquo;</span></span><span class="hide-code-link">&times;</span>');
  $('.show-code-link').click(function() {
    var parent = $(this).parent('.wrapped-code');
    parent.removeClass('hidden');
    parent.css('height', parent.find('pre').height()+40);
  });
  $('.hide-code-link').click(function() {
    var parent = $(this).parent('.wrapped-code');
    parent.addClass('hidden');
    parent.css('height', 50);
  });
});