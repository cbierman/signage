/**
 * @file
 * Javascript for the Bongo panes module.
 */

 // Namespace jQuery to avoid conflicts.
(function($) {
  // Define the behavior.
  Drupal.reload = function() {
    // Call updateAvailability every two minutes.
    setInterval(Drupal.reload.updateWindow, 12000);
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
      // Loading a new page might create error alerts for already running ajax.
      // Suppress them: https://drupal.org/node/1232416#comment-7361080
      window.alert = function() {};
      document.location.reload(true);
    }
    else {
    }
  };

})(jQuery);
