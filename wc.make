; Profile make
core = 7.x
api = 2
projects[] = drupal

; Contrib: Charts
projects[ctools][subdir] = "contrib"
projects[entity][version] = "1.x-dev"
projects[entity][subdir] = "contrib"
projects[entityform][version] = "1.x-dev"
projects[entityform][subdir] = "contrib"
projects[entityform][patch][] = "http://drupal.org/files/entityform-user-setter-callback-1704748-5.patch"
projects[entityform][patch][] = "http://drupal.org/files/entityform-uid0-1704752-1.patch"
projects[entityform][patch][] = "http://drupal.org/files/entityform-field_analytics-1658350-1.patch"
projects[features][subdir] = "contrib"
projects[field_analytics][version] = 2.x-dev
projects[field_analytics][subdir] = "contrib"
projects[field_validation][version] = 2.x-dev
projects[field_validation][subdir] = "contrib"
projects[field_validation][patch][] = "http://drupal.org/files/field_validation-feeds-unique-target-661606-107.patch"
projects[field_validation][version] = 2.x-dev
projects[highcharts][version] = 2.x-dev
projects[highcharts][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[rules][version] = 2.x-dev
projects[rules][subdir] = "contrib"
projects[views][subdir] = "contrib"

; Contrib: Groups
projects[og][version] = 2.x-dev
projects[og][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
projects[entityreference][patch][] = "http://drupal.org/files/entityreference-feeds_integration-1616680-10.patch"
projects[entityreference_prepopulate][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"

; Contrib: Importing
projects[feeds][version] = 2.x-dev
projects[feeds][subdir] = "contrib"
projects[feeds][patch][] = "http://drupal.org/files/1033202-69-feeds-generic_entity_processor.patch"
projects[feeds][patch][] = "http://drupal.org/files/feeds-unique-target-661606-107.patch"
projects[job_scheduler][subdir] = "contrib"

; Contrib: Developer
projects[admin_menu][subdir] = "developer"
projects[devel][subdir] = "developer"

; Libraries
libraries[highcharts][type] = "libraries"
libraries[highcharts][download][type] = "file"
libraries[highcharts][download][url] = "http://www.highcharts.com/downloads/zips/Highcharts-2.2.5.zip"
