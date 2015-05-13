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
<div class="hidden-phone wrapper wrapper-in">
    <div class="row-fluid">
    </div>
</div>
<div class="pf-detail-box" id="pf-detail-box" style="display: none;">
</div><!--end:pf-detail-box-->
<div class="wrapper portfolio3-wrapper hidden-phone">
    <div class="row-fluid">
        <div class="wrapper in-wrapper">
            <div id="container" class="variable-sizes clickable clearfix">
                <?php print $rows;?>
            </div><!--end:container-->
        </div><!--end:wrapper-->
    </div><!--end:row-fluid-->
</div><!--end:wrapper-->

