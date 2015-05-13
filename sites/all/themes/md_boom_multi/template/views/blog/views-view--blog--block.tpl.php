<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
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
<div class="wrapper">
    <section class="flx-intro-2">
        <h2 class="view-<?php print $view_name?>-title"><?php if($display_title) { print $display_title;} else {print $view_human_name;}?></h2>
        <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php if(isset($display_description)) { print $display_description; } elseif($view_description) {print $view_description;}?></span></h5>
    </section><!--end:flx-intro-2-->
    <div class="row-fluid">
        <section class="flx-recent-post">
            <div class="list-carousel responsive" >
                <ul id="flx-slides-3">
                    <?php print $rows; ?>
                </ul><!--end:flx-slides-3-->
                <div class="clearfix"></div>
                <div class="carousel-nav clearfix">
                    <a id="prev-4" class="carousel-prev" href="#">&lt;</a>
                    <a id="next-4" class="carousel-next" href="#">&gt;</a>
                </div><!--end:carousel-nav-->
            </div><!--end:list-carousel-->
        </section><!--end:flx-recent-post-->
    </div><!--end:row-fluid-->
</div>
