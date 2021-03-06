<?php
/**
 * @file
 * vih_long_course.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_long_course_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_long_course_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_long_course_node_info() {
  $items = array(
    'vih_long_course' => array(
      'name' => t('Long course'),
      'base' => 'node_content',
      'description' => t('Use <em>Long course</em> for long courses where you can use webform functionality.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
