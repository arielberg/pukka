<?php
/**
 * Add body classes if certain regions have content.
 */
function md_boom_multi_preprocess_html(&$vars) {
    global $base_url;
    $vars['base_url'] = $base_url;
    $css = "";
    $themepath = drupal_get_path('theme', 'md_boom_multi');
    $vars['theme_path'] = $themepath;
    $layout = theme_get_setting('sites_layout','md_boom_multi');
    $header = theme_get_setting('header_style','md_boom_multi');
    $widget = theme_get_setting('widget_style','md_boom_multi');
    $skin = theme_get_setting('skins','md_boom_multi');
    md_boom_multi_default_theme_options($layout, $header, $widget, $skin);
    drupal_add_css($themepath . '/css/bootstrap.css');
    drupal_add_css($themepath . '/css/flexslider.css');
    drupal_add_css($themepath . '/css/jquery.jscrollpane.codrops.css');
    drupal_add_css($themepath . '/css/prettyPhoto.css');
    drupal_add_css($themepath . '/css/isotope.css');
    drupal_add_css($themepath . '/css/stimenu.css');
    drupal_add_css($themepath . '/css/drop-down.css');
    drupal_add_css($themepath . '/css/bigvideo.css');
    drupal_add_css($themepath . '/css/style.css');
    drupal_add_css($themepath . '/css/pukka.css');
    drupal_add_css($themepath . '/css/bootstrap-responsive.min.css');
    drupal_add_css($themepath . '/css/responsive.css');
    drupal_add_css($themepath . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE), 'preprocess' => FALSE));

    drupal_add_js($themepath . '/js/bootstrap.min.js');
    drupal_add_js($themepath . '/js/jquery.cycle2.js');
    drupal_add_js($themepath . '/js/jquery.form.js');
    drupal_add_js($themepath . '/js/jquery.validate.min.js');
    drupal_add_js($themepath . '/js/jquery.carouFredSel-5.6.4.js');
    drupal_add_js($themepath . '/js/jquery.easing.1.3.js');
    drupal_add_js($themepath . '/js/jquery.iconmenu.js');
    drupal_add_js($themepath . '/js/jquery.flexslider-min.js');
    drupal_add_js($themepath . '/js/jflickrfeed.min.js');
    drupal_add_js($themepath . '/js/scroll-startstop.events.jquery.js');
    drupal_add_js($themepath . '/js/jquery.jscrollpane.min.js');
    drupal_add_js($themepath . '/js/jquery.prettyPhoto.js');
    drupal_add_js($themepath . '/js/countdown.js');
    drupal_add_js($themepath . '/js/jquery.isotope.min.js');

    drupal_add_js($themepath . '/js/styleswitch.js');
    drupal_add_js($themepath . '/js/jquery-ui-1.8.22.custom.min.js');
    drupal_add_js($themepath . '/js/jquery.imagesloaded.min.js');
    drupal_add_js('http://maps.googleapis.com/maps/api/js?sensor=false', 'external');
    drupal_add_js($themepath . '/js/jquery.mousewheel.js');
    drupal_add_js($themepath . '/js/bigvideo.js');
    drupal_add_js($themepath . '/js/video.js');
    drupal_add_js($themepath . '/js/custom.js');
    drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans:400,300,300italic,400italic,600,600italic,700,700italic,800italic,800', 'external');
    drupal_add_css('http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,200,300,300italic,200italic,400italic,600italic,600,700,700italic,900,900italic', 'external');
    drupal_add_css('http://fonts.googleapis.com/css?family=Pacifico', 'external');
    $html5shiv = array(
        '#tag' => 'script',
        '#attributes' => array( // Set up an array of attributes inside the tag
            'src' => base_url().$themepath . '/js/onepage/html5.js',
        ),
        '#prefix' => '<!--[if lte IE 9]>',
        '#suffix' => '</script><!['.'endif]-->',
    );
    $css3_queries = array(
        '#tag' => 'script',
        '#attributes' => array( // Set up an array of attributes inside the tag
            'src' => base_url().$themepath . '/js/onepage/css3.mediaqueries.js',
        ),
        '#prefix' => '<!--[if lte IE 9]>',
        '#suffix' => '</script><!'.'[endif]-->',
    );
    drupal_add_html_head($html5shiv, 'html5shiv');
    drupal_add_html_head($css3_queries, 'css3_queries');
    if(current_path() == 'node/64'){
        drupal_add_js($themepath . '/js/countdown.js');
    }

    /* --------------------------Skin ------------------------------*/
    if (theme_get_setting('skins') != '0') {
        drupal_add_css($themepath . '/css/colors/'.theme_get_setting('skins').'.css', array('group' => CSS_THEME));
    }

    /*------------------------- Home Page -------------------------*/
    if(theme_get_setting('front_page','md_boom_multi')){
        variable_set('site_frontpage',theme_get_setting('front_page','md_boom_multi'));
    }
    /*------------------------- Layout ----------------------------*/
    if(theme_get_setting('sites_layout','md_boom_multi')){
        if(theme_get_setting('sites_layout','md_boom_multi') == 'wide'){
            $css .= "body {background-image:none; background-color:#ffffff}";
        }
        if(theme_get_setting('sites_layout','md_boom_multi') == 'boxed'){
            if (theme_get_setting('choose_bg','md_boom_multi') == 2) {
                $bg_path = theme_get_setting('bg_path','md_boom_multi');
                $css .= "body.flx-boxed {";
                if ($bg_path) {
                    $filescheme = file_uri_scheme($bg_path);
                    if ($filescheme == 'public') {
                        $css .= "background-image:url(". file_create_url($bg_path) .");\n";
                    } else if (($filescheme == 'http') || ($filescheme == 'https')) {
                        $css .= "background-image:url(". $bg_path .");\n";
                    } else {
                        $css .= "background-image:url(". file_create_url(file_build_uri($bg_path)) .");\n";
                    }
                    if (theme_get_setting('bg_repeat','md_boom_multi')) {$css .= "background-repeat:". theme_get_setting('bg_repeat','md_boom_multi').";\n";}
                    if (theme_get_setting('bg_attachment','md_boom_multi')) {$css .= "background-attachment:". theme_get_setting('bg_attachment','md_boom_multi').";\n";}
                    if (theme_get_setting('bg_position','md_boom_multi')) {$css .= "background-position:". theme_get_setting('bg_position','md_boom_multi') .";\n";}
                }
                if (theme_get_setting('bg_color')) {
                    $css .= "background-color:#".theme_get_setting('bg_color','md_boom_multi').";\n";
                    if (!$bg_path) { $css .= "background-image: none;\n"; }
                }
                $css .= "}\n";
            }
            elseif (theme_get_setting('choose_bg','md_boom_multi') == 1) {
                $css = "body.flx-boxed {background:url(" . base_path() . $themepath ."/images/background/patterns/". theme_get_setting('choose_pattern','md_boom_multi') . ".png) repeat 0 0;}\n";
            }
            elseif (theme_get_setting('choose_bg','md_boom_multi') == 3){
                if($slider_bg_image = theme_get_setting('slider_bg_image','md_boom_multi')){
                    $vars['slider_bg_image'] = $slider_bg_image;
                    $slider_bg_js = 'jQuery(document).ready(function($){
                                        jQuery(".bg-wrapper").css({"display":"block"});
                                    });';
                    drupal_add_js($slider_bg_js,'inline');
                }
            }
            elseif(theme_get_setting('choose_bg','md_boom_multi') == 4) {
                $video_bg_path = theme_get_setting('video_bg_path','md_boom_multi');
                if(isset($video_bg_path)) {
                    $video_bg_js = 'jQuery(document).ready(function($){
                                        jQuery(".bg-wrapper").css({"display":"none"});
                                        jQuery("#big-video-wrap").css({"display":"block"});
                                    });';
                    drupal_add_js($video_bg_js,'inline');
                    $video_scheme = file_uri_scheme($video_bg_path);
                    if($video_scheme == 'public') {
                        drupal_add_js(array('videoBG' => file_create_url($video_bg_path)),'setting');
                    } elseif ($video_scheme == 'http' || $video_scheme == 'https') {
                        drupal_add_js(array('videoBG' => $video_bg_path),'setting');
                    } else {
                        drupal_add_js(array('videoBG' => file_create_url(file_build_uri($video_bg_path))),'setting');
                    }

                }
            }
            else {
                if (theme_get_setting('bg_color','md_boom_multi')){
                        $css  .= 'body.flx-boxed {background-color: #' . theme_get_setting('bg_color','md_boom_multi'). '}';
                } else {
                        $css .= 'body.flx-boxed {background-color: #ffffff;}';
                }
            }
        }
    }
  /*-------------------------- Header ---------------------------*/
  //No header title for home,user,portfolio,about_us,faq,contact page
  $current_path = current_path();
  if($current_path == 'about_us' || $current_path == 'faq' || $current_path == 'contact'){
        $css .= ".header-title { display:none; }";
  }
  if (theme_get_setting('extra_page_classes','md_boom_multi')) {
    if (function_exists('locale')) {
      $vars['classes_array'][] = 'lang-'. $vars['language']->language;
    }
  }
  if ($vars['classes_array'] != null) {
    foreach($vars['classes_array'] as $i =>$class) {
      if(preg_match('/portfolio/', $class)) {
        $css .= '.header-title{display:none;}';
      }
    }
  }

	/*------------------------------- Sidebar position -----------------------------*/
        if(theme_get_setting('sidebar_position','md_boom_multi') == 'left') {
            $vars['sidebar_class'] = ' left-sidebar ';
        }
        if(theme_get_setting('sidebar_position','md_boom_multi') == 'right') {
            $vars['sidebar_class'] = ' right-sidebar ';
        }

   /*------------------------------- Maintenance Page -----------------------------*/
    if($current_path == 'node/64'){
        $current_dt = date('d F Y H:i:s',time());
        if(theme_get_setting('countdown_event_time','md_boom_multi')){
            $event_dt = theme_get_setting('countdown_event_time','md_boom_multi');
        } else {
            $event_dt = $current_dt;
        }
        $countdown_js = 'jQuery(document).ready(function($){
            $("#countdown").countdown({
                    start_date : "'.$current_dt.'",
                    event_date: "'.$event_dt.'",
                    format: "on"
                },

                function() {
                    // callback function
                });
        });';
        drupal_add_js($countdown_js,array(
            'type'  => 'inline',
            'scope' => 'footer',
        ));
    }
	/*-------------------------------------- Custom Web clip -----------------------------------------*/
	$webclip_path = theme_get_setting('webclip_path','md_boom_multi');
	if ($webclip_path) {
    $wc_href = "";
		if (file_uri_scheme($webclip_path) == 'public') {
			$wc_href = file_create_url($webclip_path);
		} else {
			$wc_href = file_create_url(file_build_uri($webclip_path));
		}
		
		$wc_rel = "apple-touch-icon";
	  if (theme_get_setting('webclip_precomp','md_boom_multi')) { // no output if $url_precomp = ''
	    $wc_rel = "apple-touch-icon-precomposed";
	  }
		$wc = array(
			'#tag' => 'link',
			'#attributes' => array(
				'href' => $wc_href,
				'rel' => $wc_rel,
				'type' => file_get_mimetype($wc_href),
			),
		);
		drupal_add_html_head($wc, 'webclip');
    }

    $vars['theme_setting_css'] = $css;
	/*------------------------------------------------ Typekit --------------------------------------------------*/
	if (theme_get_setting('typekit_id','md_boom_multi')) {
		drupal_add_js('http://use.typekit.net/'.theme_get_setting('typekit_id','md_boom_multi').'.js', 'external');
		drupal_add_js('try{Typekit.load();}catch(e){}', 'inline');
	}
	/*--------------------------------------------- Map ---------------------------------------------------------*/
    if($current_path == t('contact')){
        if(theme_get_setting('map_latlng','md_boom_multi')){
            $map_latlng = theme_get_setting('map_latlng','md_boom_multi');
            $map_types = theme_get_setting('map_types','md_boom_multi');
            $map_zoom_level = theme_get_setting('map_zoom_level','md_boom_multi');
            $map_js = ' var $map_canvas = jQuery("#map_canvas");
                            if($map_canvas.size()>0){
                                function initialize() {
                                    var map_center = Drupal.settings.map_latlng;
                                    var latlng = new google.maps.LatLng('.$map_latlng.');
                                    var settings = {
                                        zoom: '.$map_zoom_level.',
                                        center: latlng,
                                        scrollwheel: false,
                                        navigationControl: false,
                                        scaleControl: false,
                                        streetViewControl: false,
                                        draggable: true,
                                        mapTypeControl: true,
                                        mapTypeControlOptions: {style: google.maps.MapTypeControlStyle.DROPDOWN_MENU},
                                        navigationControl: true,
                                        navigationControlOptions: {style: google.maps.NavigationControlStyle.SMALL},
                                        mapTypeId: google.maps.MapTypeId.'.$map_types.'
                                    };

                                    var map = new google.maps.Map(document.getElementById("map_canvas"), settings);
                                }
                                window.onload = initialize();
                            }';
            drupal_add_js($map_js,array('type' => 'inline','scope' => 'footer'));
        }
    }
	/*------------------------------------------ Text/typography	------------------------------------------*/
	$typography = '';
	// common text
	if (theme_get_setting('text_font','md_boom_multi') || theme_get_setting('ts_font_color','md_boom_multi')) {
    $typography = "body {";
    $typography .= md_boom_multi_font_to_css(theme_get_setting('text_font','md_boom_multi'));
		if (theme_get_setting('ts_font_color','md_boom_multi')) {
      $typography .= 'color: #' . theme_get_setting('ts_font_color') . ';';
		}
    $typography   .= "}\n";
	}

  $text_font_arr = explode("|", theme_get_setting('text_font','md_boom_multi'));
  if (count($text_font_arr) == 5 && $text_font_arr[0] != '0') {
    $typography   .= '#forum, ul.quicktabs-tabs, #nav ul.sf-menu li li,.ui-widget {font-family: '.$text_font_arr[4].';}';
  }

	/*------------------------------------------ Text selection -------------------------------------------*/
	if (theme_get_setting('tss_bgcolor','md_boom_multi') || theme_get_setting('tss_tcolor','md_boom_multi')) {
    $tss_bgcolor = '';
    $tss_tcolor = '';
		if (theme_get_setting('tss_bgcolor','md_boom_multi')) {
		  $tss_bgcolor   = 'background: #'.theme_get_setting('tss_bgcolor','md_boom_multi').';';
		}
		if (theme_get_setting('tss_tcolor','md_boom_multi')) {
		  $tss_tcolor   = 'color: #'.theme_get_setting('tss_tcolor','md_boom_multi').';';
		}
    $typography   .= "::-moz-selection {". $tss_bgcolor . $tss_tcolor . "text-shadow: none;}\n";
    $typography   .= "::selection {" . $tss_bgcolor . $tss_tcolor. "text-shadow: none;}\n";
	}
	// link regular
	if (theme_get_setting('l_regular_color','md_boom_multi') || theme_get_setting('l_regular_st','md_boom_multi') || theme_get_setting('l_regular_hl','md_boom_multi') || theme_get_setting('l_regular_ts','md_boom_multi')) {
    $typography   .= "a:link, #node-title a {";
		if (theme_get_setting('l_regular_color','md_boom_multi')) {
      $typography   .= 'color: #'.theme_get_setting('l_regular_color','md_boom_multi').';';
		}
		if (theme_get_setting('l_regular_hl','md_boom_multi')) {
		  $typography   .= 'background-color: #'.theme_get_setting('l_regular_hlc','md_boom_multi').';';
		}
        if (theme_get_setting('l_regular_st','md_boom_multi') == 1) {
            $typography   .= 'text-decoration: line-through;';
        }
		$l_text_style = theme_get_setting('l_regular_ts','md_boom_multi');
		if ($l_text_style['bold']) {
		  $typography   .= 'font-weight: '.$l_text_style['bold'].';';
		}
		if ($l_text_style['italic']) {
		  $typography   .= 'font-style: '.$l_text_style['italic'].';';
		}
		if ($l_text_style['underline']) {
		  $typography   .= 'text-decoration: '.$l_text_style['underline'].';';
		}
		$typography   .= "}\n";
	}
	/*------------------------------------------------- link rollover ---------------------------------------------*/
	if (theme_get_setting('l_rollover_color','md_boom_multi') || theme_get_setting('l_rollover_st','md_boom_multi') || theme_get_setting('l_rollover_hl','md_boom_multi') || theme_get_setting('l_rollover_ts','md_boom_multi')) {
		$typography   .= "a:hover, #node-title a:hover {";
		if (theme_get_setting('l_rollover_color')) {
		  $typography   .= 'color: #'.theme_get_setting('l_rollover_color','md_boom_multi').';';
		}
		if (theme_get_setting('l_rollover_hl')) {
		  $typography   .= 'background-color: #'.theme_get_setting('l_rollover_hlc','md_boom_multi').';';
		}
        if (theme_get_setting('l_rollover_st','md_boom_multi') == 1) {
            $typography   .= 'text-decoration: line-through;';
        }
		$l_text_style = theme_get_setting('l_rollover_ts','md_boom_multi');
		if ($l_text_style['bold']) {
		  $typography   .= 'font-weight: '.$l_text_style['bold'].';';
		}
		if ($l_text_style['italic']) {
		  $typography   .= 'font-style: '.$l_text_style['italic'].';';
		}
		if ($l_text_style['underline']) {
		  $typography   .= 'text-decoration: '.$l_text_style['underline'].';';
		}
		$typography   .= "}\n";
	}
	
	/*------------------------------------------------ link visited ----------------------------------------------*/
	if (theme_get_setting('l_visited_color','md_boom_multi') || theme_get_setting('l_visited_st','md_boom_multi') || theme_get_setting('l_visited_hl','md_boom_multi') || theme_get_setting('l_visited_ts','md_boom_multi')) {
		$typography   .= "a:visited, #node-title a:visited {";
		if (theme_get_setting('l_visited_color')) {
		  $typography   .= 'color: #'.theme_get_setting('l_visited_color','md_boom_multi').';';
		}
		if (theme_get_setting('l_visited__hl')) {
		  $typography   .= 'background-color: #'.theme_get_setting('l_visited_hlc','md_boom_multi').';';
		}
        if (theme_get_setting('l_visited_st','md_boom_multi') == 1) {
            $typography   .= 'text-decoration: line-through;';
        }
		$l_text_style = theme_get_setting('l_visited_ts','md_boom_multi');
		if ($l_text_style['bold']) {
		  $typography   .= 'font-weight: '.$l_text_style['bold'].';';
		}
		if ($l_text_style['italic']) {
		  $typography   .= 'font-style: '.$l_text_style['italic'].';';
		}
		if ($l_text_style['underline']) {
		  $typography   .= 'text-decoration: '.$l_text_style['underline'].';';
		}
		$typography   .= "}\n";
	}
	
	/*-------------------------------------------------- link on ----------------------------------------------------*/
	if (theme_get_setting('l_on_color','md_boom_multi') || theme_get_setting('l_on_st','md_boom_multi') || theme_get_setting('l_on_hl','md_boom_multi') || theme_get_setting('l_on_ts','md_boom_multi')) {
		$typography   .= "a:focus, a:active, #node-title a:focus, #node-title a:active {";
		if (theme_get_setting('l_on_color')) {
		  $typography   .= 'color: #'.theme_get_setting('l_on_color','md_boom_multi').';';
		}
		if (theme_get_setting('l_on_hl')) {
		  $typography   .= 'background-color: #'.theme_get_setting('l_on_hlc','md_boom_multi').';';
		}
        if (theme_get_setting('l_on_st','md_boom_multi') == 1) {
            $typography   .= 'text-decoration: line-through;';
        }
		$l_text_style = theme_get_setting('l_on_ts','md_boom_multi');
		if ($l_text_style['bold']) {
		  $typography   .= 'font-weight: '.$l_text_style['bold'].';';
		}
		if ($l_text_style['italic']) {
		  $typography   .= 'font-style: '.$l_text_style['italic'].';';
		}
		if ($l_text_style['underline']) {
		  $typography   .= 'text-decoration: '.$l_text_style['underline'].';';
		}
		$typography   .= "}\n";
	}
	
	
	/*-------------------------------------------------- Main menu -------------------------------------------------*/
	if (theme_get_setting('typo_header_style','md_boom_multi') || theme_get_setting('typo_menu_color','md_boom_multi')) {
		$typography   .= "#menu li{";
		if (theme_get_setting('text_font','md_boom_multi')) {
		  $typography   .= md_boom_multi_font_to_css(theme_get_setting('typo_header_style','md_boom_multi'));
		}
		
		if (theme_get_setting('typo_menu_color','md_boom_multi')) {
		  $typography   .= 'color: #'.theme_get_setting('typo_menu_color','md_boom_multi').';';
		}
		$typography   .= "}\n";
		
		if (theme_get_setting('typo_menu_color','md_boom_multi')) {
		  $typography   .= '#menu li a, #nav ul.sf-menu li a {color: #'.theme_get_setting('typo_menu_color','md_boom_multi').';}';
		}
		if (theme_get_setting('typo_menu_hover_color','md_boom_multi')) {
		  $typography   .= '#menu li > a:hover,#menu li.sfHover > a, #main li:hover a {color: #'.theme_get_setting('typo_menu_hover_color','md_boom_multi').';}'."\n";
		}
		if (theme_get_setting('typo_menu_active_color','md_boom_multi')) {
		  $typography   .= '#menu li > a:hover, #menu li.sfHover > a, #menu li a.active, #menu li.active a {color: #'.theme_get_setting('typo_menu_active_color','md_boom_multi').';}'."\n";
		}
	}
	/*-------------------------------------------- Heading -------------------------------------------------------*/
    if(theme_get_setting('typo_heading_style_enable','md_boom_multi') == 1){
        for($i=1;$i<=6;$i++){
            $typography .= 'h'.$i.' {';
            if(theme_get_setting('typo_heading_h'.$i.'_style') || theme_get_setting('typo_heading_h'.$i.'_color','md_boom_multi')){
                if(theme_get_setting('typo_heading_h'.$i.'_style')){
                    $typography .= md_boom_multi_font_to_css(theme_get_setting('typo_heading_h'.$i.'_style'));
                }
                if(theme_get_setting('typo_heading_h'.$i.'_color','md_boom_multi')){
                    $typography .= ' color: #'.theme_get_setting('typo_heading_h'.$i.'_color').';';
                }
            }
            $typography .= "}\n";
        }
    }
	/*----------------------------------------------- Node title ------------------------------------------------*/
	if (theme_get_setting('typo_nodetitle_style','md_boom_multi') || theme_get_setting('nodetitle_color','md_boom_multi')) {
		$typography   .= "#node-title {";
		if (theme_get_setting('typo_nodetitle_style')) {
		  $typography   .= md_boom_multi_font_to_css(theme_get_setting('typo_nodetitle_style'));
		}
		if (theme_get_setting('nodetitle_color','md_boom_multi')) {
		  $typography   .= 'color: #'.theme_get_setting('nodetitle_color','md_boom_multi').';';
		}
		$typography   .= "}\n";

		if (theme_get_setting('nodetitle_color')) {
		  $typography   .= '#node-title a {color: #'.theme_get_setting('nodetitle_color','md_boom_multi').';}'."\n";
		}

		if (theme_get_setting('nodetitle_hover_color')) {
		  $typography   .= '#node-title a:hover {color: #'.theme_get_setting('nodetitle_hover_color','md_boom_multi').';}'."\n";
		}
	}
	
	if (theme_get_setting('nodetitle_enable','md_boom_multi') == 1) {
		foreach (node_type_get_types() as $type => $name) {
			if (theme_get_setting('typo_n'.$type.'title_style') || theme_get_setting('n'.$type.'title_color','md_boom_multi')) {
				$typography   .= "#node-title span.node-$type-title {";
				if (theme_get_setting('typo_n'.$type.'title_style')) {
				  $typography   .= md_boom_multi_font_to_css(theme_get_setting('typo_n'.$type.'title_style','md_boom_multi'));
				}
				
				if (theme_get_setting('n'.$type.'title_color','md_boom_multi')) {
				  $typography   .= 'color: #'.theme_get_setting('n'.$type.'title_color','md_boom_multi').';';
				}
				$typography   .= "}\n";

				if (theme_get_setting('n'.$type.'title_color','md_boom_multi')) {
				  $typography   .= '#node-title span.node-'.$type.'-title a {color: #'.theme_get_setting('n'.$type.'title_color','md_boom_multi').';}'."\n";
				}
				
				if (theme_get_setting('n'.$type.'title_hover_color','md_boom_multi')) {
				  $typography   .= '#node-title span.node-'.$type.'-title a:hover {color: #'.theme_get_setting('n'.$type.'title_hover_color','md_boom_multi').';}'."\n";
				}
			}
		}
	}

    /*------------------------------------------- View block title --------------------------------------------*/
    if (theme_get_setting('typo_view_title_style','md_boom_multi') || theme_get_setting('typo_view_title_color','md_boom_multi')) {
        $typography   .= ".flx-intro-2 h2 {";
        if (theme_get_setting('typo_view_title_style','md_boom_multi')) {
            $typography   .= md_boom_multi_font_to_css(theme_get_setting('typo_view_title_style','md_boom_multi'));
        }

        if (theme_get_setting('typo_view_title_color')) {
            $typography   .= 'color: #'.theme_get_setting('typo_view_title_color','md_boom_multi').' !important;';
        }
        $typography   .= "}\n";

    }

    if (theme_get_setting('typo_view_title_enable','md_boom_multi') == 1) {
        $views = views_get_all_views($reset = FALSE);
        foreach ($views as $view_name => $view) {
            if(($view->disabled) !== true){
                $view_title = $view->name;

                if (theme_get_setting('typo_view_'.$view_title.'_title_style') || theme_get_setting('typo_view_'.$view_title.'_title_color','md_boom_multi')) {
                    $typography   .= ".flx-intro-2 h2.view-".$view_title."-title {";
                    if (theme_get_setting('typo_view_'.$view_title.'_title_style')) {
                        $typography   .= md_boom_multi_font_to_css(theme_get_setting('typo_view_'.$view_title.'_title_style','md_boom_multi'));
                    }

                    if (theme_get_setting('typo_view_'.$view_title.'_title_color','md_boom_multi')) {
                        $typography   .= 'color: #'.theme_get_setting('typo_view_'.$view_title.'_title_color','md_boom_multi').' !important;';
                    }
                    $typography   .= "}\n";
                }
            }

        }
    }
    /*---------------------------------------- Webform -------------------------------------*/
    if (theme_get_setting('typo_webformtitle_style','md_boom_multi') || theme_get_setting('typo_webformtitle_color','md_boom_multi')) {
        $typography   .= ".flx-map-form span.webform-title{";
        if (theme_get_setting('typo_webformtitle_style','md_boom_multi')) {
            $typography   .= md_boom_multi_font_to_css(theme_get_setting('typo_webformtitle_style','md_boom_multi'));
        }
        if (theme_get_setting('typo_webformtitle_color','md_boom_multi')) {
            $typography   .= 'color: #'.theme_get_setting('typo_webformtitle_color','md_boom_multi').' !important;';
        }
        $typography   .= "}\n";
    }
	$vars['typography'] = $typography;
    /*-------------------------- Remove sidebar from basic page -----------------------------*/
    if(in_array('node-type-page',$vars['classes_array'])){
        $vars['basic_page'] = 'basic-page';
        unset($vars['page']['sidebar']);
    }

/*-------------------------------- Search Block for 404 page ----------------------------------*/
    $search_block = module_invoke('search','block_view','search');
    $vars['search_block'] = $search_block;
	/*-------------------------------- Get theme settings --------------------------------- */
	$vars['header_code']   = theme_get_setting('header_code','md_boom_multi');
	$vars['footer_code']   = theme_get_setting('footer_code','md_boom_multi');
	if (theme_get_setting('custom_css','md_boom_multi')) {
		$vars['custom_css']  = theme_get_setting('custom_css','md_boom_multi');
	}
    $vars['theme_setting_css'] = $css;
	drupal_add_css(path_to_theme() . '/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
}

function md_boom_multi_font_to_css($font) {
	$font_arr = explode("|", $font);
	$css = "";
  if(count($font_arr) == 6) {
    if ($font_arr[0] != '0') {
      $css = ' '.$font_arr[5].' ';
    }
  }
	return $css;
}
function md_boom_multi_expand_font_weight($fw) {
				switch($fw) {
					case 'n1':
						$fontExpand = "font-style: normal; font-weight: 100;";
				  	break;
					case 'i1':
						$fontExpand = "font-style: italic; font-weight: 100;";
						break;
					case 'n2':
						$fontExpand = "font-style: normal; font-weight: 200;";
				  	break;
					case 'i2':
						$fontExpand = "font-style: italic; font-weight: 200;";
						break;
					case 'n3':
						$fontExpand = "font-style: normal; font-weight: 300;";
				  	break;
					case 'i3':
						$fontExpand = "font-style: italic; font-weight: 300;";
						break;
					case 'n4':
						$fontExpand = "font-style: normal; font-weight: normal;";
				  	break;
					case 'i4':
						$fontExpand = "font-style: italic; font-weight: normal";
						break;
					case 'n5':
						$fontExpand = "font-style: normal; font-weight: 500;";
				  	break;
					case 'i5':
						$fontExpand = "font-style: italic; font-weight: 500;";
						break;
					case 'n6':
						$fontExpand = "font-style: normal; font-weight: 600;";
				  	break;
					case 'i6':
						$fontExpand = "font-style: italic; font-weight: 600;";
						break;
					case 'n7':
						$fontExpand = "font-style: normal; font-weight: bold;";
				  	break;
					case 'i7':
						$fontExpand = "font-style: italic; font-weight: bold;";
						break;
					case 'n8':
						$fontExpand = "font-style: normal; font-weight: 800;";
				  	break;
					case 'i8':
						$fontExpand = "font-style: italic; font-weight: 800;";
						break;
					case 'n9':
						$fontExpand = "font-style: normal; font-weight: 800;";
				  	break;
					case 'i9':
						$fontExpand = "font-style: italic; font-weight: 800;";
						break;
					default:
						$fontExpand = "";
				}
				return $fontExpand;
			}

/**
 * Override or insert vars into the page template for HTML output.
 */
function md_boom_multi_process_html(&$vars) {
    unset($vars['css'][drupal_get_path('module','system').'/system.messages.css']);
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
	$classes = explode(' ', $vars['classes']);
  if ($node = menu_get_object()) {
    $node_type_class = drupal_html_class('node-type-' . $node->type);
    if (in_array($node_type_class, $classes)) {
      theme_get_setting('extra_page_classes','md_boom_multi') == 0 ? '' : $classes = str_replace($node_type_class, '', $classes);
      $classes = str_replace('node-type-', 'page-type-', $classes);
    }
  }
  $vars['classes'] = trim(implode(' ', $classes));
}
/**
 * Override or insert vars into the page template.
 */
function md_boom_multi_process_page(&$vars) {
    // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($vars);
  }
	$status = drupal_get_http_header("status");  
  if($status == "404 Not Found") {      
    $vars['theme_hook_suggestions'][] = 'page__404';
  }
	$vars['social_links'] = 0;
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $vars['hide_site_name']   = theme_get_setting('toggle_name','md_boom_multi') ? FALSE : TRUE;
  $vars['hide_site_slogan'] = theme_get_setting('toggle_slogan','md_boom_multi') ? FALSE : TRUE;
  if ($vars['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $vars['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($vars['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $vars['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($vars['title_suffix']['add_or_remove_shortcut']) && $vars['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $vars['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $vars['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $vars['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
	$vars['mainclass'] = '';
}

/**
 * Implements hook_preprocess_page().
 */
function md_boom_multi_preprocess_page(&$vars, $hook) {
    global $base_url;
    $vars['base_url'] = $base_url;
    $themepath = drupal_get_path('theme','md_boom_multi');
    if(theme_get_setting('toggle_main_menu','md_boom_multi') == 0) {
        unset($vars['page']['main_menu']);
    }

    /*------------------------------- Sites Logo -------------------------------*/
    if(theme_get_setting('logo_normal_path','md_boom_multi')){
        $logo_normal_path = theme_get_setting('logo_normal_path','md_boom_multi');
        $logo_normal_scheme = file_uri_scheme($logo_normal_path);
        if ($logo_normal_scheme == 'public') {
            $path = file_create_url($logo_normal_path);
            $vars['logo_normal_path'] = $path;
        }

    }
    if(theme_get_setting('logo_retina_path','md_boom_multi')){
        $logo_retina_path = theme_get_setting('logo_retina_path','md_boom_multi');

        $logo_retina_scheme = file_uri_scheme($logo_retina_path);
        if ($logo_retina_scheme == 'public') {
            $path = file_create_url($logo_retina_path);
            $vars['logo_retina_path'] = $path;
        }

    }
    /*------------------------------- Footer Logo -------------------------------*/
    if(theme_get_setting('footer_logo_path','md_boom_multi')){
        $footer_logo_path = theme_get_setting('footer_logo_path','md_boom_multi');
        $footer_logo_scheme = file_uri_scheme($footer_logo_path);
        if ($footer_logo_scheme == 'public') {
            $path = file_create_url($footer_logo_path);
            $vars['footer_logo_path'] = $path;
        }
    }
    if(theme_get_setting('footer_text','md_boom_multi')){
        $vars['footer_text'] = theme_get_setting('footer_text','md_boom_multi');
    }

    $themepath = drupal_get_path('theme', 'md_boom_multi');
    $vars['theme_path'] = $themepath;
    $views = view::load_views();
    $current_path = current_path();
    foreach($views as $key => $view){
        $view_display = $view->display;
        foreach($view_display as $key2 => $display){
            $display_options = $display->display_options;
            if(isset($display_options['path']) && $display_options['path'] == $current_path){
                $view_title = $view_display[$key2]->display_title;
                if(isset($view_display[$key2]->display_options['display_description'])) {
                    $view_description = $view_display[$key2]->display_options['display_description'];
                }
            }
        }
    }
    if(isset($view_title)){
        $vars['path_title'] = $view_title;
    }
    if(isset($view_description)){
        $vars['path_description'] = $view_description;
    }
    /*-------------------------------------- Twitter --------------------------------------*/
     $twitter_account = variable_get('twitter_username');
     $twitter_max = variable_get('twitter_num');
     if(isset($twitter_account) && isset($twitter_max)){
         drupal_add_js(array('twitter_account' => $twitter_account),'setting');
         drupal_add_js(array('twitter_num' => $twitter_max),'setting');
         drupal_add_js(drupal_get_path('module', 'md_boom_multi_module') . '/js/jquery.tweet.js',array(
             'scope' => 'footer',
         ));
         drupal_add_js(drupal_get_path('module', 'md_boom_multi_module') . '/js/script.js',array(
             'scope' => 'footer',
         ));
     }
     /*-------------------------------------- Twitter --------------------------------------*/
    $flickr_id = variable_get('flickr_id');
    $flickr_num = variable_get('flickr_num');
    if(isset($flickr_id) && isset($flickr_num)) {
        drupal_add_js(array('flickrID' => $flickr_id),'setting');
        drupal_add_js(array('flickrNum' => $flickr_num),'setting');
    }
}

function md_boom_multi_check_und($param) {
	if (isset($param['und'])) {
		return $param['und'][0];
	} else {
		return $param[0];
	}
}
function base_url(){
    global $base_url;
    return $base_url;
}
function theme_path() {
    $theme_path = drupal_get_path('theme','md_boom_multi');

    return $theme_path;
}
/**
 * Implements hook_preprocess_maintenance_page().
 */
function md_boom_multi_preprocess_maintenance_page(&$vars) {
    $theme_path = drupal_get_path('theme','md_boom_multi');
    drupal_add_js($theme_path.'/js/jquery-1.8.3.min.js');
    drupal_add_js($theme_path.'/js/bootstrap.js');
    drupal_add_js($theme_path.'/js/countdown.js');
    drupal_add_js($theme_path.'/js/jquery-ui-1.8.22.custom.min.js');
    drupal_add_js($theme_path.'/js/jquery.imagesloaded.min.js');
    drupal_add_js($theme_path.'/js/maintenance.js');
    drupal_add_js($theme_path.'/js/bigvideo.js');
    if(module_exists('fontello')) {
        drupal_add_css(drupal_get_path('module','fontello').'/css/fontello.fix.css');
        drupal_add_css('public://icon/fontello/fontello/css/fontello.css');
        drupal_add_css('public://icon/fontello/fontello/css/animation.css');
    }
    drupal_add_js('http://html5shim.googlecode.com/svn/trunk/html5.js', array('type' => 'external','group' => JS_THEME, 'browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE), 'preprocess' => FALSE));
    drupal_add_js('http://css3-mediaqueries-js.googlecode.com/svn/trunk/css3-mediaqueries.js', array('type' => 'external','group' => JS_THEME, 'browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE), 'preprocess' => FALSE));
    drupal_add_css($theme_path.'/css/bootstrap.css');
    drupal_add_css($theme_path.'/css/style.css');
    drupal_add_css($theme_path.'/css/bootstrap-responsive.css');
    drupal_add_css($theme_path.'/css/responsive.css');
    drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans:400,300,300italic,400italic,600,600italic,700,700italic,800italic,800', 'external');
    drupal_add_css('http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,200,300,300italic,200italic,400italic,600italic,600,700,700italic,900,900italic', 'external');
    drupal_add_css('http://fonts.googleapis.com/css?family=Pacifico', 'external');
    drupal_add_css($theme_path . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE), 'preprocess' => FALSE));
    /********************************** Skin ********************************/
    if (theme_get_setting('skins') != '0') {
        drupal_add_css($theme_path . '/css/colors/'.theme_get_setting('skins').'.css', array('group' => CSS_THEME));
    }
    if (!$vars['db_is_active']) {
        unset($vars['site_name']);
    }
        $current_dt = date('d F Y H:i:s',time());
        if(theme_get_setting('countdown_event_time','md_boom_multi')){
            $event_dt = theme_get_setting('countdown_event_time','md_boom_multi');
        } else {
            $event_dt = $current_dt;
        }
        drupal_add_js(array('current_dt'=>$current_dt),'setting');
        drupal_add_js(array('event_dt'=>$event_dt),'setting');

    // Always print the site name and slogan, but if they are toggled off, we'll
    // just hide them visually.
    $vars['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
    $vars['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
    if ($vars['hide_site_name']) {
        // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
        $vars['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
    }
    if ($vars['hide_site_slogan']) {
        // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
        $vars['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
    }

}
function strposa($haystack, $needle, $offset=0) {
    if(!is_array($needle)) $needle = array($needle);
    foreach($needle as $query) {
        if(strpos($haystack, $query, $offset) !== false) return true; // stop on first true result
    }
    return false;
}
function md_boom_multi_default_theme_options($layout, $header, $widget, $skin) {
    drupal_add_js(array('sitesLayout' => $layout),'setting');
    drupal_add_js(array('headerStyle' => $header),'setting');
    drupal_add_js(array('widgetStyle' => $widget),'setting');
    drupal_add_js(array('sitesSkin' => $skin),'setting');
}