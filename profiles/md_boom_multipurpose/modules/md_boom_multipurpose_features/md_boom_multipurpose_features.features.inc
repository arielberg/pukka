<?php
/**
 * @file
 * md_boom_multipurpose_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function md_boom_multipurpose_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function md_boom_multipurpose_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function md_boom_multipurpose_features_image_default_styles() {
  $styles = array();

  // Exported image style: author_avatar.
  $styles['author_avatar'] = array(
    'name' => 'author_avatar',
    'label' => 'Author Avatar',
    'effects' => array(
      25 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 62,
          'height' => 62,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: md_slider_1_bg.
  $styles['md_slider_1_bg'] = array(
    'name' => 'md_slider_1_bg',
    'label' => 'md_slider_1_bg',
    'effects' => array(
      9 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 420,
          'scaleup' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_1_thumb.
  $styles['md_slider_1_thumb'] = array(
    'name' => 'md_slider_1_thumb',
    'label' => 'md_slider_1_thumb',
    'effects' => array(
      10 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_2_bg.
  $styles['md_slider_2_bg'] = array(
    'name' => 'md_slider_2_bg',
    'label' => 'md_slider_2_bg',
    'effects' => array(
      11 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 450,
          'scaleup' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_2_thumb.
  $styles['md_slider_2_thumb'] = array(
    'name' => 'md_slider_2_thumb',
    'label' => 'md_slider_2_thumb',
    'effects' => array(
      12 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 95,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_4_thumb.
  $styles['md_slider_4_thumb'] = array(
    'name' => 'md_slider_4_thumb',
    'label' => 'md_slider_4_thumb',
    'effects' => array(
      4 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_5_bg.
  $styles['md_slider_5_bg'] = array(
    'name' => 'md_slider_5_bg',
    'label' => 'md_slider_5_bg',
    'effects' => array(
      6 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 450,
          'scaleup' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_5_thumb.
  $styles['md_slider_5_thumb'] = array(
    'name' => 'md_slider_5_thumb',
    'label' => 'md_slider_5_thumb',
    'effects' => array(
      5 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 95,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: partner_logo.
  $styles['partner_logo'] = array(
    'name' => 'partner_logo',
    'label' => 'partner_logo',
    'effects' => array(
      7 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 164,
          'height' => 108,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_slider_thumbnail.
  $styles['portfolio_slider_thumbnail'] = array(
    'name' => 'portfolio_slider_thumbnail',
    'label' => 'Portfolio Slider Thumbnail',
    'effects' => array(
      13 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnail_188x120.
  $styles['portfolio_thumbnail_188x120'] = array(
    'name' => 'portfolio_thumbnail_188x120',
    'label' => 'Portfolio Thumbnail 188x120',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 188,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnail_2col.
  $styles['portfolio_thumbnail_2col'] = array(
    'name' => 'portfolio_thumbnail_2col',
    'label' => 'Portfolio Thumbnail 2col',
    'effects' => array(
      14 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnail_3col.
  $styles['portfolio_thumbnail_3col'] = array(
    'name' => 'portfolio_thumbnail_3col',
    'label' => 'Portfolio Thumbnail 3col',
    'effects' => array(
      37 => array(
        'label' => 'התאמה',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 240,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      36 => array(
        'label' => 'Underlay (background)',
        'help' => 'Choose the file image you wish to use as an background, and position the processed image on it.',
        'effect callback' => 'canvasactions_canvas2file_effect',
        'dimensions callback' => 'canvasactions_canvas2file_dimensions',
        'form callback' => 'canvasactions_canvas2file_form',
        'summary theme' => 'canvasactions_canvas2file_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'path' => 'sites/all/themes/md_boom_multi/images/back1.png',
          'dimensions' => 'background',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnail_4col.
  $styles['portfolio_thumbnail_4col'] = array(
    'name' => 'portfolio_thumbnail_4col',
    'label' => 'Portfolio Thumbnail 4col',
    'effects' => array(
      16 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 245,
          'height' => 137,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails.
  $styles['portfolio_thumbnails'] = array(
    'name' => 'portfolio_thumbnails',
    'label' => 'Portfolio Thumbnails',
    'effects' => array(
      17 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 188,
          'height' => 102,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails_188x120.
  $styles['portfolio_thumbnails_188x120'] = array(
    'name' => 'portfolio_thumbnails_188x120',
    'label' => 'Portfolio Thumbnails 188x120',
    'effects' => array(
      8 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 188,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails_188x250.
  $styles['portfolio_thumbnails_188x250'] = array(
    'name' => 'portfolio_thumbnails_188x250',
    'label' => 'Portfolio Thumbnails (188x250)',
    'effects' => array(
      18 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 188,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails_385x250.
  $styles['portfolio_thumbnails_385x250'] = array(
    'name' => 'portfolio_thumbnails_385x250',
    'label' => 'Portfolio Thumbnails (385x250)',
    'effects' => array(
      19 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 384,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails_584x250.
  $styles['portfolio_thumbnails_584x250'] = array(
    'name' => 'portfolio_thumbnails_584x250',
    'label' => 'Portfolio Thumbnails (584x250)',
    'effects' => array(
      20 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 584,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails__188x250_.
  $styles['portfolio_thumbnails__188x250_'] = array(
    'name' => 'portfolio_thumbnails__188x250_',
    'label' => 'Portfolio Thumbnails (188x250)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 188,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails__385x250_.
  $styles['portfolio_thumbnails__385x250_'] = array(
    'name' => 'portfolio_thumbnails__385x250_',
    'label' => 'Portfolio Thumbnails (385x250)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 384,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumbnails__584x250_.
  $styles['portfolio_thumbnails__584x250_'] = array(
    'name' => 'portfolio_thumbnails__584x250_',
    'label' => 'Portfolio Thumbnails (584x250)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 584,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: recent_posts.
  $styles['recent_posts'] = array(
    'name' => 'recent_posts',
    'label' => 'Recent Posts',
    'effects' => array(
      29 => array(
        'label' => 'התאמה',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 142,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      28 => array(
        'label' => 'Underlay (background)',
        'help' => 'Choose the file image you wish to use as an background, and position the processed image on it.',
        'effect callback' => 'canvasactions_canvas2file_effect',
        'dimensions callback' => 'canvasactions_canvas2file_dimensions',
        'form callback' => 'canvasactions_canvas2file_form',
        'summary theme' => 'canvasactions_canvas2file_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'מרכז',
          'alpha' => 100,
          'path' => 'sites/all/themes/md_boom_multi/images/back.png',
          'dimensions' => 'background',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: related_blog_image.
  $styles['related_blog_image'] = array(
    'name' => 'related_blog_image',
    'label' => 'related_blog_image',
    'effects' => array(
      22 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 159,
          'height' => 102,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: team_avatar_224x235.
  $styles['team_avatar_224x235'] = array(
    'name' => 'team_avatar_224x235',
    'label' => 'Team Avatar 224x235',
    'effects' => array(
      23 => array(
        'label' => 'התאמת גודל וחיתוך',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 224,
          'height' => 235,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function md_boom_multipurpose_features_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('בלוג'),
      'base' => 'node_content',
      'description' => t('are the posts, mainly news, that are time stamped and viewed by date.'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('שאלה ותשובה'),
      'base' => 'node_content',
      'description' => t('These FAQs are listed questions and answers which are commonly asked about the product’s features. It is designed to provide a better understanding of our licenses, our product.'),
      'has_title' => '1',
      'title_label' => t('שאלה'),
      'help' => '',
    ),
    'features' => array(
      'name' => t('מועדון'),
      'base' => 'node_content',
      'description' => t('Features are the prominent features and functions of the product or website '),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'our_team' => array(
      'name' => t('חבר'),
      'base' => 'node_content',
      'description' => t('Introduces key staff as well as outstanding achievement or products of your company'),
      'has_title' => '1',
      'title_label' => t('שם'),
      'help' => '',
    ),
    'overview' => array(
      'name' => t('סקירה'),
      'base' => 'node_content',
      'description' => t('Provides the background information, prominent features about the products'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => t('Partner are your listed collaborators in creating, developing the products'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'portfolio' => array(
      'name' => t('תוכן למצגת בעמוד הבית'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => t('Services are the additional assistance to support customers in using product.'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'skills' => array(
      'name' => t('Skills'),
      'base' => 'node_content',
      'description' => t('Skill is where to evaluate your different skills such as html,css,php,python,c#,..'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('Shows customers’ comments and feedbacks extolling the virtue of the product.'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
  );
  return $items;
}
