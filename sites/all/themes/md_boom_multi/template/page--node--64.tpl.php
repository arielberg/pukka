<a class="menu-right" href="#mmenu_right">
    <span></span>
    <span></span>
    <span></span>
</a>
<?php if ($messages): ?>
    <div class="flx-full-width" id="messages">
        <?php print $messages; ?>
    </div> <!-- /#messages -->
<?php endif; ?>
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
            <img src="<?php print base_url().'/'.$theme_path;?>/images/icons/under-struction-icon.png" alt="" />
            <?php if(theme_get_setting('maintenance_message','md_boom_multi')):?>
                <div class="maintenance-message"><?php print theme_get_setting('maintenance_message','md_boom_multi');?></div>
            <?php endif;?>
        </div><!--end:under-title-->
        <div class="main-content">
            <h5>We're currently under maintenance, if all goes as planned we'll be back in:</h5>
            <ul id="countdown">
                <li>
                    <span class="days">00</span>
                    <p class="timeRefDays">days</p>
                </li>
                <li>
                    <span class="hours">00</span>
                    <p class="timeRefHours">hours</p>
                </li>
                <li>
                    <span class="minutes">00</span>
                    <p class="timeRefMinutes">minutes</p>
                </li>
                <li>
                    <span class="seconds">00</span>
                    <p class="timeRefSeconds">seconds</p>
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
                <?php if(theme_get_setting('toggle_logo','md_boom_multi') == 1) :?><a href=""><img src="<?php if(isset($footer_logo_path)){print $footer_logo_path;} else {print base_path().drupal_get_path('theme','md_boom_multi').'/placeholders/logo-footer.png';}?>" alt="" /></a><?php endif;?>
                <a href="abouts_us">About us</a>  /   <a href="contact">Contact us</a> <br />
                Boom - Drupal Theme © 2013 by <a href="http://megadrupal.com">megadrupal.com</a>
            </p>
        </footer>
    </div>
    <div id="bg-animate"> </div><!--end:bg-animate-->
</div><!--end:flx-wrapper-->
