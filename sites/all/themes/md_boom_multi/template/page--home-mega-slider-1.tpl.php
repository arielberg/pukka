
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

<?php print render($title_prefix); ?>
<?php print render($title_suffix); ?>
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
    <header id="flx-header" class="<?php if(theme_get_setting('header_style','md_boom_multi') == 'header2'){print 'head-s2';} elseif(theme_get_setting('header_style','md_boom_multi') == 'header3'){print 'head-s3';} elseif(theme_get_setting('header_style','md_boom_multi') == 'header4') {print 'head-s4';}?>  clearfix">
        <?php if(theme_get_setting('header_style','md_boom_multi') == 'header1' || theme_get_setting('header_style','md_boom_multi') == 'header4'):?>
        <div class="wrapper clearfix">
            <?php endif;?>
            <?php if(theme_get_setting('header_style','md_boom_multi') == 'header2' || theme_get_setting('header_style','md_boom_multi') == 'header3'):?>
            <div class="wrapper tophead clearfix">
                <?php endif;?>
                <div id="flx-logo">
                    <?php if(theme_get_setting('toggle_logo','md_boom_multi') == 1) :?><a href="<?php print base_url();?>"><img src="<?php if(isset($logo_normal_path)){print $logo_normal_path;} else {print base_path().drupal_get_path('theme','md_boom_multi').'/placeholders/sub-logo.png';}?>" alt="" /></a><?php endif;?>
                </div><!--end:flx-logo-->
                <?php if(theme_get_setting('header_style','md_boom_multi') == 'header2' || theme_get_setting('header_style','md_boom_multi') == 'header3'):?>
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
                <?php endif;?>
                <?php if(theme_get_setting('header_style','md_boom_multi') == 'header2' || theme_get_setting('header_style','md_boom_multi') == 'header3'):?>
            </div>
        <?php endif;?>
            <nav id="main-nav">
                <?php if(theme_get_setting('header_style','md_boom_multi') == 'header2' || theme_get_setting('header_style','md_boom_multi') == 'header3'):?>
                <div class="wrapper clearfix">
                    <?php endif;?>
                    <?php print render($page['main_menu']);?>
                    <?php if($page['search']):?>
                        <?php if(theme_get_setting('header_style') == 'header2' || theme_get_setting('header_style') == 'header3'):?>
                            <?php print render($page['search']);?>
                        <?php endif; ?>
                    <?php endif; ?>
                    <?php if(theme_get_setting('header_style','md_boom_multi') == 'header2' || theme_get_setting('header_style','md_boom_multi') == 'header3'):?>
                </div>
            <?php endif;?>
            </nav><!--end:main-nav-->
            <?php if(theme_get_setting('header_style','md_boom_multi') == 'header1' || theme_get_setting('header_style','md_boom_multi') == 'header4'):?>
        </div>
    <?php endif;?>

    </header><!--end:flx-header-->

    <section class="mega-slider-1-wrapper">
        <?php if($page['mega_slider_1']):?>
        <?php print render($page['mega_slider_1']);?>
        <?php endif;?>
    </section><!--end:mega-slider-2-wrapper-->
    <?php if ($messages): ?>
        <div class="flx-full-width" id="messages">
            <?php print $messages; ?>
        </div> <!-- /#messages -->
    <?php endif; ?>
    <?php if($page['sidebar']):?>
    <div class="wrapper">
        <div class="main-content clearfix">
            <?php endif;?>
            <div class="row-fluid">
                <?php if(theme_get_setting('sidebar_position') == 'right'):?>
                    <?php if($page['content']):?>
                        <div class="<?php if($page['sidebar']){print 'span9';} else {print 'span12';}?>">
                            <?php print render($page['content']);?>
                        </div>
                    <?php endif;?>
                    <?php if($page['sidebar'] && theme_get_setting('sidebar_position') != 'no'):?>
                        <div class="span3" id="<?php print theme_get_setting('sidebar_position');?>-sidebar">
                            <?php if($page['search']):?>
                                <div class="search-sidebar"><?php print render($page['search']);?></div>
                            <?php endif;?>
                            <?php print render($page['sidebar']);?>
                        </div>
                    <?php endif;?>
                <?php endif;?>
                <?php if(theme_get_setting('sidebar_position') == 'left'):?>
                    <?php if($page['sidebar'] && theme_get_setting('sidebar_position') != 'no'):?>
                        <div class="span3" id="<?php print theme_get_setting('sidebar_position');?>-sidebar">
                            <?php if($page['search']):?>
                                <div class="search-sidebar"><?php print render($page['search']);?></div>
                            <?php endif;?>
                            <?php print render($page['sidebar']);?>
                        </div>
                    <?php endif;?>
                    <?php if($page['content']):?>
                        <?php if($page['sidebar']):?>
                        <?php endif;?>
                        <div class="<?php if($page['sidebar']){print 'span9';} else {print 'span12';}?>">
                            <?php print render($page['content']);?>
                        </div>
                        <?php if($page['sidebar']):?>
                        <?php endif;?>
                    <?php endif;?>
                <?php endif;?>
                <?php if(theme_get_setting('sidebar_position') == 'no'):?>
                    <div class="span12">
                        <?php print render($page['content']);?>
                    </div>
                <?php endif;?>
            </div>
            <?php if($page['sidebar']):?>
        </div>
    </div>
    <?php endif;?>
    <div class="page-bottom">
        <div class="wrapper">
            <div class="row-fluid">
                <center>
                    <ul class="social-links clearfix">
                        <?php if($twitter_acc != null):?><li class="flx-twitter-icon"><a href="<?php print $twitter_acc;?>" target="_blank"></a></li><?php endif;?>
                        <?php if($facebook_acc != null):?><li class="flx-facebook-icon"><a href="<?php print $facebook_acc;?>" target="_blank"></a></li><?php endif;?>
                        <?php if($skype_acc != null):?><li class="flx-skype-icon"><a href="<?php print $skype_acc;?>" target="_blank"></a></li><?php endif;?>
                        <?php if($youtube_channel != null):?><li class="flx-youtube-icon"><a href="<?php print $youtube_channel;?>" target="_blank"></a></li><?php endif;?>
                        <?php if($gplus != null):?><li class="flx-gplus-icon"><a href="<?php print $gplus;?>" target="_blank"></a></li><?php endif;?>
                        <?php if($dribbble != null):?><li class="flx-dribbble-icon"><a href="<?php print $dribbble;?>" target="_blank"></a></li><?php endif;?>
                        <?php if($pinterest != null):?><li class="flx-pinterest-icon"><a href="<?php print $pinterest;?>" target="_blank"></a></li><?php endif;?>
                        <?php if($linkedin != null):?><li class="flx-linkedin-icon"><a href="<?php print $linkedin;?>" target="_blank"></a></li><?php endif;?>
                    </ul>
                </center>
                <center>
                    <?php
                    $footer_menu = menu_navigation_links('menu-footer-menu'); //menu-footer-menu : Machine name of footer menu
                    print theme('links', array('links' => $footer_menu, 'attributes' => array('class' => 'footer-menu')));
                    ?>
                </center>
            </div><!--end:row-fluid-->
        </div><!--end:wrapper-->
    </div><!--end:page-bottom-->
    <footer id="flx-footer">
        <div id="footer-top">
            <div class="wrapper">
                <div class="row-fluid">
                    <?php print render($page['footer_col_1']);?>
                    <?php print render($page['footer_col_2']);?>
                    <?php print render($page['footer_col_3']);?>
                    <?php print render($page['footer_col_4']);?>
                    <div class="clear"></div>
                </div><!--end:row-fluid-->
            </div><!--end:wrapper-->
        </div><!--end:footer-top-->
        <div id="footer-bottom">
            <div class="wrapper">
                <div id="footer-logo">
                    <?php if(theme_get_setting('toggle_logo','md_boom_multi') == 1) :?><a href=""><img src="<?php if(isset($footer_logo_path)){print $footer_logo_path;} else {print base_path().drupal_get_path('theme','md_boom_multi').'/placeholders/logo-footer.png';}?>" alt="" /></a><?php endif;?>
                </div><!--end:footer-logo-->
                <center>
                    <?php if(isset($footer_text)):print $footer_text;endif;?>
                </center>
            </div><!--end:wrapper-->
        </div><!--end:footer-bottom-->
    </footer><!--end:flx-footer-->
</div><!--end:flx-wrapper-->
<p id="back-top"> <a href="#top">TOP</a> </p> <!--end:backtop-->

