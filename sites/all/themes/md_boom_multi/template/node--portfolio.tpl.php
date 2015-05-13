<?php
/**
* $node: Node element.
* $content : Node content.
* $content['field_name'] : Node field element.
* Some variables was defined in function md_boom_multi_preprocess_node from inc/template.node.process.inc file
*/
?>
<script type="text/javascript">

    /***Portfolio Flex slider***/
jQuery(document).ready(function($){
    jQuery('#pf-list-flex').flexslider({
        animation: "slide",
        slideshow: true,
        start: function(slider){
            jQuery('body').removeClass('loading');
        }
    });
});
</script>
<?php
$current_path = current_path();
if(isset($content['field_portfolio_multimedia'])) {
    $multimedia = $content['field_portfolio_multimedia']['#items'];
    $count = count($multimedia);
    $slide_content = '';
    foreach($multimedia as $key => $value){
        $file_type = $value['file']->type;
        $image = file_create_url($value['file']->uri);
        $slide_content .= '<li><img src="'.$image.'"/></li>';
    }
}
?>
<?php if(strpos($current_path,'node') !== false && strpos($current_path,'ajax_node') === false):;?>
    <div class="wrapper">
        <section class="flx-intro-2">
            <h2 class="view-portfolio-title"><?php print t('Our Portfolio');?></h2>
            <h5 class="flx-intro-excerpt"><span class="view-portfolio-description"><?php print print t('Clean and decent personal portfolio and microblog HTML template perfectly suitable for Creative Company');?></span></h5>
        </section>
    </div>
    <div class="pf-detail-box">
<?php endif;?>
        <div class="wrapper">
            <div class="row-fluid">
                <article class="pf-detail-item span12 clearfix">
                    <?php
                    hide($content['links']);
                    hide($content['field_portfolio_layout_mode']);
                    hide($content['comments']);
                    hide($content['field_portfolio_location']);
                    hide($content['field_portfolio_skills']);
                    hide($content['field_portfolio_taxonomy']);
                    hide($content['field_portfolio_thumbnail']);
                    hide($content['field_portfolio_description']);
                    hide($content['portfolio_entity_view_related_project']);
                    ?>
                    <?php if(isset($count) && $count >1 && isset($file_type) && $file_type == 'image'){?>
                        <div class="pf-slider-wrapper">
                            <div class="flexslider" id="pf-list-flex">
                                <ul class="slides">
                                    <?php print $slide_content;?>
                                </ul>
                            </div>
                        </div><!--bp-flex-->

                    <?php } else {?>
                        <div class="pf-detail-img">
                            <?php print render($content['field_portfolio_multimedia'][0]);?>
                        </div>
                    <?php }?>
                    <div class="pf-content">
                        <h3><span id="node-title"><span class="node-portfolio-title"><?php print $node->title;?></span></span></h3>
                        <p class="pf-description"><?php print render($content['field_portfolio_description']);?></p>
                        <div class="pf-detail-meta">
                            <div><span class="pf-meta-label"><?php print t('Category');?></span><span class="pf-meta-info"><?php print render($content['field_portfolio_taxonomy']);?></span></div>
                            <p><span class="pf-meta-label"><?php print t('Location');?></span><span class="pf-meta-info"><?php print render($content['field_portfolio_location']);?></span></p>
                            <p><span class="pf-meta-label"><?php print t('Skills');?></span><span class="pf-meta-info"><?php print render($content['field_portfolio_skills']);?></span></p>
                            <p><span class="pf-meta-label"><?php print t('Date');?></span><span class="pf-meta-info"><?php print date('d,M Y',$node->created);?></span></p>
                        </div><!--end:pf-detail-meta-->
                        <?php if(isset($previous)):?>
                        <a class="pf-detail-prev" onclick="return md_boom_multi_portfolio_detail_click(jQuery(this),<?php print ''.$previous.'';?>,false);" href="<?php if(strpos($current_path,'ajax_node') !== false){ ?>#pf-detail-box<?php } else { print base_path().'node/'.$previous.'';} ?>"></a>
                        <?php endif;?>
                        <?php if(strpos($current_path,'ajax_node') !== false):?>
                        <a class="pf-detail-hide" href="#" onClick="return md_boom_multi_portfolio_hide_click(jQuery(this));"></a>
                        <?php endif;?>
                        <?php if(isset($next)):?>
                        <a class="pf-detail-next" onclick="return md_boom_multi_portfolio_detail_click(jQuery(this),<?php print ''.$next.'';?> ,false);" href="<?php if(strpos($current_path,'ajax_node') !== false){ ?>#pf-detail-box<?php } else { print base_path().'node/'.$next.''; } ?>"></a>
                        <?php endif;?>
                    </div><!--end:pf-content-->
                </article><!--end:pf-detail-item-->
            </div>
        </div>
<?php if(strpos($current_path,'node') !== false && strpos($current_path,'ajax_node') === false):?>
    </div>
<?php endif;?>
<div class="wrapper">
    <div class="row-fluid">
        <?php print render($content['portfolio_entity_view_related_project']);?>
    </div>
</div>




