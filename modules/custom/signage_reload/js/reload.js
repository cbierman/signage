/**
 * @file
 * Javascript for the Bongo panes module.
 */

 // Namespace jQuery to avoid conflicts.
(function($) {
  // Fix to hide AJAX error alert messages.
  // http://drupal.org/node/1232416#comment-6667014
  window.alert = function(arg) { if (window.console && console.log) { console.log(arg);}};
  // Define the behavior.
  Drupal.reload = function() {
    // Call updateAvailability every ten minutes.
    setInterval(Drupal.reload.updateWindow, 120000);
  };

  // Attach reload behavior.
  Drupal.behaviors.reload = {
    attach: function(context, settings) {
      $('html', context).once('reload', function() {
        Drupal.reload();
      });
    }
  };

  // Update all Availability on the page
  Drupal.reload.updateWindow = function() {
    if (hostReachable(window.location.hostname + Drupal.settings.basePath)) {
      document.location.reload(true);
    }
    else {
    }
  };

})(jQuery);
