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
if($fields['field_portfolio_thumbnail']->content){
    $portfolio_image = $row->field_field_portfolio_thumbnail[0]['raw']['uri'];
    }
?>

<article class="pf-slide-item">
   <div class="mask">
       <a class="flx-pf-gallery" href="<?php print file_create_url($portfolio_image);?>" rel="prettyPhoto[flx-gallery-<?php print $row->field_field_portfolio_taxonomy[0]['raw']['tid'];?>]"></a>
       <h4><span id="node-title"><span class="node-<?php print $view->name;?>-title"><a class="flx-pf-detail" href="<?php print $row->nid;?>"><?php print $row->node_title;?></a></span></span></h4>
   </div>
    <?php print $fields['field_portfolio_thumbnail']->content;?>
</article>
