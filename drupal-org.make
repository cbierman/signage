; signage make file for d.o. usage
core = "7.x"
api = "2"

; +++++ Modules +++++

projects[bongo][version] = "" ; TODO add version
projects[bongo][subdir] = "contrib"
projects[bongo][download][type] = git
projects[bongo][download][url] = http://git.drupal.org/sandbox/bneil/1807738.git

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[custom_breadcrumbs][version] = "2.0-alpha3"
projects[custom_breadcrumbs][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[profiler_builder][version] = "1.0"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "2.0-rc3"
projects[features][subdir] = "contrib"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"

projects[entityreference_prepopulate][version] = "1.3"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[flexslider][version] = "2.0-alpha3"
projects[flexslider][subdir] = "contrib"

projects[og][version] = "2.3"
projects[og][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.2"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[panelizer][version] = "3.1"
projects[panelizer][subdir] = "contrib"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[signage_panes][version] = "" ; TODO add version
projects[signage_panes][subdir] = "custom"
projects[signage_panes][download][type] = git
projects[signage_panes][download][url] = git@github.com:ITS-UofIowa/signage_panes.git

projects[signage_uiowa_panes][version] = "" ; TODO add version
projects[signage_uiowa_panes][subdir] = "custom"
projects[signage_uiowa_panes][download][type] = git
projects[signage_uiowa_panes][download][url] = git@github.com:ITS-UofIowa/signage_uiowa_panes.git

projects[themekey][version] = "2.5"
projects[themekey][subdir] = "contrib"

projects[draggableviews][version] = "2.0"
projects[draggableviews][subdir] = "contrib"

projects[eva][version] = "1.2"
projects[eva][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"

; +++++ Themes +++++

; sky
projects[sky][type] = "theme"
projects[sky][version] = "3.0-rc1"
projects[sky][subdir] = "contrib"

; adaptivetheme
projects[adaptivetheme][type] = "theme"
projects[adaptivetheme][version] = "3.1"
projects[adaptivetheme][subdir] = "contrib"

; Signage Theme
projects[signage_theme][type] = "theme"
projects[signage_theme][subdir] = "contrib"
projects[signage_theme][download][type] = git
projects[signage_theme][download][url] = https://github.com/ITS-UofIowa/signage_theme.git

; +++++ Libraries +++++

; Flexslider
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"
libraries[flexslider][destination] = "libraries"
libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/flexslider1.zip"

; +++++ Patches +++++

projects[ctools][patch][] = "http://drupal.org/files/page-manager-admin-paths-1120028-14.patch"

