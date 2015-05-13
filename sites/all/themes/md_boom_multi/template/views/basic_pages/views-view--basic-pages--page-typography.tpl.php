
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

    <div class="wrapper">
        <div class="main-content clearfix">
            <div class="flx-one-forth">
                <h3>Heading</h3>
                <h1>Heading h1</h1>
                <h2>Heading h2</h2>
                <h3>Heading h3</h3>
                <h4>Heading h4</h4>
                <h5>Heading h5</h5>
                <h6>Heading h6</h6>
            </div><!--end:flx-one-forth-->
            <div class="flx-three-forth last">
                <h3>Paragraph</h3>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed vitae erat libero. Phasellus mauris erat, dapibus nec feugiat vel, lobortis sed diam. Fusce vehicula nisl vel dui ullamcorper nec condimentum nisi dictum. Donec quis diam nec ipsum gravida eleifend. Integer risus odio, bibendum quis ullamcorper et, sagittis id neque. Nunc fringilla, orci eu porta tristique, lectus nunc facilisis tortor, ac mattis mi nunc vitae justo. Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.</p>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed quis risus nunc. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nulla facilisi. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Phasellus luctus, tellus eget mattis scelerisque, quam lacus cursus nunc, eu adipiscing mauris enim vitae erat. Phasellus ornare lorem vitae sem luctus congue. Praesent a enim purus.</p> <br><br>

                <h3>Blockquotes</h3>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed vitae erat libero. Phasellus mauris erat, dapibus nec feugiat vel, lobortis sed diam. Fusce vehicula nisl vel dui ullamcorper nec condimentum nisi dictum. Donec quis diam nec ipsum gravida eleifend. Integer risus odio, bibendum quis ullamcorper et, sagittis id neque. Nunc fringilla, orci eu porta tristique, lectus nunc facilisis tortor, ac mattis mi nunc vitae justo. Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.</p>
                <blockquote>
                    <p>Phasellus mauris erat, dapibus nec feugiat vel, lobortis sed diam. Fusce vehicula nisl vel dui ullamcorper nec condimentum nisi dictum. Donec quis diam nec ipsum gravida eleifend. Integer risus odio</p>
                </blockquote>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed quis risus nunc. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nulla facilisi. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Phasellus luctus, tellus eget mattis scelerisque, quam lacus cursus nunc, eu adipiscing mauris enim vitae erat. Phasellus ornare lorem vitae sem luctus congue. Praesent a enim purus.</p>


            </div><!--end:flx-three-forth-->
            <div class="clear"></div>
            <div class="flx-one-forth">
                <h3>Unordered List</h3>
                <ul class="boom-list">
                    <li><i class="icon-circle"></i> Elegant and Easy to Use</li>
                    <li><i class="icon-circle"></i> Fully Responsive Layout</li>
                    <li><i class="icon-circle"></i> Bold, Clean Design</li>
                    <li><i class="icon-circle"></i> Validate Html5 and Css3</li>
                    <li><i class="icon-circle"></i> Document & support</li>
                </ul>
            </div><!--end:flx-one-forth-->
            <div class="flx-one-forth">
                <h3>Checked List</h3>
                <ul class="boom-list">
                    <li><i class="icon-ok"></i> Elegant and Easy to Use</li>
                    <li><i class="icon-ok"></i> EFully Responsive Layout</li>
                    <li><i class="icon-ok"></i> EBold, Clean Design</li>
                    <li><i class="icon-ok"></i> EValidate Html5 and Css3</li>
                    <li><i class="icon-ok"></i> EDocument & support</li>
                </ul>
            </div><!--end:flx-one-forth-->
            <div class="flx-one-forth">
                <h3>Ordered List</h3>
                <ol class="boom-list ordered-list">
                    <li>Elegant and Easy to Use</li>
                    <li>Fully Responsive Layout</li>
                    <li>Bold, Clean Design</li>
                    <li>Validate Html5 and Css3</li>
                    <li>Document & support</li>
                </ol>
            </div><!--end:flx-one-forth-->
            <div class="flx-one-forth last">
                <h3>Star List</h3>
                <ul class="boom-list">
                    <li><i class="icon-star"></i> Elegant and Easy to Use</li>
                    <li><i class="icon-star"></i> Fully Responsive Layout</li>
                    <li><i class="icon-star"></i> Bold, Clean Design</li>
                    <li><i class="icon-star"></i> Validate Html5 and Css3</li>
                    <li><i class="icon-star"></i> Document & support</li>
                </ul>
            </div><!--end:flx-one-forth-->
            <div class="clear"></div>
            <div class="flx-one-forth">
                <h3>Plus List</h3>
                <ul class="boom-list">
                    <li><i class="icon-plus"></i> Elegant and Easy to Use</li>
                    <li><i class="icon-plus"></i> Fully Responsive Layout</li>
                    <li><i class="icon-plus"></i> Bold, Clean Design</li>
                    <li><i class="icon-plus"></i> Validate Html5 and Css3</li>
                    <li><i class="icon-plus"></i> Document & support</li>
                </ul>
            </div><!--end:flx-one-forth-->
            <div class="flx-one-forth">
                <h3>Radio List</h3>
                <ul class="boom-list">
                    <li><input type="radio" id="radio-1-1" name="radio-1-set" class="regular-radio" checked /><label for="radio-1-1"></label> Elegant and Easy to Use</li>
                    <li><input type="radio" id="radio-1-2" name="radio-1-set" class="regular-radio" /><label for="radio-1-2"></label> Fully Responsive Layout</li>
                    <li><input type="radio" id="radio-1-3" name="radio-1-set" class="regular-radio" /><label for="radio-1-3"></label> Bold, Clean Design</li>
                    <li><input type="radio" id="radio-1-4" name="radio-1-set" class="regular-radio" /><label for="radio-1-4"></label> Validate Html5 and Css3</li>
                </ul>
            </div><!--end:flx-one-forth-->
            <div class="flx-one-forth">
                <h3>Checkbox List</h3>
                <ol class="boom-list">
                    <li><input type="checkbox" id="checkbox-1-0" class="regular-checkbox" /><label for="checkbox-1-0"></label> Elegant and Easy to Use</li>
                    <li><input type="checkbox" id="checkbox-1-1" class="regular-checkbox" /><label for="checkbox-1-1"></label> Fully Responsive Layout</li>
                    <li><input type="checkbox" id="checkbox-1-2" class="regular-checkbox" /><label for="checkbox-1-2"></label> Bold, Clean Design</li>
                    <li><input type="checkbox" id="checkbox-1-3" class="regular-checkbox" /><label for="checkbox-1-3"></label> Validate Html5 and Css3</li>
                </ol>
            </div><!--end:flx-one-forth-->
            <div class="flx-one-forth last">
                <h3>Arrow List</h3>
                <ul class="boom-list">
                    <li><i class="icon-angle-right"></i> Elegant and Easy to Use</li>
                    <li><i class="icon-angle-right"></i> Fully Responsive Layout</li>
                    <li><i class="icon-angle-right"></i> Bold, Clean Design</li>
                    <li><i class="icon-angle-right"></i> Validate Html5 and Css3</li>
                    <li><i class="icon-angle-right"></i> Document & support</li>
                </ul>
            </div><!--end:flx-one-forth-->
            <div class="clear"></div>

            <h3>Dropcap</h3>
            <div class="flx-one-third">
                <p><span class="flx-dropcap flx-color">L</span>orem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-third-->
            <div class="flx-one-third">
                <p><span class="flx-dropcap flx-cricle">L</span>orem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-third-->
            <div class="flx-one-third last">
                <p><span class="flx-dropcap">L</span>orem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-third-->
            <div class="clear"></div>


            <h3>Full width</h3>
            <div class="flx-full-width">
                <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nam cursus. Morbi ut mi. Nullam enim leo, egestas id, condimentum at, laoreet mattis, massa. Sed eleifend nonummy diam. Praesent mauris ante, elementum et, bibendum at, posuere sit amet, nibh. Duis tincidunt lectus quis dui viverra vestibulum. Suspendisse vulputate aliquam dui. Nulla elementum dui ut augue. Aliquam vehicula mi at mauris. Maecenas placerat, nisl at consequat rhoncus, sem nunc gravida justo, quis eleifend arcu velit quis lacus. Morbi magna magna, tincidunt a, mattis non, imperdiet vitae, tellus. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin metus eget eros.</p>
            </div><!--flx-full-width-->
            <h3>One two</h3>
            <div class="flx-one-two">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-two-->
            <div class="flx-one-two last">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-two-->
            <div class="clear"></div>
            <h3>One third</h3>
            <div class="flx-one-third">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-third-->
            <div class="flx-one-third">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-third-->
            <div class="flx-one-third last">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-third-->
            <div class="clear"></div>
            <h3>One forth</h3>
            <div class="flx-one-forth">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-forth-->
            <div class="flx-one-forth">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-forth-->
            <div class="flx-one-forth">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-forth-->
            <div class="flx-one-forth last">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-forth-->
            <div class="clear"></div>
            <h3>Two third & One third</h3>
            <div class="flx-two-third">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
            </div><!--flx-two-third-->
            <div class="flx-one-third last">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
            </div><!--flx-one-third-->
            <div class="clear"></div>
            <h3>Three forth & One forth</h3>
            <div class="flx-three-forth">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique.Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
            </div><!--flx-three-forth-->
            <div class="flx-one-forth last">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut elit ut ipsum tristique accumsan. Sed sagittis mattis lorem at pretium. Pellentesque habitant morbi tristique. Aenean eu leo quam.</p>
            </div><!--flx-one-forth-->
            <div class="clear"></div>
        </div><!--end:main-content-->
    </div><!--end:wrapper-->

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

</div><?php /* class view */ ?>
