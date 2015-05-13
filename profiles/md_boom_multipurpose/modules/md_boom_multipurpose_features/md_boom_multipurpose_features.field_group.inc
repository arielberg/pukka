<?php
/**
 * @file
 * md_boom_multipurpose_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function md_boom_multipurpose_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_not_editable|node|portfolio|form';
  $field_group->group_name = 'group_details_not_editable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'פרטים לא לעריכה',
    'weight' => '1',
    'children' => array(
      0 => 'field_portfolio_description',
      1 => 'field_portfolio_layout_mode',
      2 => 'field_portfolio_location',
      3 => 'field_portfolio_multimedia',
      4 => 'field_portfolio_skills',
      5 => 'field_portfolio_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details-not-editable field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details_not_editable|node|portfolio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|portfolio|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'עריכת פרטים',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_thumbnail',
      1 => 'field_node_reference',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|node|portfolio|form'] = $field_group;

  return $export;
}
