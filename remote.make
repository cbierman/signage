; signage make file for development
core = "7.x"
api = "2"

projects[drupal][version] = "7.25"

; Download signage profile.

projects[signage][type] = profile
projects[signage][download][type] = git
projects[signage][download][url] = "https://github.com/cbierman/signage"
projects[signage][download][branch] = master



