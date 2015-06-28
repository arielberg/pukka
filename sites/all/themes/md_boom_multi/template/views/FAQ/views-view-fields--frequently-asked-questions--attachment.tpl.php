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
<h3 id="node-title"><span class="node-faq-title"><?php print $fields['title']->content;?></span></h3>
<div class="acc-wrapper">
<?php
if(isset($row->field_field_questions_detail)) : ?>

<?php
    foreach($row->field_field_questions_detail as $value):
        $field_raw_id = $value['raw']['value'];
        if(isset($value['rendered']['entity']['field_collection_item'][$field_raw_id]['field_questions']['#items'][0])) {
            $field_question_title = $value['rendered']['entity']['field_collection_item'][$field_raw_id]['field_questions']['#items'][0]['value'];
        }
        if(isset($value['rendered']['entity']['field_collection_item'][$field_raw_id]['field_questions_answer']['#items'][0])) {
            $field_question_answer = $value['rendered']['entity']['field_collection_item'][$field_raw_id]['field_questions_answer']['#items'][0]['value'];
        }
?>
<div class="accordion-title">
    <h5><a href="#"><?php print $field_question_title;?></a></span></span></h5>
</div>
<div class="accordion-container">
    <?php print $field_question_answer;?>
</div>
<?php endforeach;?>
<?php endif;?>
</div>
