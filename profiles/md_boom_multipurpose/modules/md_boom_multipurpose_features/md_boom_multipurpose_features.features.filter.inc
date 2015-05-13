<?php
/**
 * @file
 * md_boom_multipurpose_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function md_boom_multipurpose_features_filter_default_formats() {
  $formats = array();

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Pure Html.
  $formats['pure_html'] = array(
    'format' => 'pure_html',
    'name' => 'Pure Html',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  return $formats;
}
