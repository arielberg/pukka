<?php
/**
 * @file
 * Theme setting callbacks for the Media Star theme.
 */
drupal_add_css(drupal_get_path('theme', 'md_boom_multi') . '/css/jquery-ui-timepicker-addon.css');
drupal_add_css(drupal_get_path('theme', 'md_boom_multi') . '/css/theme-settings.css', array('group' => CSS_THEME));
drupal_add_css(drupal_get_path('theme', 'md_boom_multi') . '/js/colorpicker/css/colorpicker.css');


drupal_add_library('system', 'ui.widget');
drupal_add_library('system', 'ui.mouse');
drupal_add_library('system', 'ui.slider');
drupal_add_library('system', 'ui.tabs');

drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/jquery.cookie.js');
drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/jquery.form.js');
drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/colorpicker/js/colorpicker.js');
drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/jquery.mousewheel.js');
drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/jquery.jstepper.min.js');
drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/jquery.choosefont.js');
drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/theme-settings.js');
drupal_add_js(drupal_get_path('theme', 'md_boom_multi') . '/js/jquery-ui-timepicker-addon.js');

require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'md_boom_multi') . '/inc/theme-settings-general.inc';
require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'md_boom_multi') . '/inc/theme-settings-design.inc';
require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'md_boom_multi') . '/inc/theme-settings-text.inc';
require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'md_boom_multi') . '/inc/theme-settings-pages.inc';
require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'md_boom_multi') . '/inc/theme-settings-display.inc';
require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'md_boom_multi') . '/inc/theme-settings-code.inc';
require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'md_boom_multi') . '/inc/theme-settings-config.inc';

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */

function md_boom_multi_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL, $no_js_use = FALSE) {
  if(isset($form_id)){
    return;
  }
  $form['md_boom_multi_settings']['html_header'] = array(
    '#markup' => '
<!--<div class="md-links">
<a href="#" target="_blank">Project Page</a> -
<a href="#" target="_blank">Theme Documentation</a> -
<a href="#" target="_blank">Support Forum</a>
</div> -->
<div class="md-wrap">
  <div id="md-tabs">
		<div class="md-tabs-head"><div class="md-tabs-headcontent">
      <ul class="clearfix">
        <li class="tab-item first clearfix" id="tab-general-settings"> <a class="tab-link" href="#md-general-settings">
          <span class="tab-text">General Settings</span>
          </a> </li>
        <li class="tab-item clearfix" id="tab-design"> <a class="tab-link" href="#md-design">
          <span class="tab-text">Design</span>
          </a> </li>
        <li class="tab-item clearfix" id="tab-design"> <a class="tab-link" href="#md-pages">
          <span class="tab-text">Pages</span>
          </a> </li>
        <li class="tab-item clearfix" id="tab-text-typography"> <a class="tab-link" href="#md-text-typography">
          <span class="tab-text">Text/Typography</span>
          </a> </li>
	    <li class="tab-item clearfix" id="tab-display"> <a class="tab-link" href="#md-display">
          <span class="tab-text">Display Settings</span>
          </a> </li>
        <li class="tab-item clearfix" id="tab-custom-code"> <a class="tab-link" href="#md-custom-code">
          <span class="tab-text">Custom code</span>
          </a> </li>
          <li class="tab-item clearfix" id="tab-config"> <a class="tab-link" href="#md-config">
          <span class="tab-text">Bacxup and Restore</span>
          </a>
        </li>
      </ul>
    </div></div><!-- /.md-tabs-head -->',
    '#weight' => -99,
  );
  md_boom_multi_theme_settings_general($form, $form_state);

  // Load font styles
  $fonts = load_font_configure();
  drupal_add_js(array('font_array' => $fonts[0]), 'setting');
  drupal_add_js(array('font_vars' => $fonts[1]), 'setting');
  // add for fonts END

  md_boom_multi_theme_settings_design($form, $form_state);
  md_boom_multi_theme_settings_text($form, $form_state);
  md_boom_multi_theme_settings_pages($form, $form_state);
  md_boom_multi_theme_settings_display($form, $form_state);
  md_boom_multi_theme_settings_code($form, $form_state);
  md_boom_multi_theme_settings_config($form, $form_state);

  $form['md_boom_multi_settings']['html_footer'] = array(
    '#markup' => '
	</div><!-- /#md-tabs -->
</div><!-- /.md-wrap -->',
    '#weight' => 99,
  );
  $form['reset']      = array(
    '#type'         => 'submit',
    '#value'        => t('Reset Settings'),
    '#submit'       => array('md_boom_multi_reset_settings_submit'),
    '#weight'       => '1000',
  );

  $form['#submit'] = array();
  array_push($form['#submit'],'md_boom_multi_save_settings');
}
/**
 * Final submit handler.
 *
 * Reports what values were finally set.
 */

function md_boom_multi_save_settings($form, &$form_state) {
  if ($logo_normal_file = file_save_upload('logo_normal_upload')) {
    $parts = pathinfo($logo_normal_file->filename);
    $destination = 'public://' . $parts['basename'];
    $logo_normal_file->status = FILE_STATUS_PERMANENT;
    if (file_copy($logo_normal_file, $destination, FILE_EXISTS_REPLACE)) {
      $_POST['logo_normal_path'] = $form_state['values']['logo_normal_path'] = $destination;
    }
  }
  elseif($logo_normal_path = $form_state['values']['logo_normal_path']){
    $logo_normal_scheme = file_uri_scheme($logo_normal_path);
    if($logo_normal_scheme == 'http' || $logo_normal_scheme == 'https'){
      $newimagename = basename(rawurldecode($logo_normal_path));
      $external_file = file_get_contents(rawurldecode($logo_normal_path));
      file_save_data($external_file, 'public://'.$newimagename.'',$replace = FILE_EXISTS_REPLACE);
      $form_state['values']['logo_normal_path'] = 'public://'.$newimagename;
    }
  }
  if ($logo_retina_file = file_save_upload('logo_retina_upload')) {
    $parts = pathinfo($logo_retina_file->filename);
    $destination = 'public://' . $parts['basename'];
    $logo_retina_file->status = FILE_STATUS_PERMANENT;
    if (file_copy($logo_retina_file, $destination, FILE_EXISTS_REPLACE)) {
      $_POST['logo_retina_path'] = $form_state['values']['logo_retina_path'] = $destination;
    }
  }
  elseif($logo_retina_path = $form_state['values']['logo_retina_path']){
    $logo_retina_scheme = file_uri_scheme($logo_retina_path);
    if($logo_retina_scheme == 'http' || $logo_retina_scheme == 'https'){
      $newimagename = basename(rawurldecode($logo_retina_path));
      $external_file = file_get_contents(rawurldecode($logo_retina_path));
      file_save_data($external_file, 'public://'.$newimagename.'',$replace = FILE_EXISTS_REPLACE);
      $form_state['values']['logo_retina_path'] = 'public://'.$newimagename;
    }
  }
  if ($footer_logo_file = file_save_upload('footer_logo_upload')) {
    $parts = pathinfo($footer_logo_file->filename);
    $destination = 'public://' . $parts['basename'];
    $footer_logo_file->status = FILE_STATUS_PERMANENT;
    if (file_copy($footer_logo_file, $destination, FILE_EXISTS_REPLACE)) {
      $_POST['footer_logo_path'] = $form_state['values']['footer_logo_path'] = $destination;
    }
  }
  elseif($footer_logo_path = $form_state['values']['footer_logo_path']){
    $footer_logo_scheme = file_uri_scheme($footer_logo_path);
    if($footer_logo_scheme == 'http' || $footer_logo_scheme == 'https'){
      $newimagename = basename(rawurldecode($footer_logo_path));
      $external_file = file_get_contents(rawurldecode($footer_logo_path));
      file_save_data($external_file, 'public://'.$newimagename.'',$replace = FILE_EXISTS_REPLACE);
      $form_state['values']['footer_logo_path'] = 'public://'.$newimagename;
    }
  }
  if ($favicon_file = file_save_upload('fvicon_upload')) {
    $parts = pathinfo($favicon_file->filename);
    $destination = 'public://' . $parts['basename'];
    $favicon_file->status = FILE_STATUS_PERMANENT;
    if (file_copy($favicon_file, $destination, FILE_EXISTS_REPLACE)) {
      $_POST['fvicon_path'] = $form_state['values']['fvicon_path'] = $destination;
    }
  }
  elseif($favicon_path = $form_state['values']['favicon_path']){
    $favicon_scheme = file_uri_scheme($favicon_path);
    if($favicon_scheme == 'http' || $favicon_scheme == 'https'){
      $newimagename = basename(rawurldecode($favicon_path));
      $external_file = file_get_contents(rawurldecode($favicon_path));
      file_save_data($external_file, 'public://'.$newimagename.'',$replace = FILE_EXISTS_REPLACE);
      $form_state['values']['favicon_path'] = 'public://'.$newimagename;
    }
  }
  $form_state['values']['logo_path'] = $form_state['values']['logo_normal_path'];
  $form_state['values']['favicon_path'] = $form_state['values']['fvicon_path'];
  if($form_state['values']['default_logo'] == 1){
    $form_state['values']['logo_path'] = '';
    $form_state['values']['logo_normal_path'] = '';
    $form_state['values']['logo_retina_path'] = '';
    $form_state['values']['footer_logo_path'] = '';
  }
  if($form_state['values']['default_favicon'] == 1){
    $form_state['values']['favicon_path'] = '';
    $form_state['values']['fvicon_path'] = '';
  }
  if ($video_bg_file = file_save_upload('video_bg_upload',array('file_validate_extensions' => array('mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm')))) {
    $parts = pathinfo($video_bg_file->filename);
    $destination = 'public://' . $parts['basename'];
    $video_bg_file->status = FILE_STATUS_PERMANENT;
    if (file_copy($video_bg_file, $destination, FILE_EXISTS_REPLACE)) {
      $_POST['video_bg_path'] = $form_state['values']['video_bg_path'] = $destination;
    }
  }
  elseif($video_bg_path = $form_state['values']['video_bg_path']){
    $video_bg_scheme = file_uri_scheme($video_bg_path);
    if($video_bg_scheme == 'http' || $video_bg_scheme == 'https'){
      $newimagename = basename(rawurldecode($video_bg_path));
      $external_file = file_get_contents(rawurldecode($video_bg_path));
      file_save_data($external_file, 'public://'.$newimagename.'',$replace = FILE_EXISTS_REPLACE);
      $form_state['values']['video_bg_path'] = 'public://'.$newimagename;
    }
  }
  if ($bg_file = file_save_upload('bg_upload')) {
    $parts = pathinfo($bg_file->filename);
    $destination = 'public://' . $parts['basename'];
    $bg_file->status = FILE_STATUS_PERMANENT;
    if (file_copy($bg_file, $destination, FILE_EXISTS_REPLACE)) {
      $_POST['bg_path'] = $form_state['values']['bg_path'] = $destination;
    }
  }
  elseif($bg_path = $form_state['values']['bg_path']){
    $bg_scheme = file_uri_scheme($bg_path);
    if($bg_scheme == 'http' || $bg_scheme == 'https'){
      $newimagename = basename(rawurldecode($bg_path));
      $external_file = file_get_contents(rawurldecode($bg_path));
      file_save_data($external_file, 'public://'.$newimagename.'',$replace = FILE_EXISTS_REPLACE);
      $form_state['values']['bg_path'] = 'public://'.$newimagename;
    }
  }
  if(theme_get_setting('slider_bg_image','md_boom_multi') != null || isset($form_state['values']['slider_bg_image'])){
    $form_state['values']['slider_bg_image'] = theme_get_setting('slider_bg_image','md_boom_multi');
  } else {
    $form_state['values']['slider_bg_image'] = array();
  }
  if ($form_state['values']['slider_bg_upload']) {
    $slider_file = $form_state['values']['slider_bg_upload'];
    if(count($slider_file) > 1){
      if(is_array($form_state['values']['slider_bg_image']) && !empty($form_state['values']['slider_bg_image'])){
        foreach($form_state['values']['slider_bg_image'] as $preview){
          $old_image = array($preview);
        }
      } else {
        $old_image = array();
      }
      foreach($slider_file as $key => $file){
        $file_save = file_get_contents($file['tmppath']);
        file_save_data($file_save,'public://'.$file['name'],FILE_EXISTS_REPLACE);
        if(in_array('public://'.$file['name'].'',$old_image)){
          drupal_set_message(t('Some images have already exist. Please change name or upload each other'),'warning');
        } else {
          $form_state['values']['slider_bg_image'][] = 'public://'.$file['name'].'';
        }
      }
    } else {
      drupal_set_message(t('You must upload more than 1 image to create slider background'),'error');
    }
  }

}

/**
 * Default theme settings
 */
function _md_boom_multi_theme_default_settings ($theme_settings) {
  $default_settings = array();
  foreach ($theme_settings as $key => $setting) {
    $default_settings[$key] = null;
  }
  $default_settings['toggle_logo'] = 1;
  $default_settings['toggle_name'] = 1;
  $default_settings['toggle_slogan'] = 1;
  $default_settings['toggle_node_user_picture'] = 1;
  $default_settings['toggle_comment_user_picture'] = 1;
  $default_settings['toggle_comment_user_verification'] = 1;
  $default_settings['toggle_favicon'] = 1;
  $default_settings['toggle_main_menu'] = 1;
  $default_settings['toggle_secondary_menu'] = 1;
  $default_settings['default_logo'] = 1;
  $default_settings['default_favicon'] = 1;
  $default_settings['css3_textarea'] = 0;
  $default_settings['webclip_precomp'] = 1;
  $default_settings['twitter_account'] = 'http://twitter.com';
  $default_settings['facebook_account'] = 'http://facebook.com';
  $default_settings['skype_account'] = 'http://skype.com';
  $default_settings['youtube_channel'] = 'http://youtube.com';
  $default_settings['google+_account'] = 'http://plus.google.com';
  $default_settings['dribbble_account'] = 'http://dribbble.com';
  $default_settings['pinterest_account'] = 'http://pinterest.com';
  $default_settings['linkedin_account'] = 'http://linkedin.com';
  $default_settings['webform_title'] = 'Getting in touch easy';
    $default_settings['webform_description'] = 'You need a talented digital marketing group. We work with brilliant clients. Sounds like a great fit. Complete this easy contact form, and let’s get together:';
    $default_settings['typo_heading_style_enable'] = 0;
    $default_settings['nodetitle_enable'] = 0;
    $default_settings['typo_view_title_enable'] = 0;
    $default_settings['maintenance_message'] = '<p><span>Our awesome website is</span> <br> Under construction </p>';
    $default_settings['sites_email'] = 'Megadrupal@gmail.com';
    $default_settings['address'] = 'Ha Noi, Viet Nam';
    $default_settings['phone'] = '+84 123 456 789';
    $default_settings['fax'] = '+84 012 345 6789';
    $default_settings['sites_description'] = '<h5>Say Hello !</h5> <p>To find out more about what we can do for you, request some more examples of our work, or arrange a meeting, please dont hesitate to get in touch.</p>';
    $default_settings['footer_text'] = '<p id="copyright"> <strong>MD Boom Multipurpose</strong> - Html by Felixplus -Drupal theme by <a href="http://megadrupal.com">MegaDrupal</a> </p> <p>All stock photos used on this Boom demo site are only for demo purposes and not included in the template package.</p>';
    $default_settings['skins'] = 'default';
    $default_settings['header_style'] = 'header1';
    $default_settings['widget_style'] = 'w-style1';
    $default_settings['sidebar_position'] = 'right';
    $default_settings['front_page'] = 'home_mega_slider_1';
    $default_settings['sites_layout'] = 'wide';
    $default_settings['choose_bg'] = 0;
    $default_settings['choose_pattern'] = 1;
    $default_settings['demo_theme_options'] = 1;
    $default_settings['map_latlng'] = '40.748395,-73.985542';
    $default_settings['map_types'] = 'ROADMAP';
    $default_settings['map_zoom_level'] = 17;
    return $default_settings;
}
/**
 * @param $form
 * @param $form_state
 * Reset all theme settings
 */
function md_boom_multi_reset_settings_submit($form, &$form_state){
  $theme_settings = variable_get('theme_md_boom_multi_settings');
  $default_settings = _md_boom_multi_theme_default_settings($theme_settings);
  variable_set('theme_md_boom_multi_settings',$default_settings);
  drupal_set_message('All settings reset to default');
  cache_clear_all();
}
/**
 * remove slider bg
 */
function remove_slider_bg($form, &$form_state){
  $slider_bg_image = theme_get_setting('slider_bg_image','md_boom_multi');
  foreach($slider_bg_image as $key => $image){
    if($form_state['values']['op'] == t('Remove Slider '.$key.'')){
      unset($slider_bg_image[$key]);
    }
  }
  $theme_settings = variable_get('theme_md_boom_multi_settings');
  foreach($theme_settings as $settings){
    if($settings == 'slider_bg_image'){
      $theme_settings['slider_bg_image'] = $slider_bg_image;
    }
  }
  variable_set('theme_md_boom_multi_settings',$theme_settings);
}
/**
 * ajax upload image
 */
function ajax_upload_image($form, &$form_state){
  $file = file_save_upload('favicon_upload', array('file_validate_extensions' => array('png gif jpg jpeg')), "public://",$replace = FILE_EXISTS_REPLACE);
  if ($file)
  {
    $file->status=FILE_STATUS_PERMANENT;
    file_save($file);
    $form['favicon']['settings']['favicon_file']['favicon_preview'] = array(
      '#prefix'  => '<div id="favicon-preview"><div class="image-preview"><img src="'.file_create_url($file->uri).'"/></div><div class="rm-favicon"><input type="button" value="Remove" class="rm-button"/></div>',
      '#suffix'   => '</div></div>'
    );
  }
  else {
    drupal_set_message('No file uploaded.');
  }

  return $form['favicon']['settings']['favicon_file']['favicon_preview'];
}
/**
 * Backup Theme Settings
 */
function md_boom_multi_backup_theme_settings() {
  $theme_settings = variable_get('theme_md_boom_multi_settings');
  $current_time = time();
  $cv_datetime = date("Y-m-d",$current_time);
  $backup_file = serialize(base64_encode(drupal_json_encode($theme_settings)));
  $bu_folder = 'public://md_boom_multi_backup';
  if(file_prepare_directory($bu_folder) === false) {
    drupal_mkdir($bu_folder);
  }
  if (file_unmanaged_save_data($backup_file, $bu_folder . '/backup-'.$cv_datetime.'-'.$current_time.'.txt', FILE_EXISTS_REPLACE) === FALSE) {
    drupal_set_message(t("Could not create backup file."));
    return;
  } else {
    drupal_set_message(t("Backup Theme Settings Successful!"));
  }
}
/**
 * Restore Theme settings
 */
function md_boom_multi_restore_theme_settings($form, &$form_state) {
  variable_set('theme_md_boom_multi_settings',array());
  if ($restore_file = file_save_upload('restore_file_upload')) {
    $file_content = file_get_contents($restore_file->uri);
    $restore_settings = drupal_json_decode(base64_decode(unserialize($file_content)));
    variable_set('theme_md_boom_multi_settings',$restore_settings);
    cache_clear_all();
    drupal_set_message(t('All your theme settings have been restored'));
  }
  elseif($restore_file_path = $form_state['values']['restore_file_path']) {
    $restore_file_scheme = file_uri_scheme($restore_file_path);
    if($restore_file_scheme == 'http' || $restore_file_scheme == 'https') {
      $restore_file_url = rawurldecode($restore_file_path);
      $restore_file_content = file_get_contents($restore_file_url);
      $restore_settings = drupal_json_decode(base64_decode(unserialize($restore_file_content)));
      variable_set('theme_md_boom_multi_settings',$restore_settings);
      cache_clear_all();
      drupal_set_message(t('All your theme settings have been restored'));
    } else {
      $restore_file_content = file_get_contents($restore_file_path);
      $restore_settings = drupal_json_decode(base64_decode(unserialize($restore_file_content)));
      variable_set('theme_md_boom_multi_settings',$restore_settings);
      cache_clear_all();
      drupal_set_message(t('All your theme settings have been restored'));
    }
  }
}
/**
 * Analys goole link to get font information
 */
function _md_boom_multi_process_google_web_font($fonts) {
  if (strpos($fonts, '@import url(') !== FALSE) {
    preg_match("/http:\/\/\s?[\'|\"]?(.+)[\'|\"]?\s?(\)|\')/Uix", $fonts, $ggwflink);
  }

  preg_match('/([^\?]+)(\?family=)?([^&\']+)/i', $fonts, $matches);
  $gfonts = explode("|", $matches[3]);

  for ($i = 0; $i < count($gfonts); $i++) {
    $gfontsdetail = explode(":", $gfonts[$i]);
    $gfontname = str_replace("+", " ", $gfontsdetail['0']);
    $fontarray[] = $gfontname;
    if (array_key_exists('1', $gfontsdetail)) {
      $tmpft = explode(",", $gfontsdetail['1']);
      $gfontweigth[$i] = "";
      for ($j = 0; $j < count($tmpft); $j++) {
        if (preg_match("/italic/i", $tmpft[$j])) {
          $gfontstyle = "i";
        } else {
          $gfontstyle = "n";
        }
        $tmpw = str_replace("italic", "", $tmpft[$j]);
        $seperator = ",";

        if ($j == (count($tmpft) - 1)) {
          $seperator = "";
        }

        if ($tmpw) {
          $gfontweigth[$i] .= $gfontstyle . str_replace("00", "", $tmpw) . $seperator;
        } else {
          $gfontweigth[$i] .= "n4" . $seperator;
        }
      }
    } else {
      $gfontweigth[$i] = "n4";
    }
    $fontvars[] = array(
      'CSS' => '"' . $gfontname . '"',
      'Weight' => $gfontweigth[$i],
    );
  }

  return array($fontarray, $fontvars);
}
/**
 * Get fonts information from type-kit id
 */
function _md_boom_multi_process_typekit_font($typekit_id) {
  $tk_url = 'http://typekit.com/api/v1/json/kits/' . $typekit_id . '/published';
  $typekit = json_decode(file_get_contents($tk_url), true);
  for ($i = 0; $i < count($typekit['kit']['families']); $i++) {
    $fontarray[] = $typekit['kit']['families'][$i]['name'];
    $fontweight = "";
    for ($j = 0; $j < count($typekit['kit']['families'][$i]['variations']); $j++) {
      if (($j + 1) == count($typekit['kit']['families'][$i]['variations'])) {
        $fontweight .= $typekit['kit']['families'][$i]['variations'][$j];
      } else {
        $fontweight .= $typekit['kit']['families'][$i]['variations'][$j] . ',';
      }
    }
    $fontvars[] = array(
      'CSS' => $typekit['kit']['families'][$i]['css_stack'],
      'Weight' => $fontweight,
    );
  }

  return array($fontarray, $fontvars);
}
/**
 * Load font configure
 */
function load_font_configure() {
  $theme_default = variable_get('theme_default', 'Bartik');
  $fontarray = array(
    t('Default'),
    t('Arial'),
    t('Verdana'),
    t('Trebuchet MS'),
    t('Georgia'),
    t('Times New Roman'),
    t('Tahoma'),
  );

  $fontvars = array(
    array('CSS' => '', 'Weight' => 'n4'),
    array('CSS' => 'Arial, sans-serif', 'Weight' => 'n4, n7, i4, i7'),
    array('CSS' => 'Verdana, Geneva, sans-serif', 'Weight' => 'n4, n7, i4, i7'),
    array('CSS' => 'Trebuchet MS, Tahoma, sans-serif', 'Weight' => 'n4, n7, i4, i7'),
    array('CSS' => 'Georgia, serif', 'Weight' => 'n4, n7, i4, i7'),
    array('CSS' => 'Times New Roman, serif', 'Weight' => 'n4, n7, i4, i7'),
    array('CSS' => 'Tahoma, Geneva, Verdana, sans-serif', 'Weight' => 'n4, n7, i4, i7'),
  );
  $google_font = theme_get_setting('googlewebfonts','md_boom_multi');
  if ($google_font != '') {
    $result = _md_boom_multi_process_google_web_font($google_font);
    add_font_style($result, $fontarray, $fontvars);
  }
  $typekit = theme_get_setting('typekit_id','md_boom_multi');;

  if ($typekit != '') {
    $result = _md_boom_multi_process_typekit_font($typekit);
    add_font_style($result, $fontarray, $fontvars);
  }

  return array($fontarray, $fontvars);
}

function add_font_style($results, &$font_array, &$font_vars) {
  if (is_array($results)) {
    foreach ($results[0] as $id => $font_name) {
      $key = array_search($font_name, $font_array);
      if ($key === FALSE) {
        $font_array[] = $font_name;
        $font_vars[] = $results[1][$id];
      } else {
        $font_vars[$key] = $results[1][$id];
      }
    }
  }
}
