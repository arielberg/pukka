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
if(isset($view->display[$current_display]->display_options['display_description'])) {
    $display_description = $view->display[$current_display]->display_options['display_description'];
}
?>
<div class="wrapper">
    <section class="flx-intro-3">
        <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php if(isset($display_description)): print $display_description; endif?></span></h5>
        <br>
        <a href="/portfolio" class="flx-orange-button flx-button small"><?php print t('Our Portfolio'); ?></a>
    </section>
    <ul class="flx-services clearfix">
        <?php print $rows;?>
    </ul><!--end:flx-services-->
    <center>
        <div class="flx-shadow-1"></div>
    </center>
</div>

