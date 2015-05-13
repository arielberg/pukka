<?php

/**
 * @file
 * Theme settings .
 */

function md_boom_multi_theme_settings_pages(&$form, &$form_state) {
    $form['md_boom_multi_settings']['pages'] = array(
        '#type' 					=> 'fieldset',
        '#weight' 				=> -2,
        '#prefix'  				=> '<div id="md-pages" class="md-tabcontent clearfix">',
        '#suffix'        => '</div><!-- / #md-pages -->',
    );

    $form['md_boom_multi_settings']['pages']['pages_htmllist'] = array(
        '#markup' 				=> '<div class="md-listleft">
				<ul>
					<li><a href="#p-layout">'.t('Layout settings').'</a></li>
					<li><a href="#p-maintenance">'.t('Maintenance settings').'</a></li>
				</ul>
			</div><div class="md-listcontent">',
        '#weight' 				=> -15,
    );
    $form['md_boom_multi_settings']['pages']['pages_htmllistclose'] = array(
        '#markup' 				=> '</div><!-- /.md-listleft -->',
        '#weight' 				=> 15,
    );

    /* 1.	Layout settings
    --------------------------------------------------------------------------*/
    $form['md_boom_multi_settings']['pages']['page_layout'] = array(
        '#type' 					=> 'fieldset',
        '#weight' 				=> -5,
        '#prefix'  				=> '<div id="p-layout" class="md-tabcontent clearfix">',
        '#suffix'               => '</div><!-- / #p-blog -->',
    );

    $form['md_boom_multi_settings']['pages']['page_layout']['sidebar_position'] = array(
        '#type'          => 'select',
        '#title'         => t('Sidebar position'),
        '#default_value' => theme_get_setting('sidebar_position','md_boom_multi') ? theme_get_setting('sidebar_position','md_boom_multi') : 'right',
        '#options'       => array(
            'no'        => t('No sidebar'),
            'left'      => t('Left'),
            'right' 	=> t('Right'),
        ),
    );
    $form['md_boom_multi_settings']['pages']['page_layout']['front_page'] = array(
        '#type'     => 'select',
        '#title'    => t('Choose Home Page'),
        '#default_value'    => theme_get_setting('front_page','md_boom_multi') ? theme_get_setting('front_page','md_boom_multi') : 'home_mega_slider_1',
        '#options'  => array(
            'home_mega_slider_1' => t('Home with Mega Slider 1'),
            'home_mega_slider_2' => t('Home with Mega Slider 2'),
        )
    );
    $form['md_boom_multi_settings']['pages']['page_layout']['sites_layout'] = array(
        '#type' => 'select',
        '#title'    => t('Choose site layout'),
        '#default_value'    => theme_get_setting('sites_layout','md_boom_multi') ? theme_get_setting('sites_layout','md_boom_multi') : 'wide',
        '#options'   => array(
            'wide'  => t('Wide'),
            'boxed' => t('Boxed'),
        ),
    );
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background'] = array(
        '#type' 					=> 'fieldset',
        '#prefix'  				    => '<div id="ds-background" class="md-tabcontent clearfix">',
        '#suffix'                   => '</div><!-- / #ds-background -->',
    );

    // Background settings
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['bg_color'] = array(
        '#type'          => 'textfield',
        '#title'         => t('Background-color'),
        '#default_value' => theme_get_setting('bg_color','md_boom_multi'),
        '#prefix' => '<div class="form-font-color">',
        '#suffix' => '</div>'
    );

    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['choose_bg'] = array(
        '#type'          => 'select',
        '#title'         => t('Choose background'),
        '#description'   => t('Choose background color or choose other options to upload your custom type backgrounds'),
        '#default_value' => theme_get_setting('choose_bg','md_boom_multi'),
        '#options'       => array(
            '0'     => t('Default'),
            '1'		=> t('Pattern'),
            '2'     => t('Custom Single Image'),
            '3'     => t('Custom Slider Image'),
            '4'     => t('Custom Video Background'),
        ),
    );

    $items = array();
    $path_data_dir = drupal_get_path('theme', 'md_boom_multi') . '/images/background/patterns';
    $files = file_scan_directory($path_data_dir, '/.png$/');
    $pattern_css = "";
    foreach ($files as $file) {
        $items[$file->name] = t('Pattern ' . $file->name);
        $pattern_css .= '#pt' . $file->name . ' {background:url(' . base_path() . drupal_get_path('theme', 'md_boom_multi') . '/images/background/patterns/' . $file->name . '.png) repeat 0 0;}';
    }
    drupal_add_css($pattern_css, 'inline');


    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['choose_pattern'] = array(
        '#type'          => 'select',
        '#title'         => t('Choose Pattern'),
        '#default_value' => theme_get_setting('choose_pattern','md_boom_multi'),
        '#options'       => $items,
        '#prefix' => '<div id="design-bg-pattern" class="clearfix">',
        '#suffix' => '</div>',
    );

    $bg_path = theme_get_setting('bg_path','md_boom_multi');

    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['bg_path'] = array(
        '#type' => 'textfield',
        '#title' => t('Path to custom background'),
        '#default_value' =>  $bg_path,
        '#prefix' => '<div id="design-bg-custom" class="clearfix">',
    );

    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['bg_upload'] = array(
        '#type' => 'file',
    );

    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['bg_repeat'] = array(
        '#type'          => 'select',
        '#title'         => t('Background repeat'),
        '#default_value' => theme_get_setting('bg_repeat','md_boom_multi'),
        '#options'       => array(
            'inherit'   => t('Inherit'),
            'repeat'    => t('Repeat'),
            'repeat-x'  => t('Repeat X'),
            'repeat-y'  => t('Repeat Y'),
            'no-repeat' => t('No repeat'),
        ),
    );

    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['bg_position'] = array(
        '#type'          => 'select',
        '#title'         => t('Background position'),
        '#default_value' => theme_get_setting('bg_position','md_boom_multi'),
        '#options'       => array(
            'left top'   => t('Left Top'),
            'left center'   => t('Left Center'),
            'left bottom'    => t('Left Bottom'),
            'center center'  => t('Center Center'),
            'center top'  => t('Center Top'),
            'center bottom'  => t('Center Bottom'),
            'right top'  => t('Right Top'),
            'right center'  => t('Right Center'),
            'right bottom'  => t('Right Bottom'),
        ),
    );

    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['bg_attachment'] = array(
        '#type'          => 'select',
        '#title'         => t('Background Attachment'),
        '#default_value' => theme_get_setting('bg_attachment','md_boom_multi'),
        '#options'       => array(
            'scroll'   => t('Scroll'),
            'fixed'   => t('Fixed'),
        ),
        '#suffix' => '</div>',
    );
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['slider_bg'] = array(
        '#prefix' => '<div id="design-slider-bg-custom" class="clearfix">',
    );
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['slider_bg_preview_openhtml'] = array(
        '#markup'   => '<div class="slider_bg_image"><ul class="slider_preview">',
    );
    if(theme_get_setting('slider_bg_image','md_boom_multi')){
        $slider_bg_preview = theme_get_setting('slider_bg_image','md_boom_multi');
        foreach($slider_bg_preview as $key => $preview){
            $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['slider_bg']['slider_bg_path_'.$key.''] = array(
                '#type'             =>      'textfield',
                '#default_value'    =>      drupal_basename($preview),
                '#prefix'           => '<li><img src="'.file_create_url($preview).'" alt="" style="width:150px;height:120px;"/></a></li>',
                '#suffix'           => '',
                );
            $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['slider_bg']['slider_bg_remove_'.$key.''] = array(
                '#type'     => 'submit',
                '#value'    => t('Remove Slider '.$key.''),
                '#attributes'   => array('id' => 'remove_slider_bg_'.$key.''),
                '#submit'   => array('remove_slider_bg'),
            );
        }
    }
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['slider_bg_preview_closehtml'] = array(
        '#markup'   => '</ul></div>',
    );

    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['slider_bg']['slider_bg_upload'] = array(
        '#type' => 'plupload',
        '#title' => t('Upload files'),
        '#description' => t('This multi-upload widget uses Plupload library.'),
        '#upload_validators' => array(
            'file_validate_extensions' => array('jpg jpeg gif png'),
            'my_custom_file_validator' => array('some validation criteria'),
        ),
        '#plupload_settings' => array(
            'runtimes' => 'html5',
            'chunk_size' => '10mb',
        ),
        '#suffix'   => '<span>'.t('Press Save Configuration to store your picture').'</span></div>',
    );
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['video_bg'] = array(
        '#prefix' => '<div id="design-video-bg-custom" class="clearfix">',
    );
    $video_bg_path = theme_get_setting('video_bg_path','md_boom_multi');
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['video_bg']['video_bg_path'] = array(
        '#type' => 'textfield',
        '#title' => t('Path to custom video background'),
        '#default_value' =>  $video_bg_path,
        '#suffix' => '</div>'
    );
    $form['md_boom_multi_settings']['pages']['page_layout']['design_background']['video_bg']['video_bg_upload'] = array(
        '#type' => 'file',
    );
    $form['md_boom_multi_settings']['pages']['page_maintenance'] = array(
        '#type'                 => 'fieldset',
        '#weight'               => -7,
        '#prefix'  				=> '<div id="p-maintenance" class="md-tabcontent clearfix">',
        '#suffix'               => '</div><!-- / #p-blog -->',

    );
    $form['md_boom_multi_settings']['pages']['page_maintenance']['countdown_event_time'] = array(
        '#type'                 => 'textfield',
        '#default_value'        => theme_get_setting('countdown_event_time','md_boom_multi'),
        '#title'                => t('Countdown Event Time'),
        '#prefix'          => t('<div>'),
        '#suffix'               => t('</div>'),
    );
    $dt_picker_js = 'jQuery(document).ready(function($) {
                        $("#edit-countdown-event-time").datetimepicker({
                                        timeFormat: "HH:mm:ss",
                                        dateFormat: "dd MM yy",
                                        hourMax: 23
                        });
                    });';
    drupal_add_js($dt_picker_js,'inline');
    $form['md_boom_multi_settings']['pages']['page_maintenance']['maintenance_message'] = array(
        '#type'                 => 'textarea',
        '#default_value'        => theme_get_setting('maintenance_message','md_boom_multi') ? theme_get_setting('maintenance_message','md_boom_multi') : t('<p>
                <span>Our awesome website is</span> <br>
                Under construction
            </p>'),
        '#title'                => t('Maintenance Message'),
        '#prefix'          => t('<div>'),
        '#suffix'               => t('</div>'),
        '#description'          => t('</br><p>Setting your site maintenance mode '.l('here','admin/config/development/maintenance').'</p>'),
    );
}