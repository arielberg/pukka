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
?>
<div class="span2">
    <aside class="widget">
        <h5 class="widget-title"><?php if($display_title) { print $display_title;} else {print $view_human_name;}?></h5>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
                <?php print $title; ?>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($header): ?>
                <div class="view-header">
                    <?php print $header; ?>
                </div>
            <?php endif; ?>

            <?php if ($exposed): ?>
                <div class="view-filters">
                    <?php print $exposed; ?>
                </div>
            <?php endif; ?>

            <?php if ($attachment_before): ?>
                <div class="attachment attachment-before">
                    <?php print $attachment_before; ?>
                </div>
            <?php endif; ?>

            <ul>
                <li>+&nbsp;<a href="#">Support online</a></li>
                <li>+&nbsp;<a href="#">Forum support</a></li>
                <li>+&nbsp;<a href="#">Envato profile</a></li>
                <li>+&nbsp;<a href="#">Version update</a></li>
                <li>+&nbsp;<a href="#">History</a></li>
                <li>+&nbsp;<a href="#">Our story</a></li>
                <li>+&nbsp;<a href="#">Visit us</a></li>
                <li>+&nbsp;<a href="#">Our team</a></li>
            </ul>

            <?php if ($rows): ?>
                <?php //print $rows; ?>
            <?php elseif ($empty): ?>
                <?php //print $empty; ?>
            <?php endif; ?>

            <?php if ($pager): ?>
                <?php //print $pager; ?>
            <?php endif; ?>

            <?php if ($attachment_after): ?>
                <div class="attachment attachment-after">
                    <?php print $attachment_after; ?>
                </div>
            <?php endif; ?>

            <?php if ($more): ?>
                <?php print $more; ?>
            <?php endif; ?>

            <?php if ($footer): ?>
                <div class="view-footer">
                    <?php print $footer; ?>
                </div>
            <?php endif; ?>

            <?php if ($feed_icon): ?>
                <div class="feed-icon">
                    <?php print $feed_icon; ?>
                </div>
            <?php endif; ?>

        <?php /* class view */ ?>
    </aside><!--end:widget-->
</div><!--end:span4-->