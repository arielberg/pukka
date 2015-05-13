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
    <?php if(current_path() != 'home_mega_slider_2'):?>
        <div class="wrapper">
    <?php endif;?>
        <!-- Over view -->
        <?php if(current_path() != 'home_mega_slider_2'):?>
            <section class="flx-intro-2">
                <h2 class="view-<?php print $view_name?>-title"><?php if($display_title) { print $display_title;} else {print $view_human_name;}?></h2>
                <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php if(isset($display_description)) { print $display_description; } elseif($view_description) {print $view_description;}?></span></h5>
            </section><!--end:flx-intro-2-->
        <?php else:?>
            <h3><?php print t('Who we are?');?></h3>
        <?php endif;?>
        <section class="flx-boom clearfix">
            <div class="list-container-3">
                <ul class="tabs-3 clearfix">
                    <?php foreach($view_result as $key => $tabs):$i=0;?>
                        <li><a href="#tab-3-<?php print ($key+1);?>"><i class="<?php print $tabs->field_field_overview_icon[$i]['rendered']['#icon'];?>" title="<?php print $tabs->node_title;?> "></i><span id="node-title"><span class="node-<?php print $view->name;?>-title"><?php print $tabs->node_title;?></span></span></a></li>
                        <?php $i++;endforeach;?>
                </ul><!--end:tabs-3-->
                <div class="tab-highlight"></div>
            </div><!--end:list-container-3-->
            <div class="tab-container-3">
                <div class="jp-container" id="jp-container">
                    <?php foreach($view_result as $key => $tab_content):$y=0;
                        if($tab_content->field_field_overview_body != null){
                            $body = $tab_content->field_field_overview_body[0]['rendered']['#markup'];
                        }
                        ?>
                        <div id="tab-3-<?php print ($key+1);?>" class="tab-content-3">
                            <?php if(isset($body)){print $body;};?>
                        </div>
                        <?php $y++;endforeach;?>
                </div><!--end:jp-container-->
            </div><!--end:tab-container-3-->
        </section><!--end:flx-boom-->
    <?php if(current_path() != 'home_mega_slider_2'):?>
        </div>
    <?php endif;?>

