/**
 * @file
 * Javascript for the Bongo panes module.
 */

 // Namespace jQuery to avoid conflicts.
(function($) {
  /*
   * Drupal.behaviors.ajaxHijackErrors
   * HiJack the ajax error reporting in D7. Avoiding the alert box for users
   * http://drupal.org/node/1232416 - comments: #93, #97, #98
   */
  // https://drupal.org/node/1232416#comment-7026500
  /*Drupal.behaviors.ajaxHijackErrors = {
    attach:function(context, settings){
      if (typeof context !== 'undefined') { //run only if there is a context var
        window.console = window.console || {};
        var methods = ['log', 'warn', 'error'];
        for (var i = 0; i < methods.length; i++) {
          window.console[methods[i]] = window.console[methods[i]] || function() {};
        } //end for

        $.ajaxSetup({
          beforeSend: function(jqXHR, settings) {
            settings.error = function(jqXHR, textStatus, errorThrown) {
              //end user doesn't need to see debugging info
              {console.log('ajax error: ' + textStatus);};
            }; //end settings.error
          } //end beforeSend
        }); //end $.ajaxSetup
      } // end if (typeof context !== 'undefined')
    } // end attach:function(context, settings)
  }*/ //end Drupal.behaviors.ajaxHijackErrors

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
    if (hostReachable()) {
      console.log(hostReachable());
      // Loading a new page might create error alerts for already running ajax.
      // Suppress them: https://drupal.org/node/1232416#comment-7361080
      window.alert = function() {};
      document.location.reload(true);
    }
    else {
      console.log(hostReachable());
    }
  };

})(jQuery);
