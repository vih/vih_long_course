<?php

/**
 * @file
 *  Migrations for vih_subjects.
 */

class VIHLongCourseNode extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import long course nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_long_course') . '/import/longcourse.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('vih_long_course');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');

    $this->addFieldMapping('field_course_time', 'date_from');
    $this->addFieldMapping('field_course_time:to', 'date_to');

    $this->addFieldMapping('field_registration_payment', 'registration_payment');
    $this->addFieldMapping('field_material_payment', 'material_payment');
    $this->addFieldMapping('field_travel_payment', 'travel_payment');
    $this->addFieldMapping('field_weekly_payment', 'weekly_payment');

    $this->addFieldMapping('field_course_leader', 'teacher')
      ->sourceMigration('VIHEmployeesContext');

    // Featured image
    $this->addFieldMapping('field_picture', 'featured_image');
    $this->addFieldMapping('field_picture:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_picture:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_long_course') . '/import/images');
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('date_from', 'Date From');
    $columns[3] = array('date_to', 'Date To');
    $columns[4] = array('body', 'Body');
    $columns[5] = array('registration_payment', 'Registration Payment');
    $columns[6] = array('material_payment', 'Material Payment');
    $columns[7] = array('travel_payment', 'Travel Payment');
    $columns[8] = array('weekly_payment', 'Weekly Payment');
    $columns[9] = array('teacher', 'Teacher');
    $columns[10] = array('featured_image', 'Featured Image');
    return $columns;
  }
}
