<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php
if(isset($row->field_field_blog_multimedia)) {
    $multimedia = $row->field_field_blog_multimedia;
    $count = count($multimedia);
    $slide_content = '';
    foreach($multimedia as $key => $value){
        $bundle_type = $value['rendered']['#bundle'];
        if($bundle_type == 'image'){
            $image = file_create_url($value['rendered']['file']['#item']['uri']);
            $slide_content .= '<li><img src="'.$image.'"/></li>';
        }
    }
}
?>
<div class="wrapper">
    <article class="flx-entry-item bs-2 bs-3 clearfix">
        <div class="flx-entry-thumb">
            <?php if(isset($count) && $count >1 && isset($bundle_type) && $bundle_type == 'image'){?>
                <div class="flexslider" id="bp-flex">
                    <ul class="slides">
                        <?php print $slide_content;?>
                    </ul>
                </div><!--bp-flex-->
            <?php } else {?>
                    <?php if(isset($multimedia)) {print render($multimedia[0]['rendered']);}?>
            <?php }?>
        </div><!--end:flx-entry-thumb-->
        <div class="flx-entry-content">
            <h3 class="flx-entry-title" id="node-title"><span class="node-<?php print $view->name;?>-title"><?php print $fields['title']->content;?></span></h3>
            <div class="flx-entry-meta clearfix">
                <span class="flx-entry-date"><?php print $fields['created']->content;?></span>
                <span class="flx-entry-author"><?php print t('Posted by ');?><a href="#"><?php print $fields['name']->content;?></a></span>
                <span class="flx-entry-categories"><?php print t('In ');?><?php print $fields['field_blog_category']->content;?></span>
            </div><!--end:flx-entry-meta-->
            <div class="flx-entry-detail">
                <p><?php print $fields['field_blog_body']->content;?></p>
            </div><!--end:flx-entry-detail-->
        </div><!--end:flx-entry-content-->
    </article>
    <?php
    unset($fields['field_blog_multimedia']);
    unset($fields['title']);
    unset($fields['name']);
    unset($fields['created']);
    unset($fields['field_blog_category']);
    unset($fields['field_blog_body']);

    ?>
    <?php foreach ($fields as $id => $field): ?>
        <?php if (!empty($field->separator)): ?>
            <?php print $field->separator; ?>
        <?php endif; ?>

        <?php print $field->wrapper_prefix; ?>
        <?php print $field->label_html; ?>
        <?php print $field->content; ?>
        <?php print $field->wrapper_suffix; ?>
    <?php endforeach; ?>
</div>
