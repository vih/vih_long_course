<?php
/**
 * @file
 * vih_long_course.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_long_course_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__vih_long_course';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
        'path' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'webform' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'rss' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__vih_long_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_vih_long_course';
  $strongarm->value = '0';
  $export['language_content_type_vih_long_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vih_long_course';
  $strongarm->value = array();
  $export['menu_options_vih_long_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vih_long_course';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vih_long_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vih_long_course';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_vih_long_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vih_long_course';
  $strongarm->value = '0';
  $export['node_preview_vih_long_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vih_long_course';
  $strongarm->value = 0;
  $export['node_submitted_vih_long_course'] = $strongarm;

  return $export;
}
