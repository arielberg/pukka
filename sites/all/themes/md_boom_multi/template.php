<?php

include_once './' . drupal_get_path('theme', 'md_boom_multi') . '/inc/template.process.inc';
include_once './' . drupal_get_path('theme', 'md_boom_multi') . '/inc/template.view.process.inc';
include_once './' . drupal_get_path('theme', 'md_boom_multi') . '/inc/template.node.process.inc';
/**
 * Implements theme_menu_tree().
 */
function md_boom_multi_menu_tree($variables) {
    return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_field__field_type().
 */
function md_boom_multi_field__taxonomy_term_reference($variables) {
    $output = '';
    // Render the label, if it's not hidden.
    if (!$variables['label_hidden']) {
        $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
    }
    // Render the items.
    $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
    foreach ($variables['items'] as $delta => $item) {
        $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
    }
    $output .= '</ul>';
    // Render the top-level DIV.
    $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '">' . $output . '</div>';
    return $output;
}


/**
 * Override of theme('textarea').
 * Deprecate misc/textarea.js in favor of using the 'resize' CSS3 property.
 */
function md_boom_multi_textarea($variables) {
    $element = $variables['element'];
    $element['#attributes']['name'] = $element['#name'];
    $element['#attributes']['id'] = $element['#id'];
    $element['#attributes']['cols'] = $element['#cols'];
    $element['#attributes']['rows'] = $element['#rows'];
    _form_set_class($element, array('form-textarea'));

    $wrapper_attributes = array(
        'class' => array('form-textarea-wrapper'),
    );

    // Add resizable behavior.
    if (!empty($element['#resizable'])) {
        $wrapper_attributes['class'][] = 'resizable';
    }
    $output = '<div' . drupal_attributes($wrapper_attributes) . '>';
    $output .= '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
    $output .= '</div>';
    return $output;
}

/**
 * @param $variables
 * @return Main menu
 */

// Customize menu ul
function md_boom_multi_menu_tree__main_menu($variables)
{
    // Change id of menu ul
    return '<ul id="main-menu" class="clearfix">' . $variables['tree'] . '</ul>';
}
/**
 * Theme override for theme_menu_link()
 * Adds a unique ID class to all menu items.
 */
function md_boom_multi_breadcrumb($variables) {
    $breadcrumb = $variables['breadcrumb'];
    $output = '';
    $title = drupal_get_title();
    if (!empty($breadcrumb)) {
        // Provide a navigational heading to give context for breadcrumb links to
        // screen-reader users. Make the heading invisible with .element-invisible.
    if (arg(0) ==  "taxonomy" && arg(1) == "term" && is_numeric(arg(2)) && arg(3) == "") {
        $output .= '<div class="breadcrumb"><div class="wrapper">' . implode(' / ', $breadcrumb) . '</div></div>';
    }
    else{
        $output .= '<div class="breadcrumb"><div class="wrapper">' . implode(' / ', $breadcrumb) . ' / ' . $title .'</div></div>';
    }

        return $output;
    }
}
/**
 * Theme override for message box
 * Add a unique class to each alert type.
 */
function md_boom_multi_status_messages($variables) {
    $display = $variables['display'];
    $output = '';

    $status_heading = array(
        'status' => t('Status message'),
        'error' => t('Error message'),
        'warning' => t('Warning message'),
    );
    foreach (drupal_get_messages($display) as $type => $messages) {
        $output .= "<div class=\"alert-box messages alert-box-$type\">\n";
        if (!empty($status_heading[$type])) {
            $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
        }
        if (count($messages) > 1) {
            $output .= " <ul>\n";
            foreach ($messages as $message) {
                $output .= '  <li>' . $message . "</li>\n";
            }
            $output .= " </ul>\n";
        }
        else {
            $output .= $messages[0];
        }
        $output .= "</div>\n";
    }
    return $output;
}
/*function md_boom_multi_menu_link(array $variables) {
    $element = $variables['element'];
    $sub_menu = '';
    if ($element['#below']) {
        $sub_menu = drupal_render($element['#below']);
    }
    if (strpos( $element['#href'], 'nolink')) {
        $output = '<a href="#" class="nolink">' . $element['#title'] . '</a>';
    } else {
        $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    }
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
} */
function md_boom_multi_form_alter(&$form, &$form_state, $form_id) {
    if ($form_id == 'search_block_form') {
        unset($form['search_block_form']['#title']); // Change the text on the label element
        unset($form['search_block_form']['#title_display']); // Toggle label visibilty
        $form['search_block_form']['#size'] = 40;  // define size of the textfield
        $form['search_block_form']['#default_value'] = t(''); // Set a default value for the textfield

        $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/icons/search-icon-top.png');
        $form['actions']['submit']['#attributes'] = array(
            'class' => array('front-search-button'),
        );
        $form['actions']['submit']['#value'] = t('');
        // Add extra attributes to the text box
        $form['search_block_form']['#attributes']['class'] = array('search-query');
        // Prevent user from searching the default text
        $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search'); return false; }";
        // Alternative (HTML5) placeholder attribute instead of using the javascript
        //$form['search_block_form']['#attributes']['placeholder'] = t('Search');
    }
}

print_r($variables['theme_hook_suggestions']);


/**
 * Process variables for search-result.tpl.php.
 *
 * @see search-result.tpl.php
 */
function md_boom_multi_preprocess_search_result(&$variables) {
  // Add node object to result, so we can display imagefield images in results.
  $n = node_load($variables['result']['node']->nid);
  $n && ($variables['node'] = $n);
}
?>