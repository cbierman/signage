; signage make file for development
core = "7.x"
api = "2"

projects[drupal][version] = "7.23"

; Download signage profile.

projects[signage][type] = profile
projects[signage][download][type] = git
projects[signage][download][url] = "https://github.com/ITS-UofIowa/signage.git"
projects[signage][download][branch] = master



