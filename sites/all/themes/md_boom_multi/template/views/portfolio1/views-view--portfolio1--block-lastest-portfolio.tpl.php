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

<div class="hidden-phone home-portfolio <?php print $classes; ?>">

    <div class="pf-detail-box" id="pf-detail-box" style="display: none;">
    </div><!--end:pf-detail-box-->
    <div class="wrapper">
        <div class="row-fluid">

            <div id="container" class="variable-sizes clickable clearfix">
                <?php print $rows;?>
            </div><!--end:container-->
            <?php if ($pager): ?>
                <?php print $pager; ?>
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
                    <?php print $footer; ?>
            <?php endif; ?>

            <?php if ($feed_icon): ?>
                <div class="feed-icon">
                    <?php print $feed_icon; ?>
                </div>
            <?php endif; ?>
        </div>
        </div><!--end:wrapper-->
</div>



