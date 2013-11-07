<?php
/**
 * @file
 * user_registration.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function user_registration_locale_default_languages() {
  $languages = array();

  // Exported language: be.
  $languages['be'] = array(
    'language' => 'be',
    'name' => 'Belarusian',
    'native' => 'Беларуская',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'be',
    'weight' => 0,
  );
  return $languages;
}
