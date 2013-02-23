<?php
/**
 * @file
 * zeeprojet_contribution.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function zeeprojet_contribution_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_article';
  $strongarm->value = '';
  $export['page_title_type_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_article_showfield';
  $strongarm->value = 1;
  $export['page_title_type_article_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_page';
  $strongarm->value = '';
  $export['page_title_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_page_showfield';
  $strongarm->value = 1;
  $export['page_title_type_page_showfield'] = $strongarm;

  return $export;
}
