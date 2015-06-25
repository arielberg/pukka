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
    </div>
</div>
<div class="pf-detail-box" id="pf-detail-box" style="display: none;">
</div><!--end:pf-detail-box-->
<div class="wrapper">
    <div class="row-fluid">
        <div class="wrapper">
            <section id="options" class="clearfix">
                <ul id="filters" class="option-set clearfix" data-option-key="filter">
                    <li><a href="#filter" data-option-value="*" class="selected">Portfolio</a></li>
                    <?php foreach($taxonomy_list_terms as $term):?>
                        <li><a href="#filter" data-option-value=".flx-<?php print $term->tid;?>"><?php print $term->name;?></a></li>
                    <?php endforeach;?>
                </ul><!--end:filters-->
                <ul id="etc" class="clearfix">
                    <li id="toggle-sizes">
                        <a class="toggle-selected" href="#toggle-sizes"><i class="icon-th-list icon-2x"></i></a>
                        <a href="#toggle-sizes" class=""><i class="icon-th icon-2x"></i></a>
                    </li>
                </ul><!--end:etc-->
            </section> <!--end:options-->
            <div id="container" class="variable-sizes clickable clearfix">
                <?php print $rows;?>
            </div><!--end:container-->
        </div><!--end:wrapper-->
    </div><!--end:row-fluid-->
</div><!--end:wrapper-->

