<?php
/**
 * @file
 * md_boom_multipurpose_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function md_boom_multipurpose_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_grid-2-columns:portfolio_2col
  $menu_links['main-menu_grid-2-columns:portfolio_2col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio_2col',
    'router_path' => 'portfolio_2col',
    'link_title' => 'Grid 2 columns',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_grid-2-columns:portfolio_2col',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home-mega-slider-1:home_mega_slider_1
  $menu_links['main-menu_home-mega-slider-1:home_mega_slider_1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home_mega_slider_1',
    'router_path' => 'home_mega_slider_1',
    'link_title' => 'Home Mega Slider 1',
    'options' => array(
      'identifier' => 'main-menu_home-mega-slider-1:home_mega_slider_1',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home-mega-slider-2:home_mega_slider_2
  $menu_links['main-menu_home-mega-slider-2:home_mega_slider_2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home_mega_slider_2',
    'router_path' => 'home_mega_slider_2',
    'link_title' => 'Home Mega Slider 2',
    'options' => array(
      'identifier' => 'main-menu_home-mega-slider-2:home_mega_slider_2',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
  );
  // Exported menu link: main-menu_testimonials:testimonials
  $menu_links['main-menu_testimonials:testimonials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'testimonials',
    'router_path' => 'testimonials',
    'link_title' => 'Testimonials',
    'options' => array(
      'identifier' => 'main-menu_testimonials:testimonials',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Grid 2 columns');
  t('Home Mega Slider 1');
  t('Home Mega Slider 2');
  t('Testimonials');


  return $menu_links;
}
