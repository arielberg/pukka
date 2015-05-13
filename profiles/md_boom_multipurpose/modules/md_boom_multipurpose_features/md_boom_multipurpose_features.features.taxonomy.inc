<?php
/**
 * @file
 * md_boom_multipurpose_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function md_boom_multipurpose_features_taxonomy_default_vocabularies() {
  return array(
    'blog_category' => array(
      'name' => 'Blog category',
      'machine_name' => 'blog_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'faq' => array(
      'name' => 'FAQ',
      'machine_name' => 'faq',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'portfolio_category' => array(
      'name' => 'portfolio category',
      'machine_name' => 'portfolio_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'תגיות',
      'machine_name' => 'tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
