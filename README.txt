-- SUMMARY --

The signage install profile creates an organic groups-based digital signage
website. The project relies heavily on the ctools/page manager/panelizer suite
of tools and provides some defaults for those projects as features.


-- INSTALLATION --

* Download and install drush: http://drupal.org/project/drush.
Run the following command:
drush make http://lb.cm/mGF signage --prepare-install --working-copy

to download everything (core, the signage profile, contrib modules & libraries)
into a folder called 'signage'.

Install the site as usual, using 'Signage' as the site's profile.


-- WHAT'S INCLUDED --

* Group - Groups are used for organizing signs. Users can be added to groups to
  gain access to create/edit/delete content in that group.

* Sign - Signs are the canonical location of a sign. Point your signage player
  to these pages. Signs show a single template at a time.

* Template - Templates control the layout and content of a sign. A sign can have
  unlimited templates, and can be scheduled. The first template that validates
  is shown.

* Slide - Slides are used in an optional slideshow on signs. A Slide can be
  shared and referenced between any sign in a group.



-- OVERRIDING DEFAULTS --

---- Panelizer Defaults ----
This project creates panelizer defaults for the group, sign and template content
types. If you wish to override these defaults, consider using the Features
Override module (http://drupal.org/project/features_override) to bundle up your
overrides into your own features.

An example of this is The University of Iowa signage defaults project, which
provides a different default layout and adds new default panes for each
template: https://github.com/ITS-UofIowa/signage_uiowa_defaults


-- SUPPORT --

Current maintainers:
* Brandon Neil (bneil) - https://drupal.org/user/586386
