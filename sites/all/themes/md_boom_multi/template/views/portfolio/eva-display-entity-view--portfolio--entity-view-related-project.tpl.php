<?php
/**
 * @file eva-display-entity-view.tpl.php
 * Entity content view template
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
<?php
    $fields = $view->field;
;?>
<section class="portfolio-carousel">
    <h2><?php print t('From '.$fields['field_portfolio_taxonomy']->last_render.'');?></h2>
    <div class="list-carousel responsive" >
        <div class="<?php print $classes; ?>">
                <?php print render($title_prefix); ?>
                <?php if ($title): ?>
                    <h2 class="title"><?php print $title; ?></h2>
                <?php endif; ?>
                <?php print render($title_suffix); ?>

                <?php if ($header): ?>
                    <div class="view-header">
                        <?php print $header; ?>
                    </div>
                <?php endif; ?>

                <?php if ($attachment_before): ?>
                    <div class="attachment attachment-before">
                        <?php print $attachment_before; ?>
                    </div>
                <?php endif; ?>

                <ul id="flx-pf-slides">
                        <?php if ($rows): ?>
                                <?php print $rows; ?>
                        <?php elseif ($empty): ?>
                                <?php print $empty; ?>
                        <?php endif; ?>
                </ul>
                    <?php if ($pager): ?>
                        <?php print $pager; ?>
                    <?php endif; ?>

                    <?php if ($attachment_after): ?>
                        <div class="attachment attachment-after">
                            <?php print $attachment_after; ?>
                        </div>
                    <?php endif; ?>

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

        </div> <?php /* class view */ ?>
        <!--end:flx-slides-->
        <div class="clearfix"></div>
        <?php if(count($view->result) > 3) :?>
        <div class="carousel-nav clearfix"> <a id="prev-5" class="carousel-prev" href="#">&lt;</a> <a id="next-5" class="carousel-next" href="#">&gt;</a></div>
        <?php endif;?>
        <!--end:carousel-nav-->
    </div>
    <!--end:list-carousel-->
</section>
<!--end:portfolio-carousel-->
