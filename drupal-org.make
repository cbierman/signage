; signage make file for d.o. usage
core = "7.x"
api = "2"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[crumbs][version] = "2.0-beta9"
projects[crumbs][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[eva][version] = "1.2"
projects[eva][subdir] = "contrib"

projects[profiler_builder][version] = "1.0"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "2.0-rc3"
projects[features][subdir] = "contrib"

projects[fieldable_panels_panes][version] = "1.5"
projects[fieldable_panels_panes][subdir] = "contrib"

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

projects[rules][version] = "2.3"
projects[rules][subdir] = "contrib"

projects[signage_panes][type] = "module"
projects[signage_panes][subdir] = "custom"
projects[signage_panes][download][type] = git
projects[signage_panes][download][url] = https://github.com/ITS-UofIowa/signage_panes.git

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[draggableviews][version] = "2.0"
projects[draggableviews][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_ticker][version] = "2.0"
projects[views_ticker][subdir] = "contrib"

projects[views_xml_backend][version] = "1.0-alpha4"
projects[views_xml_backend][subdir] = "contrib"

; +++++ Themes +++++

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
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/version/2.2.zip"

; hostReachable
libraries[hostreachable][directory_name] = "hostReachable"
libraries[hostreachable][type] = "library"
libraries[hostreachable][destination] = "libraries"
libraries[hostreachable][download][type] = "get"
libraries[hostreachable][download][url] = "https://gist.github.com/brandonneil/6921434/raw/f783957f866570946cc74de0fde600264fa0e553/hostReachable.js"

; +++++ Patches +++++

projects[ctools][patch][] = "http://drupal.org/files/page-manager-admin-paths-1120028-14.patch"
projects[views_ticker][patch][] = "http://drupal.org/files/views_ticker-Fixed_coding_standards-1395054-11.patch"

