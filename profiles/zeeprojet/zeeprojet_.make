; Un commentaire
; ajouter le core de drupal
; ajouter les modules contribués
;
; Ces 2 lignes sont obligatoires
core  = "7.x"
api   = "2"

; Get drupal core
projects[] = drupal

; Modules
projects[] = advanced_help
projects[] = ctools
projects[] = ckeditor
projects[] = devel
projects[] = ds
projects[] = entity



; indiquer la version 1 et pas la v.2 (beta)
projects[features][version] = 1.0
projects[] = diff 

projects[] = token
projects[] = pathauto
projects[] = module_filter
projects[] = panels
projects[] = page_title
projects[] = styleguide


projects[] = rules
projects[] = transliteration
projects[] = views
projects[] = workbench
projects[] = context


; Mediatheque
projects[media][version] = 2.0-unstable7

projects[] = file_entity

;localisation
projects[] = i18n
projects[] = variable
projects[] = l10n_update


projects[] = role_delegation
; Themes
;
projects[] = zen


; Third party libraries
libraries[ckeditor][download][url] = 'http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6/ckeditor_3.6.6.zip'
libraries[ckeditor][download][type] = 'file'

; sites/all/libraries/jquery_cycle/
libraries[ckeditor][destination] = 'libraries'

; Distribution
projects[zeeprojet][type] = "profile"
projects[zeeprojet][download][tpe] = "git"
projects[zeeprojet][download][url] = "git@github.com:sebcunin/Distribution-ZeeProject.git"
projects[zeeprojet][download][branch] = "develop"







projects[themekey][version] = 2.3
projects[] = strongarm


