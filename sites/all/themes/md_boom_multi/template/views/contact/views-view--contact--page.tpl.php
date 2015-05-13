<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<!-- Contact-->
<?php
$current_display = $view->current_display;
$display_title = $view->display[$current_display]->display_title;

if(isset($view->display[$current_display]->display_options['display_description'])) {
    $display_description = $view->display[$current_display]->display_options['display_description'];
}
?>
    <div class="wrapper container">
        <!-- <section class="flx-intro-2">
            <h2 class="view-<?php print $view_name?>-title"><?php print $view_human_name;?></h2>
            <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php print $view_description;?></span></h5>
        </section>-->
    </div><!--end:wrapper-->


    <div class="flx-gooogle-map">
        <div class="contact-info">
            <i class="icon-mail"></i>
            <h3><a href="#"><?php if(theme_get_setting('sites_email')): print theme_get_setting('sites_email'); endif;?></a></h3>
            <!--<?php if(theme_get_setting('sites_description')): print theme_get_setting('sites_description'); endif;?>
            <h5>כתובת:</h5>
            <p> <i class="icon-location"></i><?php if(theme_get_setting('address')): print theme_get_setting('address'); endif;?></p>
            <p> <i class="icon-mobile"></i><?php if(theme_get_setting('phone')): print theme_get_setting('phone'); endif;?></p>
            <p> <i class="icon-stethoscope"></i><?php if(theme_get_setting('fax')): print theme_get_setting('fax'); endif;?></p>-->
            <div class="text-contact">
                <h4>נשמח לעמוד לשרותך ולענות לשאלות</h4></br>
            בת חן נקטלוב ייעוץ מקצועי והדרכה 052-6587525</br>
מורן אלברט הזמנות והמכירות 074-7020075  </br>
ניתן להשיג את מוצרי החברות שאנו מייצגים <a href="/node/199">בחנויות הטבע, בתי המרקחת והרשתות האורגניות</a>.</div>
        </div><!--end:contact-info-->
      <!--  <div id="map_canvas"><iframe width="728" height="500" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.co.il/maps?f=q&amp;source=s_q&amp;hl=iw&amp;geocode=&amp;q=%D7%9E%D7%95%D7%A8%D7%99%D7%94+42,+%D7%A8%D7%9E%D7%AA+%D7%92%D7%9F&amp;aq=0&amp;oq=%D7%9E%D7%95%D7%A8%D7%99%D7%94+42&amp;sll=31.87169,34.991326&amp;sspn=0.01917,0.042272&amp;ie=UTF8&amp;hq=&amp;hnear=%D7%9E%D7%95%D7%A8%D7%99%D7%94+42,+%D7%A8%D7%9E%D7%AA+%D7%92%D7%9F&amp;t=m&amp;ll=32.077266,34.822369&amp;spn=0.034909,0.040255&amp;z=14&amp;iwloc=A&amp;output=embed&iwloc=near“" style="background: #ffffff;"></iframe></div>-->
    </div><!--end:flx-gooogle-map-->


    <div class="wrapper map-wrapper">
        <div class="flx-map-form">
            <?php if(count($view->result) > 0):?>
            <h3><span class="webform-title view-<?php print $view_name?>-title"><?php if($display_title) { print $display_title;} else {print $view_human_name;}?></span></h3>
            <p><span class="webform-description view-<?php print $view_name;?>-description"><?php if(isset($display_description)) { print $display_description; } elseif($view_description) {print $view_description;}?></span></p>
            <?php print $rows;?>
            <div id="response"></div>
            <?php endif;?>
        </div><!--end:flx-map-form-->
    </div>






