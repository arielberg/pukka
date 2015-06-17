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
$layout_value = $fields['field_portfolio_layout_mode']->content;
//Define portfolio image styles
$style_188_120 = 'portfolio_thumbnails_188x120';
$style_188_250 = 'portfolio_thumbnails_188x250';
$style_385_250 = 'portfolio_thumbnails_385x250';
$style_584_250 = 'portfolio_thumbnails_584x250';
if($fields['field_portfolio_thumbnail']->content){
    $portfolio_image = $row->field_field_portfolio_thumbnail[0]['raw']['uri'];
}
?>


<div class="element flx-<?php print $row->field_field_portfolio_taxonomy[0]['raw']['tid'];?>">
    <p class="number"><?php print $layout_value;?></p>
    <div class="mask">
		<?php 
			$target_id = "";
			if(isset($row->field_field_node_reference[0])){
				$target_id = $row->field_field_node_reference[0]['raw']['target_id'];
			}
		?>
        <a class="flx-pf-gallery" href="/node/<?php print $target_id?>"></a>
      <h4 class="node-<?php print $view->name;?>-title"><a class="flx-pf-detail" href="/node/<?php print $row->field_field_node_reference[0]['raw']['target_id'];?>" ><?php print $row->node_title;?></a></h4>
    </div>
    <?php global $user; ?>
    <?php if (in_array('מנהל', $user->roles)): ?>
             <div class="edit"><?php print l('Edit', 'node/' . $row->nid . '/edit'); ?></div>
        <?php endif; ?>
    <?php switch($layout_value) {
        case '2':
            print '<img src="'.image_style_url($style_188_120,$portfolio_image).'">';
            break;
        case '3':
            print '<img src="'.image_style_url($style_584_250,$portfolio_image).'">';
            break;
        case '6':
            print '<img src="'.image_style_url($style_188_250,$portfolio_image).'">';
            break;
        case '7':
            print '<img src="'.image_style_url($style_385_250,$portfolio_image).'">';
            break;
    }?>

</div>

