; Profile make
core = 7.x
api = 2
projects[] = drupal

; Contrib: Charts
projects[ctools][subdir] = "contrib"
projects[entityform][version] = "1.x-dev"
projects[entityform][subdir] = "contrib"
projects[highcharts][version] = 2.x-dev
projects[highcharts][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[rules][subdir] = "contrib"
projects[views][subdir] = "contrib"

; Contrib: Groups
projects[og][version] = 2.x-dev
projects[og][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
projects[entityreference_prepopulate][subdir] = "contrib"

; Libraries
libraries[highcharts][type] = "libraries"
libraries[highcharts][download][type] = "file"
libraries[highcharts][download][url] = "http://www.highcharts.com/downloads/zips/Highcharts-2.2.5.zip"
