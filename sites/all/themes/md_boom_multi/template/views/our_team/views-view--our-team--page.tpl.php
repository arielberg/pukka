<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php
$current_display = $view->current_display;
$display_title = $view->display[$current_display]->display_title;
if(isset($view->display[$current_display]->display_options['display_description'])) {
    $display_description = $view->display[$current_display]->display_options['display_description'];
}
?>
<!-- Meet our team-->
<div class="wrapper">
    <div class="row-fluid">
        <section class="flx-intro-2">
            <h2 class="view-<?php print $view_name?>-title"><?php if($display_title) { print $display_title;} else {print $view_human_name;}?></h2>
            <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php if(isset($display_description)) { print $display_description; } elseif($view_description) {print $view_description;}?></span></h5>
        </section><!--end:flx-intro-2-->

        <section class="flx-meet-team">
            <div class="list-carousel responsive" >
                <ul id="flx-team-slides">
                    <?php print $rows;?>
                </ul><!--end:flx-team-slides-->
                <div class="clearfix"></div>
                <div class="carousel-nav-2 clearfix">
                    <a id="prev-2" class="carousel-prev-2" href="#"><i class="icon-angle-left icon-2x"></i></a>
                    <a id="next-2" class="carousel-next-2" href="#"><i class="icon-angle-right icon-2x"></i></a>
                    <img src="<?php print base_url().'/'.drupal_get_path('theme','md_boom_multi');?>/images/icons/team-icon.png" alt="" />
                </div><!--end:carousel-nav-->
            </div><!--end:list-carousel-->
        </section><!--end:flx-meet-team-->
    </div>
</div>