<?php
/**
 * @file
 * md_boom_multipurpose_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function md_boom_multipurpose_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-column-2.
  $menus['menu-footer-column-2'] = array(
    'menu_name' => 'menu-footer-column-2',
    'title' => 'Footer Menu Col 2',
    'description' => 'Show menu links in footer column 2',
  );
  // Exported menu: menu-footer-column-3.
  $menus['menu-footer-column-3'] = array(
    'menu_name' => 'menu-footer-column-3',
    'title' => 'Footer Menu Col 3',
    'description' => 'Show menu links in footer column 3',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Bottom',
    'description' => 'Menu links show in page bottom',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Bottom');
  t('Footer Menu Col 2');
  t('Footer Menu Col 3');
  t('Main menu');
  t('Menu links show in page bottom');
  t('Show menu links in footer column 2');
  t('Show menu links in footer column 3');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
