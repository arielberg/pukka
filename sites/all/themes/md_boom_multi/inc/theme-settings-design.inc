<?php

/**
 * @file
 * Theme settings .
 */

function md_boom_multi_theme_settings_design(&$form, &$form_state) {
	$form['md_boom_multi_settings']['design'] = array(
		'#type' 					=> 'fieldset',
		'#weight' 				=> 0,
		'#prefix'  				=> '<div id="md-design" class="md-tabcontent clearfix">',
		'#suffix'        => '</div><!-- / #md-design -->',
	);
	
	$form['md_boom_multi_settings']['design']['design_htmllist'] = array(
		'#markup' 				=> '<div class="md-listleft">
				<ul>
				    <li><a href="#ds-skin">Skins</a></li>
				    <li><a href="#ds-header">Header</a></li>
				    <li><a href="#ds-widget">Widget</a></li>
				</ul>
			</div><div class="md-listcontent">',
		'#weight' 				=> -15,
	);
	$form['md_boom_multi_settings']['design']['design_htmllistclose'] = array(
		'#markup' 				=> '</div><!-- /.md-listleft -->',
		'#weight' 				=> 15,
	);
    $form['md_boom_multi_settings']['design']['design_skins'] = array(
        '#type'             => 'fieldset',
        '#prefix'  				=> '<div id="ds-skin" class="md-tabcontent clearfix">',
        '#suffix'        => '</div><!-- / #ds-block -->',
    );
    // Site skins
    $form['md_boom_multi_settings']['design']['design_skins']['skins'] = array(
        '#type'          => 'select',
        '#title'         => t('Choose skin'),
        '#default_value' => theme_get_setting('skins','md_boom_multi'),
        '#options'       => array(
            'default'   => t('Default (Orange)'),
            'blue' 	    => t('Blue'),
            'brown' 	=> t('Brown'),
            'gray' 	    => t('Gray'),
            'green' 	=> t('Green'),
            'pink' 	    => t('Pink'),
            'red' 	    => t('Red'),
            'violet'    => t('Violet')
        ),
    );
    /*------------------------------- Header ---------------------------------*/
    $form['md_boom_multi_settings']['design']['design_header'] = array(
        '#type'             => 'fieldset',
        '#prefix'  				=> '<div id="ds-header" class="md-tabcontent clearfix">',
        '#suffix'        => '</div><!-- / #ds-block -->',
    );
    $form['md_boom_multi_settings']['design']['design_header']['header_style'] = array(
        '#type'         => 'select',
        '#title'        => t('Choose Header Style'),
        '#default_value'    => theme_get_setting('header_style','md_boom_multi') ? theme_get_setting('header_style','md_boom_multi') : t('header1'),
        '#options'      => array(
            'header1'   => t('Header Style 1'),
            'header2'   => t('Header Style 2'),
            'header3'   => t('Header Style 3'),
            'header4'   => t('Header Style 4'),
        )
    );

    /*--------------------------------- Widget ---------------------------------*/
    $form['md_boom_multi_settings']['design']['design_widget'] = array(
        '#type'             => 'fieldset',
        '#prefix'  				=> '<div id="ds-widget" class="md-tabcontent clearfix">',
        '#suffix'        => '</div><!-- / #ds-block -->',
    );
    $form['md_boom_multi_settings']['design']['design_widget']['widget_style'] = array(
        '#type'         => 'select',
        '#title'        => t('Choose Widget Style'),
        '#default_value'    => theme_get_setting('widget_style','md_boom_multi') ? theme_get_setting('widget_style','md_boom_multi') : t('w-style1'),
        '#options'      => array(
            'w-style1'   => t('Widget 1'),
            'w-style2'   => t('Widget 2'),
            'w-style3'   => t('Widget 3'),
            'w-style4'   => t('Widget 4'),
            'w-style5'   => t('Widget 5'),
        )
    );
}
