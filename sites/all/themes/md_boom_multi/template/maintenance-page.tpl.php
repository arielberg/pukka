<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 *
 * @ingroup themeable
 */
?>

<?php
    $theme_path = drupal_get_path('theme','md_boom_multi');
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
<head>
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <?php print $scripts; ?>

    <!-- Favicons
        ================================================== -->
    <link rel="shortcut icon" href="<?php print base_path().$theme_path;?>/images/favicon.ico">
    <!-- Style
    ================================================== -->
    <link rel="stylesheet" href="<?php print base_path().$theme_path;?>/css/colors/default.css" type="text/css" id="colors" />
    <!-- Font
        ================================================== -->

</head>
<body class="<?php print $classes; ?> sub-page under-struction">
<?php if(theme_get_setting('choose_bg','md_boom_multi') == 3 || theme_get_setting('demo_theme_options','md_boom_multi') == 1):?>
    <section class="bg-wrapper">
        <div class="flexslider" id="bg-slider">
            <ul class="slides">
                <?php if(theme_get_setting('slider_bg_image','md_boom_multi')):?>
                    <?php $slider_bg_image = theme_get_setting('slider_bg_image','md_boom_multi');
                    foreach($slider_bg_image as $image):?>
                        <li><a href="#"><img src="<?php print file_create_url($image);?>" alt="" /></a></li>
                    <?php endforeach;?>
                <?php else:?>
                    <li><a href="#"><img src="<?php print base_path().$theme_path;?>/placeholders/01.jpg" alt="" /></a></li>
                    <li><a href="#"><img src="<?php print base_path().$theme_path;?>/placeholders/02.jpg" alt="" /></a></li>
                    <li><a href="#"><img src="<?php print base_path().$theme_path;?>/placeholders/03.jpg" alt="" /></a></li>
                    <li><a href="#"><img src="<?php print base_path().$theme_path;?>/placeholders/01.jpg" alt="" /></a></li>
                <?php endif;?>
            </ul>
        </div><!--end:bg-slider-->
    </section><!--end:bg-wrapper-->
<?php endif; ?>
<div class="flx-wrapper">
    <div class="wrapper-700 clearfix">
        <div class="under-title">
            <img src="<?php print base_path().$theme_path;?>/images/icons/under-struction-icon.png" alt="" />
            <?php if(theme_get_setting('maintenance_message','md_boom_multi')):?>
                <div class="maintenance-message"><?php print theme_get_setting('maintenance_message','md_boom_multi');?></div>
            <?php endif;?>
        </div><!--end:under-title-->
        <div class="main-content">
            <h5><?php if (!empty($content)): print $content; endif; ?></h5>
            <ul id="countdown">
                <li>
                    <span class="days">00</span>
                    <p class="timeRefDays"><?php print t('days');?></p>
                </li>
                <li>
                    <span class="hours">00</span>
                    <p class="timeRefHours"><?php print t('hours');?></p>
                </li>
                <li>
                    <span class="minutes">00</span>
                    <p class="timeRefMinutes"><?php print t('minutes');?></p>
                </li>
                <li>
                    <span class="seconds">00</span>
                    <p class="timeRefSeconds"><?php print t('seconds');?></p>
                </li>
            </ul><!--end:countdown-->
        </div><!--end:Main content-->
        <?php
        $twitter_acc = theme_get_setting('twitter_account');
        $skype_acc = theme_get_setting('skype_account');
        $facebook_acc = theme_get_setting('facebook_account');
        $youtube_channel = theme_get_setting('youtube_channel');
        $gplus = theme_get_setting('google+_account');
        $linkedin = theme_get_setting('dribbble_account');
        $pinterest = theme_get_setting('pinterest_account');
        $dribbble = theme_get_setting('linkedin_account');
        ?>
        <div class="socials">
            <?php if(isset($facebook_acc)):?><a href="<?php print $facebook_acc;?>" target="_blank"><i class="icon-facebook icon-2x"></i></a><?php endif;?>
            <?php if(isset($twitter_acc)):?><a href="<?php print $twitter_acc;?>" target="_blank"><i class="icon-twitter icon-2x"></i></a><?php endif;?>
            <?php if(isset($pinterest)):?><a href="<?php print $pinterest;?>" target="_blank"><i class="icon-pinterest-circled icon-2x"></i></a><?php endif;?>
            <?php if(isset($linkedin)):?><a href="<?php print $linkedin;?>" target="_blank"><i class="icon-linkedin icon-2x"></i></a><?php endif;?>
            <?php if(isset($gplus)):?><a href="<?php print $gplus;?>" target="_blank"><i class="icon-gplus icon-2x"></i></a><?php endif;?>
            <?php if(isset($skype_acc)):?><a href="<?php print $skype_acc;?>" target="_blank"><i class="icon-skype icon-2x"></i></a><?php endif;?>
            <?php if(isset($youtube_channel)):?><a href="<?php print $youtube_channel;?>" target="_blank"><i class="icon-youtube icon-2x"></i></a><?php endif;?>
            <?php if(isset($dribbble)):?><a href="<?php print $dribbble;?>" target="_blank"><i class="icon-dribbble icon-2x"></i></a><?php endif;?>
        </div>
        <footer>
            <p class="left">
                <a href="home"><img src="<?php if(isset($footer_logo_path)){print $footer_logo_path;} else {print base_path().$theme_path.'/placeholders/logo-footer.png';}?>" alt="" /></a>
                <a href="about_us">About us</a>  /   <a href="contact">Contact us</a> <br />
                Boom - Drupal Theme © 2013 by <a href="http://megadrupal.com">megadrupal.com</a>
            </p>
        </footer>
    </div>
    <div id="bg-animate"> </div><!--end:bg-animate-->
</div><!--end:flx-wrapper-->

</body>

</html>