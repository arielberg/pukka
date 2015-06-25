<?php
/**
 * $node: Node element.
 * $content : Node content.
 * $content['field_name'] : Node field element.
 * Some variables was defined in function md_boom_multi_preprocess_node from inc/template.node.process.inc file
 */
?>
<?php
if(isset($content['field_blog_multimedia'])) {
    $multimedia = $content['field_blog_multimedia']['#items'];
    $count = count($multimedia);
    $slide_content = '';
    foreach($multimedia as $key => $value){
        $file_type = $value['file']->type;
        $image = file_create_url($value['file']->uri);
        $slide_content .= '<li><img src="'.$image.'"/></li>';
    }
}
?>
<section class="flx-entry-box">
    <div class="flx-entry-thumb">
        <?php if(isset($count) && $count >1 && isset($file_type) && $file_type == 'image'){?>
            <div class="flexslider" id="bp-flex">
                <ul class="slides">
                    <?php
                    print $slide_content;
                    ?>
                </ul>
            </div><!--bp-flex-->
        <?php } elseif(strposa(current_path(),array('taxonomy')) !== false) {?>
            <?php print render($content['field_blog_multimedia'][0]);?>
        <?php } else {?>
            <?php print render($content['field_blog_multimedia']);?>
        <?php }?>
        <?php if(isset($count) && $count == 1 && isset($file_type) && $file_type == 'image'):?>
            <a href="<?php print $GLOBALS['base_url'] .'/node/' . $node->nid .'/edit?destination=admin/content';?>"><span class="flx-gallery"><i class="icon-pencil icon-2x"></i></span></a>
        <?php endif;?>
    </div><!--end:flx-entry-thumb-->
    <div class="flx-entry-content">
        <header class="blog-information"> <!-- Fixes some node information in header -->
            <div class="entry-info">
                <h2 class="entry-title"><span id="node-title"><span class="node-<?php print $node->type;?>-title"><?php print $node->title;?></span></span></h2>
                <span class="flx-entry-date"><?php print date('F d,Y',$node->created);?></span>
                <span class="flx-entry-meta"><?php print t('Posted by '); ?> </span><a class="flx-entry-author" href="#"><?php print $node->name;?></a>
                <span class="flx-entry-meta"><?php print t('In '); ?></span>
                <div class="blog-category"><?php print render($content['field_blog_category']);?></div>
                <span class="flx-entry-meta">, </span><a class="flx-entry-comment" href="#"><?php print t('Comments');?> <?php print $node->comment_count;?></a>
            </div>
        </header>
        <?php
        hide($content['field_blog_multimedia']);
        hide($content['field_blog_thumbnail']);
        hide($content['field_blog_category']);
        hide($content['field_blog_tag']);
        hide($content['links']);
        hide($content['comments']);
        ?>
        <p><?php print render($content);?></p>
    </div><!--end:flx-entry-content-->
</section><!--end:flx-entry-box-->
<?php if(isset($content['comments']['comments'])):?>
<div id="comments-box">
    <h3><?php print $node->comment_count;?> comments</h3>
    <?php print render($content['comments']); ?>
</div><!--end:comments-->
<?php endif;?>
