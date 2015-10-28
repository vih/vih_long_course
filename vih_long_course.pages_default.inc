<?php
/**
 * @file
 * vih_long_course.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vih_long_course_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Long courses',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'vih_long_course' => 'vih_long_course',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 7,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Video',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'introduction',
        ),
        'parent' => '4',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'picture',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'picture' => array(
        'type' => 'region',
        'title' => 'Picture',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      'introduction' => array(
        'type' => 'region',
        'title' => 'Introduction',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'information',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'information' => array(
        'type' => 'region',
        'title' => 'Information',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e68e7ac-7eb2-415c-819a-49db30337133';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ebc885bc-0918-4f28-9535-7ad2e6909ba7';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_course_time';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'formatter_settings' => array(
      'format_type' => 'long',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ebc885bc-0918-4f28-9535-7ad2e6909ba7';
  $display->content['new-ebc885bc-0918-4f28-9535-7ad2e6909ba7'] = $pane;
  $display->panels['middle'][0] = 'new-ebc885bc-0918-4f28-9535-7ad2e6909ba7';
  $pane = new stdClass();
  $pane->pid = 'new-b9bf5fb6-14af-4684-a027-2a52e2fbdc31';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '%title %node:title',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = 'b9bf5fb6-14af-4684-a027-2a52e2fbdc31';
  $display->content['new-b9bf5fb6-14af-4684-a027-2a52e2fbdc31'] = $pane;
  $display->panels['middle'][1] = 'new-b9bf5fb6-14af-4684-a027-2a52e2fbdc31';
  $pane = new stdClass();
  $pane->pid = 'new-21e21916-864d-4a62-8a71-778a73a0bbac';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_style' => 'vih_banner',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '21e21916-864d-4a62-8a71-778a73a0bbac';
  $display->content['new-21e21916-864d-4a62-8a71-778a73a0bbac'] = $pane;
  $display->panels['middle'][2] = 'new-21e21916-864d-4a62-8a71-778a73a0bbac';
  $pane = new stdClass();
  $pane->pid = 'new-794fb1cf-74e3-4bde-812c-c99e7099dc02';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_registration_payment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'formatter_settings' => array(
      'thousand_separator' => '.',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Tilmeldingsgebyr',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '794fb1cf-74e3-4bde-812c-c99e7099dc02';
  $display->content['new-794fb1cf-74e3-4bde-812c-c99e7099dc02'] = $pane;
  $display->panels['middle'][3] = 'new-794fb1cf-74e3-4bde-812c-c99e7099dc02';
  $pane = new stdClass();
  $pane->pid = 'new-d3277f41-f9df-4e84-bc71-c367ce176f3b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_weekly_payment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'formatter_settings' => array(
      'thousand_separator' => '.',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd3277f41-f9df-4e84-bc71-c367ce176f3b';
  $display->content['new-d3277f41-f9df-4e84-bc71-c367ce176f3b'] = $pane;
  $display->panels['middle'][4] = 'new-d3277f41-f9df-4e84-bc71-c367ce176f3b';
  $pane = new stdClass();
  $pane->pid = 'new-e6009337-5f0d-4c62-8c80-1c7036d45a77';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_material_payment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'formatter_settings' => array(
      'thousand_separator' => '.',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e6009337-5f0d-4c62-8c80-1c7036d45a77';
  $display->content['new-e6009337-5f0d-4c62-8c80-1c7036d45a77'] = $pane;
  $display->panels['middle'][5] = 'new-e6009337-5f0d-4c62-8c80-1c7036d45a77';
  $pane = new stdClass();
  $pane->pid = 'new-b8ba7c78-fa5c-44b8-9b99-3f0f72853aa4';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_travel_payment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'formatter_settings' => array(
      'thousand_separator' => '.',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'b8ba7c78-fa5c-44b8-9b99-3f0f72853aa4';
  $display->content['new-b8ba7c78-fa5c-44b8-9b99-3f0f72853aa4'] = $pane;
  $display->panels['middle'][6] = 'new-b8ba7c78-fa5c-44b8-9b99-3f0f72853aa4';
  $pane = new stdClass();
  $pane->pid = 'new-9b01f59d-4ca4-4186-9a3b-4248ecafb9e6';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'employees_context-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Spørgsmål til kurset',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'headline' => '',
      'style' => 'alternate',
    ),
    'style' => 'vih_box_highlight',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9b01f59d-4ca4-4186-9a3b-4248ecafb9e6';
  $display->content['new-9b01f59d-4ca4-4186-9a3b-4248ecafb9e6'] = $pane;
  $display->panels['middle'][7] = 'new-9b01f59d-4ca4-4186-9a3b-4248ecafb9e6';
  $pane = new stdClass();
  $pane->pid = 'new-6041c636-be01-4ca6-9618-a043367dfe59';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '6041c636-be01-4ca6-9618-a043367dfe59';
  $display->content['new-6041c636-be01-4ca6-9618-a043367dfe59'] = $pane;
  $display->panels['middle'][8] = 'new-6041c636-be01-4ca6-9618-a043367dfe59';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
