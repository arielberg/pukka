<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="wrapper">
    <div class="main-content clearfix">
        <section class="flx-intro-2">
            <h2 class="view-<?php print $view_name?>-title"><?php print $view_human_name;?></h2>
            <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php if($view_description): print $view_description; endif?></span></h5>
        </section><!--end:flx-intro-2-->
        <div class="<?php print $classes; ?>">
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
                <?php print $title; ?>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($header): ?>
                <div class="view-header">
                    <?php print $header; ?>
                </div>
            <?php endif; ?>

            <?php if ($exposed): ?>
                <div class="view-filters">
                    <?php print $exposed; ?>
                </div>
            <?php endif; ?>

            <?php if ($attachment_before): ?>
                <div class="attachment attachment-before">
                    <?php print $attachment_before; ?>
                </div>
            <?php endif; ?>
            <div class="flx-one-forth">
                <?php if(count($view->result) > 0):?>
                <h3>Navigation</h3>
                <div class="list-container-3">
                    <ul class="tabs-3 clearfix">
                        <?php
                        foreach($taxonomy_list_terms as $key => $term):
                            $taxo = taxonomy_term_load($term->tid);?>
                            <li><a href="#tab-3-<?php print $term->tid;?>"><i class="<?php print $taxo->field_term_icon[LANGUAGE_NONE][0]['icon'];?>" title="<?php print $term->name;?>"></i><span><?php print $term->name;?></span></a></li>
                        <?php endforeach;?>
                    </ul><!--tabs-3-->
                    <div class="tab-highlight"></div>
                </div><!--list-container-3-->
                <?php endif;?>
            </div><!--end:flx-one-forth-->
            <div class="flx-three-forth last">
                <div class="tab-container-3">
                    <?php print $attachment_after;?>
                </div><!--tab-container-3-->
            </div><!--end:flx-three-forth-->


            <?php if ($more): ?>
                <?php print $more; ?>
            <?php endif; ?>

            <?php if ($footer): ?>
                <div class="view-footer">
                    <?php print $footer; ?>
                </div>
            <?php endif; ?>

            <?php if ($feed_icon): ?>
                <div class="feed-icon">
                    <?php print $feed_icon; ?>
                </div>
            <?php endif; ?>

        </div><?php /* class view */ ?>
    </div>
    <div class="clear"></div>
</div>


