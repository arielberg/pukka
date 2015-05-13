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
<div class="row-fluid">
<section class="table-2col clearfix">
    <h3>Two Column Pricing Table</h3>
    <div class="pricing-column pricing-special pricing-column-first">
        <div class="pricing-header">
            <div class="pricing-title">Premium</div>
            <div class="price"><sup>$</sup><span>49</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>300 Email Accounts</p></li>
            <li><p>300GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
            <p>&nbsp;</p>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column">
        <div class="pricing-header">
            <div class="pricing-title">Plus</div>
            <div class="price"><sup>$</sup><span>29</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>200 Email Accounts</p></li>
            <li><p>200GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
</section><!--end:table-2col-->
<section class="table-3col clearfix">
    <h3>Three Column Pricing Table</h3>
    <div class="pricing-column pricing-column-first">
        <div class="pricing-header">
            <div class="pricing-title">Basic</div>
            <div class="price"><sup>$</sup><span>19</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>100 Email Accounts</p></li>
            <li><p>100GB Space</p></li>
            <li><p>1 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column pricing-special">
        <div class="pricing-header">
            <div class="pricing-title">Premium</div>
            <div class="price"><sup>$</sup><span>49</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>300 Email Accounts</p></li>
            <li><p>300GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
            <p>&nbsp;</p>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column">
        <div class="pricing-header">
            <div class="pricing-title">Plus</div>
            <div class="price"><sup>$</sup><span>29</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>200 Email Accounts</p></li>
            <li><p>200GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
</section><!--end:table-3col-->
<section class="table-4col clearfix">
    <h3>Four Column Pricing Table</h3>
    <div class="pricing-column pricing-column-first">
        <div class="pricing-header">
            <div class="pricing-title">Basic</div>
            <div class="price"><sup>$</sup><span>19</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>100 Email Accounts</p></li>
            <li><p>100GB Space</p></li>
            <li><p>1 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column pricing-special">
        <div class="pricing-header">
            <div class="pricing-title">Premium</div>
            <div class="price"><sup>$</sup><span>49</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>300 Email Accounts</p></li>
            <li><p>300GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
            <p>&nbsp;</p>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column">
        <div class="pricing-header">
            <div class="pricing-title">Plus</div>
            <div class="price"><sup>$</sup><span>29</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>200 Email Accounts</p></li>
            <li><p>200GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column">
        <div class="pricing-header">
            <div class="pricing-title">Free</div>
            <div class="price"><sup>$</sup><span>29</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>50 Email Accounts</p></li>
            <li><p>50GB Space</p></li>
            <li><p>1 Domain Name</p></li>
            <li><p>500MB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
</section><!--end:table-4col-->
<section class="table-5col clearfix">
    <h3>Five Column Pricing Table</h3>
    <div class="pricing-column pricing-column-first">
        <div class="pricing-header">
            <div class="pricing-title">Business</div>
            <div class="price"><sup>$</sup><span>19</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>100 Email Accounts</p></li>
            <li><p>100GB Space</p></li>
            <li><p>1 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column">
        <div class="pricing-header">
            <div class="pricing-title">Basic</div>
            <div class="price"><sup>$</sup><span>19</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>100 Email Accounts</p></li>
            <li><p>100GB Space</p></li>
            <li><p>1 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column pricing-special">
        <div class="pricing-header">
            <div class="pricing-title">Premium</div>
            <div class="price"><sup>$</sup><span>49</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>300 Email Accounts</p></li>
            <li><p>300GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
            <p>&nbsp;</p>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column">
        <div class="pricing-header">
            <div class="pricing-title">Plus</div>
            <div class="price"><sup>$</sup><span>29</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>200 Email Accounts</p></li>
            <li><p>200GB Space</p></li>
            <li><p>3 Domain Name</p></li>
            <li><p>1TB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
    <div class="pricing-column">
        <div class="pricing-header">
            <div class="pricing-title">Free</div>
            <div class="price"><sup>$</sup><span>29</span>/Monthly</div>
        </div><!--end:pricing-header -->
        <ul class="features">
            <li><p>50 Email Accounts</p></li>
            <li><p>50GB Space</p></li>
            <li><p>1 Domain Name</p></li>
            <li><p>500MB Bandwidth</p></li>
        </ul><!--end:features-->
        <div class="pricing-footer">
            <a class="flx-black-button flx-button" href="#">Signup now</a>
        </div><!--end:pricing-footer-->
    </div><!--end:pricing-column-->
</section><!--end:table-5col-->
</div><!--end:row-fluid-->
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
