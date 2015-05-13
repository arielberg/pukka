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


<div class="wrapper blog-wrapper">
    <article class="flx-entry-item bs-2">
            <h3 class="flx-entry-title" id="node-title"><span class="node-<?php print $view->name;?>-title"><?php print $fields['title']->content;?></span></h3>
            <div class="flx-entry-meta">
            <?php   if ($fields['field_author']->content) { ?>
                <span class="flx-entry-author"><i class="icon-user"></i><a href="#"><?php print $fields['field_author']->content;?></a></span>
             <?php  }?>                <span class="flx-entry-date"><i class="icon-calendar"></i><?php print $fields['created']->content;?></span>
            </div><!--end:flx-entry-meta-->
            <div class="flx-entry-thumb">
                <p><?php print $fields['field_image_main_blog']->content;?></p>

            </div><!--end:flx-entry-thumb-->
        <div class="flx-entry-content">
            <div class="flx-entry-detail">
                <p><?php print $fields['field_teaser']->content;?></p>
            </div><!--end:flx-entry-detail-->
        </div><!--end:flx-entry-content-->
    </article>
    <?php
    unset($fields['field_image_main_blog']);
    unset($fields['title']);
    unset($fields['name']);
    unset($fields['created']);
    unset($fields['field_blog_category']);
    unset($fields['field_teaser']);
    unset($fields['field_author']);

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
