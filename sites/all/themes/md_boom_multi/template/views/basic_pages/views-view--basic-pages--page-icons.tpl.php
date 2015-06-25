<?php
$theme_path = drupal_get_path('theme','md_boom_multi');
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
<section class="row-fluid" id="icons-new">
    <div class="span12">
        <h3>New Icons</h3>
        <p>You asked, Font Awesome delivers with 40 shiny new icons in version 3.0. New icons can be requested on the <a target="_blank" href="https://github.com/FortAwesome/Font-Awesome">Font Awesome GitHub project</a>. Or even better, you can <a href="#contribute">contribute your own icons</a>.</p>
    </div>
    <div class="row-fluid">
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-download-cloud"></i> icon-download-cloud</li>
                <li><i class="icon-upload-cloud"></i> icon-upload-cloud</li>
                <li><i class="icon-lightbulb"></i> icon-lightbulb</li>
                <li><i class="icon-exchange"></i> icon-exchange</li>
                <li><i class="icon-bell-alt"></i> icon-bell-alt</li>
                <li><i class="icon-doc-text"></i> icon-doc-text</li>
                <li><i class="icon-beer"></i> icon-beer</li>
                <li><i class="icon-coffee"></i> icon-coffee</li>
                <li><i class="icon-food"></i> icon-food</li>
                <li><i class="icon-fighter-jet"></i> icon-fighter-jet</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-user-md"></i> icon-user-md</li>
                <li><i class="icon-stethoscope"></i> icon-stethoscope</li>
                <li><i class="icon-suitcase"></i> icon-suitcase</li>
                <li><i class="icon-building"></i> icon-building</li>
                <li><i class="icon-hospital"></i> icon-hospital</li>
                <li><i class="icon-ambulance"></i> icon-ambulance</li>
                <li><i class="icon-medkit"></i> icon-medkit</li>
                <li><i class="icon-h-sigh"></i> icon-h-sigh</li>
                <li><i class="icon-plus-squared"></i> icon-plus-squared</li>
                <li><i class="icon-spinner"></i> icon-spinner</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-angle-left"></i> icon-angle-left</li>
                <li><i class="icon-angle-right"></i> icon-angle-right</li>
                <li><i class="icon-angle-up"></i> icon-angle-up</li>
                <li><i class="icon-angle-down"></i> icon-angle-down</li>
                <li><i class="icon-angle-double-left"></i> icon-angle-double-leftt</li>
                <li><i class="icon-angle-double-right"></i> icon-angle-double-right</li>
                <li><i class="icon-angle-double-up"></i> icon-angle-double-up</li>
                <li><i class="icon-angle-double-down"></i> icon-angle-double-down</li>
                <li><i class="icon-circle-empty"></i> icon-circle-empt</li>
                <li><i class="icon-circle"></i> icon-circle</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-desktop"></i> icon-desktop</li>
                <li><i class="icon-laptop"></i> icon-laptop</li>
                <li><i class="icon-tablet"></i> icon-tablet</li>
                <li><i class="icon-mobile"></i> icon-mobile</li>
                <li><i class="icon-quote-left"></i> icon-quote-left</li>
                <li><i class="icon-quote-right"></i> icon-quote-right</li>
                <li><i class="icon-reply"></i> icon-reply</li>
                <li><i class="icon-github"></i> icon-github-alt</li>
                <li><i class="icon-folder-empty"></i> icon-folder-empty</li>
                <li><i class="icon-folder-open-empty"></i> icon-folder-open-empty</li>
            </ul>
        </div>
    </div>
</section><!--end:icons-new-->
<section class="row-fluid" id="icons-web-app">
    <div class="span12">
        <h3>Web Application Icons</h3>
    </div>
    <div class="row-fluid">
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-asterisk"></i> icon-asterisk</li>
                <li><i class="icon-chart-bar"></i> icon-chart-bart</li>
                <li><i class="icon-barcode"></i> icon-barcode</li>
                <li><i class="icon-beaker"></i> icon-beaker</li>
                <li><i class="icon-beer"></i> icon-beer</li>
                <li><i class="icon-bell"></i> icon-bell</li>
                <li><i class="icon-bell-alt"></i> icon-bell-alt</li>
                <li><i class="icon-flash"></i> icon-flash</li>
                <li><i class="icon-book"></i> icon-book</li>
                <li><i class="icon-bookmark"></i> icon-bookmark</li>
                <li><i class="icon-bookmark-empty"></i> icon-bookmark-empty</li>
                <li><i class="icon-briefcase"></i> icon-briefcase</li>
                <li><i class="icon-calendar"></i> icon-calendar</li>
                <li><i class="icon-camera"></i> icon-camera</li>
                <li><i class="icon-camera-alt"></i> icon-camera-retro</li>
                <li><i class="icon-certificate"></i> icon-certificate</li>
                <li><i class="icon-check"></i> icon-check</li>
                <li><i class="icon-check-empty"></i> icon-check-empty</li>
                <li><i class="icon-circle"></i> icon-circle</li>
                <li><i class="icon-circle-empty"></i> icon-circle-emptyk</li>
                <li><i class="icon-cloud"></i> icon-cloud</li>
                <li><i class="icon-download-cloud"></i> icon-download-cloud</li>
                <li><i class="icon-upload-cloud"></i> icon-upload-cloudd</li>
                <li><i class="icon-coffee"></i> icon-coffee</li>
                <li><i class="icon-cog"></i> icon-cog</li>
                <li><i class="icon-cog-alt"></i> icon-cogs</li>
                <li><i class="icon-comment"></i> icon-comment</li>
                <li><i class="icon-chat"></i> icon-chat</li>
                <li><i class="icon-comment-empty"></i> icon-comment-empty</li>
                <li><i class="icon-chat-empty"></i> icon-chat-emptylt</li>
                <li><i class="icon-credit-card"></i> icon-credit-card</li>

            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-edit"></i> icon-edit</li>
                <li><i class="icon-mail-alt"></i> icon-mail-alt</li>
                <li><i class="icon-exchange"></i> icon-exchange</li>
                <li><i class="icon-link-ext"></i> icon-link-extk</li>
                <li><i class="icon-fighter-jet"></i> icon-fighter-jet</li>
                <li><i class="icon-filter"></i> icon-filter</li>
                <li><i class="icon-fire"></i> icon-fire</li>
                <li><i class="icon-flag"></i> icon-flag</li>
                <li><i class="icon-folder-empty"></i> icon-folder-empty</li>
                <li><i class="icon-folder-open-empty"></i> icon-folder-open-empty</li>
                <li><i class="icon-folder"></i> icon-folder</li>
                <li><i class="icon-folder-open"></i> icon-folder-open</li>
                <li><i class="icon-food"></i> icon-food</li>
                <li><i class="icon-gift"></i> icon-gift</li>
                <li><i class="icon-glass"></i> icon-glass</li>
                <li><i class="icon-globe"></i> icon-globe</li>
                <li><i class="icon-users"></i> icon-users</li>
                <li><i class="icon-hdd"></i> icon-hdd</li>
                <li><i class="icon-headphones"></i> icon-headphones</li>
                <li><i class="icon-heart"></i> icon-heart</li>
                <li><i class="icon-heart-empty"></i> icon-heart-empty</li>
                <li><i class="icon-home"></i> icon-home</li>
                <li><i class="icon-inbox"></i> icon-inbox</li>
                <li><i class="icon-key"></i> icon-key</li>
                <li><i class="icon-leaf"></i> icon-leaf</li>
                <li><i class="icon-laptop"></i> icon-laptop</li>
                <li><i class="icon-hammer"></i> icon-hammer</li>
                <li><i class="icon-lemon"></i> icon-lemon</li>
                <li><i class="icon-lightbulb"></i> icon-lightbulb</li>
                <li><i class="icon-lock"></i> icon-lock</li>
                <li><i class="icon-lock-open"></i> icon-lock-open</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-desktop"></i> icon-desktop</li>
                <li><i class="icon-download"></i> icon-download</li>
                <li><i class="icon-magic"></i> icon-magic</li>
                <li><i class="icon-magnet"></i> icon-magnet</li>
                <li><i class="icon-minus"></i> icon-minus</li>
                <li><i class="icon-mobile"></i> icon-mobile</li>
                <li><i class="icon-money"></i> icon-money</li>
                <li><i class="icon-move"></i> icon-move</li>
                <li><i class="icon-music"></i> icon-music</li>
                <li><i class="icon-off"></i> icon-off</li>
                <li><i class="icon-ok"></i> icon-ok</li>
                <li><i class="icon-pencil"></i> icon-pencil</li>
                <li><i class="icon-picture"></i> icon-picture</li>
                <li><i class="icon-plane"></i> icon-plane</li>
                <li><i class="icon-plus"></i> icon-plus</li>
                <li><i class="icon-print"></i> icon-print</li>
                <li><i class="icon-pin"></i> icon-pin</li>
                <li><i class="icon-qrcode"></i> icon-qrcode</li>
                <li><i class="icon-quote-left"></i> icon-quote-left</li>
                <li><i class="icon-quote-right"></i> icon-quote-right</li>
                <li><i class="icon-menu"></i> icon-menu</li>
                <li><i class="icon-reply"></i> icon-reply</li>
                <li><i class="icon-resize-horizontal"></i> icon-resize-horizontal</li>
                <li><i class="icon-resize-vertical"></i> icon-resize-vertical</li>
                <li><i class="icon-retweet"></i> icon-retweet</li>
                <li><i class="icon-road"></i> icon-road</li>
                <li><i class="icon-rss"></i> icon-rss</li>
                <li><i class="icon-search"></i> icon-search</li>
                <li><i class="icon-basket"></i> icon-basket</li>
                <li><i class="icon-signal"></i> icon-signal</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">

                <li><i class="icon-login"></i> icon-login</li>
                <li><i class="icon-logout"></i> icon-logout</li>
                <li><i class="icon-sitemap"></i> icon-sitemap</li>
                <li><i class="icon-sort"></i> icon-sort</li>
                <li><i class="icon-sort-down"></i> icon-sort-down</li>
                <li><i class="icon-sort-up"></i> icon-sort-up</li>
                <li><i class="icon-spinner"></i> icon-spinner</li>
                <li><i class="icon-star"></i> icon-star</li>
                <li><i class="icon-star-empty"></i> icon-star-empty</li>
                <li><i class="icon-star-half"></i> icon-star-half</li>
                <li><i class="icon-tablet"></i> icon-tablet</li>
                <li><i class="icon-tag"></i> icon-tag</li>
                <li><i class="icon-tags"></i> icon-tags</li>
                <li><i class="icon-tasks"></i> icon-tasks</li>
                <li><i class="icon-thumbs-down"></i> icon-thumbs-down</li>
                <li><i class="icon-thumbs-up"></i> icon-thumbs-up</li>
                <li><i class="icon-clock"></i> icon-clock</li>
                <li><i class="icon-tint"></i> icon-tint</li>
                <li><i class="icon-trash"></i> icon-trash</li>
                <li><i class="icon-award"></i> icon-award</li>
                <li><i class="icon-truck"></i> icon-truck</li>
                <li><i class="icon-umbrella"></i> icon-umbrella</li>
                <li><i class="icon-upload"></i> icon-upload</li>
                <li><i class="icon-user"></i> icon-user</li>
                <li><i class="icon-user-md"></i> icon-user-md</li>
                <li><i class="icon-volume-off"></i> icon-volume-off</li>
                <li><i class="icon-volume-down"></i> icon-volume-down</li>
                <li><i class="icon-volume-up"></i> icon-volume-up</li>
                <li><i class="icon-wrench"></i> icon-wrench</li>
                <li><i class="icon-zoom-in"></i> icon-zoom-in</li>
                <li><i class="icon-zoom-out"></i> icon-zoom-out</li>
            </ul>
        </div>
    </div>
</section><!--end:icons-web-app-->
<section class="row-fluid" id="icons-text-editor">
    <div class="span12">
        <h3>Text Editor Icons</h3>
    </div>
    <div class="row-fluid">
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-doc"></i> icon-doc</li>
                <li><i class="icon-doc-text"></i> icon-doc-text</li>
                <li><i class="icon-scissors"></i> icon-scissors</li>
                <li><i class="icon-docs"></i> icon-docs</li>
                <li><i class="icon-paste"></i> icon-paste</li>
                <li><i class="icon-floppy"></i> icon-floppy</li>
                <li><i class="icon-ccw"></i> icon-ccw</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-text-height"></i> icon-text-height</li>
                <li><i class="icon-text-width"></i> icon-text-width</li>
                <li><i class="icon-align-left"></i> icon-align-left</li>
                <li><i class="icon-align-center"></i> icon-align-center</li>
                <li><i class="icon-align-right"></i> icon-align-right</li>
                <li><i class="icon-align-justify"></i> icon-align-justify</li>
                <li><i class="icon-indent-left"></i> icon-indent-left</li>
                <li><i class="icon-indent-right"></i> icon-indent-right</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-font"></i> icon-font</li>
                <li><i class="icon-bold"></i> icon-bold</li>
                <li><i class="icon-italic"></i> icon-italic</li>
                <li><i class="icon-strike"></i> icon-strike</li>
                <li><i class="icon-underline"></i> icon-underline</li>
                <li><i class="icon-link"></i> icon-link</li>
                <li><i class="icon-attach"></i> icon-attach</li>
                <li><i class="icon-columns"></i> icon-columns</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-table"></i> icon-table</li>
                <li><i class="icon-th-large"></i> icon-th-large</li>
                <li><i class="icon-th"></i> icon-th</li>
                <li><i class="icon-th-list"></i> icon-th-list</li>
                <li><i class="icon-list"></i> icon-list</li>
                <li><i class="icon-list-numbered"></i> icon-list-numbered</li>
                <li><i class="icon-list-bullet"></i> icon-list-bullet</li>
                <li><i class="icon-list-alt"></i> icon-list-alt</li>
            </ul>
        </div>
    </div>
</section><!--end:icons-text-editor-->
<section class="row-fluid" id="icons-directional">
    <div class="span12">
        <h3>Directional Icons</h3>
    </div>
    <div class="row-fluid">
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-angle-left"></i> icon-angle-left</li>
                <li><i class="icon-angle-right"></i> icon-angle-right</li>
                <li><i class="icon-angle-up"></i> icon-angle-up</li>
                <li><i class="icon-angle-down"></i> icon-angle-down</li>
                <li><i class="icon-angle-double-left"></i> icon-angle-double-left</li>
                <li><i class="icon-angle-double-right"></i> icon-angle-double-right</li>
                <li><i class="icon-angle-double-up"></i> icon-angle-double-up</li>
                <li><i class="icon-angle-double-down"></i> icon-angle-double-down</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-down-dir"></i> icon-down-dir</li>
                <li><i class="icon-left-dir"></i> icon-left-dir</li>
                <li><i class="icon-right-dir"></i> icon-right-dir</li>
                <li><i class="icon-up-dir"></i>icon-up-dir</li>
                <li><i class="icon-down-open"></i> icon-down-open</li>
                <li><i class="icon-left-open"></i> icon-left-open</li>
                <li><i class="icon-right-open"></i> icon-right-ope</li>
                <li><i class="icon-up-open"></i> icon-up-open</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-angle-circled-down"></i> icon-angle-circled-down</li>
                <li><i class="icon-angle-circled-up"></i> icon-angle-circled-up</li>
                <li><i class="icon-angle-circled-left"></i> icon-angle-circled-left</li>
                <li><i class="icon-angle-circled-right"></i> icon-angle-circled-right</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-down-hand"></i> icon-down-hand</li>
                <li><i class="icon-left-hand"></i> icon-left-hand</li>
                <li><i class="icon-right-hand"></i> icon-right-hand</li>
                <li><i class="icon-up-hand"></i> icon-up-hand</li>
                <li><i class="icon-circle"></i> icon-circle</li>
                <li><i class="icon-circle-empty"></i> icon-circle-empty</li>
            </ul>
        </div>
    </div>
</section><!--end:icons-directional-->
<section class="row-fluid" id="icons-video-player">
    <div class="span12">
        <h3>Video Player Icons</h3>
    </div>
    <div class="row-fluid">
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-play-circled"></i> icon-play-circled</li>
                <li><i class="icon-play-circled2"></i> icon-play-circled2</li>
                <li><i class="icon-pause"></i> icon-pause</li>
                <li><i class="icon-stop"></i> icon-stop</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-to-end"></i> icon-to-end</li>
                <li><i class="icon-to-end-alt"></i> icon-to-end-alt</li>
                <li><i class="icon-to-start"></i> icon-to-start</li>
                <li><i class="icon-to-start-alt"></i> icon-to-start-alt</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-fast-fw"></i> icon-fast-fw</li>
                <li><i class="icon-fast-bw"></i> icon-fast-bw</li>
                <li><i class="icon-eject"></i> icon-eject</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-resize-full-alt"></i> icon-resize-full-alt</li>
                <li><i class="icon-resize-full"></i> icon-resize-full</li>
                <li><i class="icon-resize-small"></i> icon-resize-small</li>
            </ul>
        </div>
    </div>
</section><!--end:icons-video-player-->
<section class="row-fluid" id="icons-social">
    <div class="span12">
        <h3>Social Icons</h3>
    </div>
    <div class="row-fluid">
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-phone"></i> icon-phone</li>
                <li><i class="icon-phone-squared"></i> icon-phone-squared</li>
                <li><i class="icon-facebook"></i> icon-facebook</li>
                <li><i class="icon-facebook-squared"></i> icon-facebook-squared</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-twitter"></i> icon-twitter</li>
                <li><i class="icon-twitter-squared"></i> icon-twitter-squared</li>
                <li><i class="icon-github"></i> icon-github</li>
                <li><i class="icon-github-squared"></i> icon-github-squared</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-linkedin"></i> icon-linkedin</li>
                <li><i class="icon-linkedin-squared"></i> icon-linkedin-squared</li>
                <li><i class="icon-pinterest-squared"></i> icon-pinterest-squared</li>
                <li><i class="icon-pinterest-circled"></i> icon-pinterest</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-gplus"></i> icon-google-plus</li>
                <li><i class="icon-gplus-squared"></i> icon-gplus-squared</li>
                <li><i class="icon-flickr"></i> icon-flickr</li>
                <li><i class="icon-skype"></i> icon-skype</li>
            </ul>
        </div>
    </div>
</section><!--end:icons-social-->
<section class="row-fluid" id="icons-medical">
    <div class="span12">
        <h3>Medical Icons</h3>
    </div>
    <div class="row-fluid">
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-ambulance"></i> icon-ambulance</li>
                <li><i class="icon-beaker"></i> icon-beaker</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-h-sigh"></i> icon-h-sigh</li>
                <li><i class="icon-hospital"></i> icon-hospital</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-medkit"></i> icon-medkit</li>
                <li><i class="icon-gplus-squared"></i> icon-gplus-squared</li>
            </ul>
        </div>
        <div class="span3">
            <ul class="the-icons">
                <li><i class="icon-stethoscope"></i> icon-stethoscope</li>
                <li><i class="icon-user-md"></i> icon-user-md</li>
            </ul>
        </div>
    </div>
</section><!--end:icons-medical-->
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
