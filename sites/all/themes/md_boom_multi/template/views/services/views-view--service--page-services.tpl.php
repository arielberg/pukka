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
<div class="wrapper">
    <div class="row-fluid">
    <section class="flx-intro-2">
        <h2 class="view-<?php print $view_name?>-title"><?php if($display_title) { print $display_title;} else {print $view_human_name;}?></h2>
        <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php if(isset($display_description)) { print $display_description; } elseif($view_description) {print $view_description;}?></span></h5>
    </section>
    <ul class="flx-services clearfix">
        <?php print $rows;?>
    </ul><!--end:flx-services-->
    </div>
</div>

