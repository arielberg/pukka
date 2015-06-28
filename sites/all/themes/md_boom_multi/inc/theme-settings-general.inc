<?php

/**
 * @file
 * Theme settings general.
 */

function md_boom_multi_theme_settings_general(&$form, &$form_state) {
    $form['logo']['settings']['logo_normal'] = array(
        '#prefix'   => '<div id="logo-normal-settings">',
        '#title'    => t('Logo Normal Settings'),
        '#type'     => 'container',
    );
    $logo_normal_path = theme_get_setting('logo_normal_path','md_boom_multi');
    $form['logo']['settings']['logo_normal']['logo_normal_path'] = array(
        '#type' => 'textfield',
        '#title' => t('Path to custom logo normal'),
        '#description' => t('The file path you use as logo for normal display'),
        '#default_value' =>  $logo_normal_path,
    );
    $form['logo']['settings']['logo_normal']['logo_normal_upload'] = array(
        '#type'             => 'file',
    );
    if(!empty($logo_normal_path)){
        $form['logo']['settings']['logo_normal']['logo_preview'] = array(
            '#prefix'  => '<div class="logo-normal-preview"><div class="image-preview"><img src="'.$logo_normal_path.'"/></div><div class="rm-logo-normal"><input type="button" value="Remove" class="rm-logo-normal-button"/></div>',
            '#suffix'   => '</div></div>'
        );
    }
    $form['logo']['settings']['logo_retina'] = array(
        '#prefix'   => '<div id="logo-retina-settings">',
        '#title'    => t('Logo Retina Settings'),
        '#type'     => 'container',
    );
    $logo_retina_path = theme_get_setting('logo_retina_path','md_boom_multi');
    $form['logo']['settings']['logo_retina']['logo_retina_path'] = array(
        '#type' => 'textfield',
        '#title' => t('Path to custom logo retina'),
        '#description' => t('The file path you use as logo for retina display'),
        '#default_value' =>  $logo_retina_path,
    );
    $form['logo']['settings']['logo_retina']['logo_retina_upload'] = array(
        '#type'             => 'file',
    );
    if($logo_retina_path){
        $form['logo']['settings']['logo_retina']['logo_retina_preview'] = array(
            '#prefix'  => '<div class="logo-retina-preview"><div class="image-preview"><img src="'.$logo_retina_path.'"/></div><div class="rm-logo-retina"><input type="button" value="Remove" class="rm-logo-retina-button"/></div>',
            '#suffix'   => '</div></div>'
        );
    }

    $form['logo']['settings']['footer_logo'] = array(
        '#prefix'   => '<div id="footer-logo-settings">',
        '#title'        => t('Footer Logo Settings'),
        '#type'     => 'container',
    );
    $footer_logo_path = theme_get_setting('footer_logo_path','md_boom_multi');
    $form['logo']['settings']['footer_logo']['footer_logo_path'] = array(
        '#type' => 'textfield',
        '#title' => t('Path to custom footer logo'),
        '#description' => t('The file path you use as footer logo'),
        '#default_value' =>  $footer_logo_path,
    );
    $form['logo']['settings']['footer_logo']['footer_logo_upload'] = array(
        '#type'             => 'file',
    );
    if($footer_logo_path){
        $form['logo']['settings']['footer_logo']['footer_logo_preview'] = array(
            '#prefix'  => '<div class="footer-logo-preview"><div class="image-preview"><img src="'.$footer_logo_path.'"/></div><div class="rm-footer-logo"><input type="button" value="Remove" class="rm-footer-logo-button"/></div>',
            '#suffix'   => '</div></div>'
        );
    }
    $form['favicon']['#collapsible'] = FALSE;
    $form['favicon']['settings']['favicon_file'] = array(
        '#prefix'   => '<div id="favicon-settings">',
        '#title'    => t('Favicon Settings'),
        '#type'     => 'container',
    );
    $favicon_path = theme_get_setting('fvicon_path','md_boom_multi');
    $form['favicon']['settings']['favicon_file']['fvicon_path'] = array(
        '#type' => 'textfield',
        '#title' => t('Path to custom favicon'),
        '#description' => t('The file path you use as your site favicon'),
        '#default_value' =>  $favicon_path,
    );

    $form['favicon']['settings']['favicon_file']['fvicon_upload'] = array(
        '#type'             => 'file',
    );

    if(!empty($favicon_path)){
        $form['favicon']['settings']['favicon_file']['favicon_preview'] = array(
            '#prefix'  => '<div id="favicon-preview"><div class="image-preview"><img src="'.$favicon_path.'"/></div><div class="rm-favicon"><input type="button" value="Remove" class="rm-favicon-button"/></div>',
            '#suffix'   => '</div></div>'
        );
    }
	$form['md_boom_multi_settings']['general'] = array(
		'#type' 					=> 'fieldset',
		'#weight' 				=> -5,
		'#prefix'  				=> '<div id="md-general-settings" class="md-tabcontent clearfix">',
		'#suffix'        	=> '</div><!-- / #md-general-settings -->',
	);

	$form['md_boom_multi_settings']['general']['general_htmllist'] = array(
		'#markup' 				=> '<div class="md-listleft">
				<ul>
					<li><a href="#general-settings">Settings</a></li>
					<li><a href="#favicon-webclip">Logo, Favicon &amp; Webclip</a></li>
					<li><a href="#social-media">Social Media Promotion</a></li>
					<li><a href="#custom-font">Custom Font</a></li>
				</ul>
			</div><div class="md-listcontent">',
		'#weight' 				=> -15,
	);
	$form['md_boom_multi_settings']['general']['general_htmllistclose'] = array(
		'#markup' 				=> '</div><!-- /.md-listleft -->',
		'#weight' 				=> 15,
	);
	/* 1.	General Settings
	--------------------------------------------------------------------------*/
	$form['md_boom_multi_settings']['general']['general_settings'] = array(
		'#type' 					=> 'fieldset',
		'#weight' 				=> -5,
		'#prefix'  				=> '<div id="general-settings" class="md-tabcontent clearfix">',
		'#suffix'        => '</div><!-- / #general-settings -->',
	);

		$form['md_boom_multi_settings']['general']['general_settings']['css3_textarea'] = array(
			'#type' => 'checkbox',
			'#title' =>  t('Use the "resize" CSS3 property'),
			'#description'   => t('Check this if you wish to replace Drupal\'s textarea by resize CSS3 property'),
			'#default_value' => theme_get_setting('css3_textarea','md_boom_multi'),
		);

	/* 2.	Logo, Favicon & Webclip
	--------------------------------------------------------------------------*/

	$form['md_boom_multi_settings']['general']['favicon_webclip'] = array(
		'#type' 					=> 'fieldset',
		'#weight' 				=> -5,
		'#prefix'  				=> '<div id="favicon-webclip" class="md-tabcontent clearfix">',
		'#suffix'        => '</div><!-- / #favicon-webclip -->',
	);
	
		$webclip_path = theme_get_setting('webclip_path','md_boom_multi');
		$form['md_boom_multi_settings']['general']['favicon_webclip']['webclip_path'] = array(
			'#type' 					=> 'textfield',
			'#title'					=> t('Path to custom Webclip'),
			'#description'   	=> t('A webclip is the icon that appears on a user\'s iPhone, iPad or Android device if they save your website to their home screen.<br />Upload an image at least <em>114x114px</em>'),
			'#default_value' 	=>  $webclip_path,
			'#prefix'					=> '<h3>Web Clip Settings</h3>',
		);
		
		$form['md_boom_multi_settings']['general']['favicon_webclip']['webclip_upload'] = array(
			'#type' => 'file',
		);
		
		$form['md_boom_multi_settings']['general']['favicon_webclip']['webclip_precomp'] = array(
	    '#type' => 'checkbox',
	    '#title' => t('Use the default precomposed iOS touch icon.'),
	    '#default_value' => theme_get_setting('default_touch_icon_precomp','md_boom_multi'),
	    '#tree' => FALSE,
	    '#description' => t('Using a &apos;precomposed&apos; touch icon allows more control over the icon&apos;s appearance. iOS devices do not apply any special effects to these icons.'),
	  );
	
	/* 3.	Social Media Promotion
	--------------------------------------------------------------------------*/
	$form['md_boom_multi_settings']['general']['social_media'] = array(
		'#type' 					=> 'fieldset',
		'#weight' 				=> -5,
		'#prefix'  				=> '<div id="social-media" class="md-tabcontent clearfix">',
		'#suffix'        	=> '</div><!-- / #social-media -->',
	);
	
		// Get tweet
		$form['md_boom_multi_settings']['general']['social_media']['twitter_account'] = array(
			'#type'         	=> 'textfield',
			'#title'					=> 'Twitter page url',
			'#description'   	=> t('Enter your twitter page url here, e.g http://twitter.com/yourusername
			                          </br>Configure twitter block '.l('here','admin/structure/block/manage/md_boom_multi/twitter/configure').'
			                        '),
			'#default_value' 	=> theme_get_setting('twitter_account','md_boom_multi') ? theme_get_setting('twitter_account','md_boom_multi') : '',
			'#prefix'         => '<h3>'.t('Twitter').'</h3>',
		);

        $form['md_boom_multi_settings']['general']['social_media']['facebook_account'] = array(
            '#type'         	=> 'textfield',
            '#title'					=> 'Facebook page url',
            '#description'   	=> t('Enter your facebook user name here, e.g http://facebook.com/yourusername'),
            '#default_value' 	=> theme_get_setting('facebook_account','md_boom_multi') ? theme_get_setting('facebook_account','md_boom_multi') : '',
            '#prefix'         => '<h3>'.t('Facebook').'</h3>',
        );


        $form['md_boom_multi_settings']['general']['social_media']['skype_account'] = array(
            '#type'         	=> 'textfield',
            '#title'					=> 'Skype page url',
            '#description'   	=> t('Enter your skype page url here, e.g: http://skype.com/yourusername'),
            '#default_value' 	=> theme_get_setting('skype_account','md_boom_multi') ? theme_get_setting('skype_account','md_boom_multi') : '',
            '#prefix'         => '<h3>'.t('Skype').'</h3>',
        );
        $form['md_boom_multi_settings']['general']['social_media']['youtube_channel'] = array(
            '#type'         	=> 'textfield',
            '#title'					=> 'Youtube channel url',
            '#description'   	=> t('Enter your Youtube channel url here, e.g: http://youtube.com/youryoutubechannel'),
            '#default_value' 	=> theme_get_setting('youtube_channel','md_boom_multi') ? theme_get_setting('youtube_channel','md_boom_multi') : '',
            '#prefix'         => '<h3>'.t('Youtube').'</h3>',
        );
        $form['md_boom_multi_settings']['general']['social_media']['google+_account'] = array(
            '#type'         	=> 'textfield',
            '#title'					=> 'Google+ page url',
            '#description'   	=> t('Enter your google+ page url here, e.g: http://plus.google.com/yourusername'),
            '#default_value' 	=> theme_get_setting('google+_account','md_boom_multi') ? theme_get_setting('google+_account','md_boom_multi') : '',
            '#prefix'         => '<h3>'.t('Google').'</h3>',
        );

        $form['md_boom_multi_settings']['general']['social_media']['dribbble_account'] = array(
            '#type'         	=> 'textfield',
            '#title'					=> 'Dribbble page url',
            '#description'   	=> t('Enter your dribbble page url here, e.g http://dribbble.com/yourusername'),
            '#default_value' 	=> theme_get_setting('dribbble_account','md_boom_multi') ? theme_get_setting('dribbble_account','md_boom_multi') : '',
            '#prefix'         => '<h3>'.t('Dribbble').'</h3>',
        );
        $form['md_boom_multi_settings']['general']['social_media']['pinterest_account'] = array(
            '#type'         	=> 'textfield',
            '#title'					=> 'Pinterest page url',
            '#description'   	=> t('Enter your pinterest page url here, e.g http://pinterest.com/yourusername'),
            '#default_value' 	=> theme_get_setting('pinterest_account','md_boom_multi') ? theme_get_setting('pinterest_account','md_boom_multi') : '',
            '#prefix'         => '<h3>'.t('Pinterest').'</h3>',
        );
        $form['md_boom_multi_settings']['general']['social_media']['linkedin_account'] = array(
            '#type'         	=> 'textfield',
            '#title'					=> 'LinkedIn page url',
            '#description'   	=> t('Enter your LinkedIn page url here, e.g http://linkedin.com/yourusername'),
            '#default_value' 	=> theme_get_setting('linkedin_account','md_boom_multi') ? theme_get_setting('linkedin_account','md_boom_multi') : '',
            '#prefix'         => '<h3>'.t('LinkedIn').'</h3>',
        );

	/* 4.	Custom font
	--------------------------------------------------------------------------*/
	$form['md_boom_multi_settings']['general']['custom_font'] = array(
		'#type' 					=> 'fieldset',
		'#weight' 				=> -5,
		'#prefix'  				=> '<div id="custom-font" class="md-tabcontent clearfix">',
		'#suffix'        => '</div><!-- / #custom-font -->',
	);

		$form['md_boom_multi_settings']['general']['custom_font']['googlewebfonts'] = array(
			'#type' 					=> 'textarea',
			'#title'         => t('@import'),
			'#resizable' => FALSE,
			'#rows' => 1,
			'#description' => t("For example: http://fonts.googleapis.com/css?family=Kavoon|Hanalei+Fill"),
			'#default_value' 	=>  theme_get_setting('googlewebfonts','md_boom_multi'),
			'#prefix'					=> '<h3>Google Web Fonts</h3>
		<ul class="steps">
			<li>Go to <a href="http://www.google.com/webfonts" target="_blank">www.google.com/webfonts</a>, choose your fonts and add to collection</li>
      <li>Click &quot;Use&quot; in the bottom bar after choose fonts</li>
      <li>Find &quot;Integrate the fonts into your CSS&quot;, copy all code from that field and paste it below to activate.</li>
		</ul>',
		);
		
		$form['md_boom_multi_settings']['general']['custom_font']['typekit_id'] = array(
			'#type' 					=> 'textfield',
			'#title'         => t('Typekit'),
			'#description'   	=> t('<strong>* Note:</strong> Your kit must contain fonts and be published before entering your Typekit ID below. Check out <a href="http://help.typekit.com/customer/portal/articles/6780-adding-fonts-to-your-site" target="_blank">this article at Typekit\'s Help Center</a> for detailed information on how to add fonts to your kit. (Make sure you skip the part about adding CSS selectors, and remember to republish your kit after making any changes.)'),
			'#default_value' 	=>  theme_get_setting('typekit_id','md_boom_multi'),
			'#prefix'					=> '<h3>Enter Your Typekit ID</h3>
		<ul class="steps">
			<li>Go to <a href="http://typekit.com/" target="_blank">www.typekit.com</a> and Log in to your account</li>
			<li>In the top bar of the Typekit website, click the green &quot;Launch Kit Editor&quot; button.</li>
			<li>In the top bar of the popup that appears, click the &quot;Kit Settings&quot; link and paste your domain. Once you\'ve done this, click &quot;Save Settings.&quot;</li>
			<li>In the same top bar of the popup, click the &quot;embed code&quot; link.</li>
			<li>In the overlay that appears, there is a line at the   bottom that says, &quot;If you are using a plugin or service that asks for a   Typekit ID, use this: ____.&quot; This is your Typekit ID. Paste it below to activate.</li>
		</ul>',
		);
		
		
	/* Hidden input
	--------------------------------------------------------------------------*/
	$form['md_boom_multi_settings']['general']['savedcolor1'] = array(
		'#type'         	=> 'hidden',
		'#default_value' 	=> theme_get_setting('savedcolor1','md_boom_multi'),
		'#attributes' => array(
				'id' => 'savedcolor1',
			),
	);
}