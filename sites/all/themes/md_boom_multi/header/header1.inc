<?php
function header1(){
    global $base_url;
    $themepath = drupal_get_path('theme','md_boom_multi');
    $main_menu = module_invoke('superfish','block_view','1');

    $mobile_theme_option = '<a class="m-open-close-button"></a><!--open-close-button-->
        <div class="theme-opt-wrapper">
            <p>Colors - <i style="font-size:11px;"> * You can use Unlimited Colors </i> </p>
            <ul class="choose-color">
                <li><a href="#" class="color default">&nbsp;</a></li>
                <li><a href="#" class="color blue">&nbsp;</a></li>
                <li><a href="#" class="color pink">&nbsp;</a></li>
                <li><a href="#" class="color green">&nbsp;</a></li>
                <li><a href="#" class="color red">&nbsp;</a></li>
                <li><a href="#" class="color gray">&nbsp;</a></li>
                <li><a href="#" class="color brown">&nbsp;</a></li>
                <li><a href="#" class="color violet">&nbsp;</a></li>
            </ul>
            <p class="flx-select-layout">Layout Style</p>
            <p class="flx-select-layout">
                <input type="radio" id="flx-select-layout-wide" name="flx-select-layout-choice" value="wide"';
    if(theme_get_setting('sites_layout','md_boom_multi') == 'wide'){$mobile_theme_option .= ' checked = "checked" ';}
    $mobile_theme_option .= ' onClick="return md_boom_multi_layout_CHANGE(jQuery(this).val());">
<label for="flx-select-layout-wide">Wide</label>
<input type="radio" id="flx-select-layout-boxed" name="flx-select-layout-choice" value="boxed" ';
    if(theme_get_setting('sites_layout','md_boom_multi') == 'boxed'){$mobile_theme_option .= ' checked = "checked" ';}
    $mobile_theme_option .= ' onClick="return md_boom_multi_layout_CHANGE(jQuery(this).val());">
<label for="flx-select-layout-boxed">Boxed</label>
</p>
<div class="flx-select-pattern" ';
    if(theme_get_setting('sites_layout','md_boom_multi') == 'wide'){$mobile_theme_option .= ' style="display: none;" ';}
    $mobile_theme_option .= '>
    <p>Backgrounds</p>
    <ul class="choose-pattern">';
    $mobile_theme_option .= '<li><a class="active remove-video-bg" href="#" style="background: url(\''.$base_url.'/'.$themepath.'/images/background/patterns/1.png\');">&nbsp;</a></li>';
    for($i=2;$i<=18;$i++) {
        $mobile_theme_option .= '<li><a class="remove-video-bg" href="#" style="background: url(\''.$base_url.'/'.$themepath.'/images/background/patterns/'.$i.'.png\');">&nbsp;</a></li>';
    }
    $mobile_theme_option .= '</ul>
                        </div>
                        <p>Widget Style</p>
        <select name="md-boom-multi-widget-style" id="md-boom-multi-widget-style">
            <option value="w-style1">Style 1</option>
            <option value="w-style2">Style 2</option>
            <option value="w-style3">Style 3</option>
            <option value="w-style4">Style 4</option>
            <option value="w-style5">Style 5</option>
        </select>
    <p>Header Style</p>
        <select name="md-boom-multi-header-style" onChange="md_boom_multi_header_style_ONCHANGE(jQuery(this));">
            <option value="header1">Style 1</option>
            <option value="header2">Style 2</option>
            <option value="header3">Style 3</option>
            <option value="header4">Style 4</option>
        </select>
    <a href="#" class="btn reset" onClick="return md_boom_multi_theme_option_reset_CLICK();">Reset</a>
    </div><!--end:theme-opt-wrapper-->
                    <a href="#" class="open-close-button"> </a><!--open-close-button-->';
    $output = '
<header id="flx-header">
    <div class="wrapper clearfix">
        <div id="flx-logo">
            <a href="home"><img src="sites/all/themes/md_boom_multi/placeholders/sub-logo.png" alt="" /></a>
        </div><!--end:flx-logo-->
        <nav id="main-nav">
            '.render($main_menu['content']).'
        </nav><!--end:main-nav-->
    </div><!--end:wrapper-->
    <div id="mobile-menu-bar">
        <div class="flx-mobile-menu">
	   </div><!--end:flx-mobile-menu-->
        <div id="m-theme-option">
            '.$mobile_theme_option.'
        </div><!--end:m-theme-option -->
        <div class="clear"></div>
    </div><!--end:mobile-menu-bar-->
</header><!--end:flx-header-->';
    return $output;
}


