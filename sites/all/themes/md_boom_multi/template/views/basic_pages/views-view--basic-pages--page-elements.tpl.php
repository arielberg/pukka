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
    <div class="flx-full-width">
        <h3>Alert Box</h3>
        <div class="alert-box alert-box-info">
            <p>Insert your information text here.</p>
            <a href="#" class="button-close alert-close-info"></a>
        </div>
        <div class="alert-box alert-box-success">
            <p>Insert your success text here.</p>
            <a href="#" class="button-close alert-close-success"></a>
        </div>
        <div class="alert-box alert-box-warning">
            <p>Alert : You have a message</p>
            <a href="#" class="button-close alert-close-warning"></a>
        </div>
        <div class="alert-box alert-box-error">
            <p>Alert : You have a problem</p>
            <a href="#" class="button-close alert-close-error"></a>
        </div>
    </div><!--end:flx-full-width-->
    <div class="flx-full-width">
        <h3>Progess Bars</h3>
        <div class="progress-bar animate">
            <span style="width: 40%"><span></span></span>
        </div>
        <div class="progress-bar red animate">
            <span style="width: 50%"><span></span></span>
        </div>
        <div class="progress-bar blue animate">
            <span style="width: 60%"><span></span></span>
        </div>
        <div class="progress-bar pink animate ">
            <span style="width: 70%"><span></span></span>
        </div>
        <div class="progress-bar gray animate">
            <span style="width: 80%"><span></span></span>
        </div>
        <div class="progress-bar orange animate">
            <span style="width: 90%"><span></span></span>
        </div>
    </div><!--end:flx-full-width-->
    <div class="flx-full-width">
        <h3>Progess Bars no animate</h3>
        <div class="progress-bar nostripes">
            <span style="width: 40%"><span></span></span>
        </div>
        <div class="progress-bar red nostripes ">
            <span style="width: 50%"><span></span></span>
        </div>
        <div class="progress-bar blue nostripes">
            <span style="width: 60%"><span></span></span>
        </div>
        <div class="progress-bar pink nostripes ">
            <span style="width: 70%"><span></span></span>
        </div>
        <div class="progress-bar gray nostripes">
            <span style="width: 80%"><span></span></span>
        </div>
        <div class="progress-bar orange nostripes">
            <span style="width: 90%"><span></span></span>
        </div>
    </div><!--end:flx-full-width-->
    <div class="flx-one-two">
        <h3>Testimonials 1</h3>
        <div class="testimonials">
            <div class="flexslider" id="testimonial-slider-1">
                <ul class="slides">
                    <li class="clearfix">
                        <blockquote><i class="icon-quote-left icon-2x"></i>Lorem ipsum dolor sit amet, con sectetur adipiscing elit. Maecenas ultrices consectetur mattis. Fusce vitae sapien et risus condimentum scelerisque. Aliquam porta interdum...</blockquote>
                        <div class="testimonial-author clearfix">
                            <img src="sites/all/themes/md_boom_multi/images/avatar-1.jpg" alt="" />
                            <strong>Martin</strong>
                            <a href="#">www.apple.com</a>
                        </div><!--end:testimonial-author-->
                    </li>
                    <li class="clearfix">
                        <blockquote><i class="icon-quote-left icon-2x"></i>Lorem ipsum dolor sit amet, con sectetur adipiscing elit. Maecenas ultrices consectetur mattis. Fusce vitae sapien et risus condimentum scelerisque. Aliquam porta interdum...</blockquote>
                        <div class="testimonial-author clearfix">
                            <img src="sites/all/themes/md_boom_multi/images/avatar-1.jpg" alt="" />
                            <strong>Martin</strong>
                            <a href="#">www.apple.com</a>
                        </div><!--end:testimonial-author-->
                    </li>
                </ul><!--end:slides-->
            </div><!--end:flexslider-->
        </div><!--end:testimonials-->
    </div><!--end:flx-one-two-->
    <div class="flx-one-two last">
        <h3>Testimonials 2</h3>
        <div class="testimonials">
            <div class="flexslider" id="testimonial-slider-2">
                <ul class="slides">
                    <li class="clearfix">
                        <blockquote><i class="icon-quote-left icon-2x"></i>Lorem ipsum dolor sit amet, con sectetur adipiscing elit. Maecenas ultrices consectetur mattis. Fusce vitae sapien et risus condimentum scelerisque. Aliquam porta interdum...</blockquote>
                        <div class="testimonial-author clearfix">
                            <strong>Martin</strong>
                            <a href="#">www.apple.com</a>
                        </div><!--end:testimonial-author-->
                    </li>
                    <li class="clearfix">
                        <blockquote><i class="icon-quote-left icon-2x"></i>Lorem ipsum dolor sit amet, con sectetur adipiscing elit. Maecenas ultrices consectetur mattis. Fusce vitae sapien et risus condimentum scelerisque. Aliquam porta interdum...</blockquote>
                        <div class="testimonial-author clearfix">
                            <strong>Martin</strong>
                            <a href="#">www.apple.com</a>
                        </div><!--end:testimonial-author-->
                    </li>
                </ul><!--end:slides-->
            </div><!--end:flexslider-->
        </div><!--end:testimonials-->
    </div><!--end:flx-one-two-->
    <div class="clear"></div>
    <div class="flx-button-box">
        <h3>Buttons</h3>
        <p>
            <a href="#" class="flx-orange-button flx-button">Orange button</a>
            <a href="#" class="flx-gray-button flx-button">Gray button</a>
            <a href="#" class="flx-black-button flx-button">Black button</a>
            <a href="#" class="flx-green-button flx-button">Green button</a>
            <a href="#" class="flx-red-button flx-button">Red button</a>
            <a href="#" class="flx-blue-button flx-button">Blue button</a>
        </p>
        <p>
            <a href="#" class="flx-orange-button flx-button medium">Orange button</a>
        </p>
        <p>
            <a href="#" class="flx-orange-button flx-button large">Orange button</a>
        </p>
    </div><!--end:flx-button-box-->
    <div class="flx-one-third">
        <h3>Dropdown style 1</h3>
        <div id="dd-2" class="wrapper-dropdown-2" tabindex="1">Sign in with
            <ul class="dropdown">
                <li><a href="#"><i class="icon-twitter icon-large"></i>Twitter</a></li>
                <li><a href="#"><i class="icon-github icon-large"></i>Github</a></li>
                <li><a href="#"><i class="icon-facebook icon-large"></i>Facebook</a></li>
            </ul>
        </div>
    </div><!--end:flx-one-third-->
    <div class="flx-one-third">
        <h3>Dropdown style 2</h3>
        <div id="dd-3" class="wrapper-dropdown-3" tabindex="1">
            <span>Transport</span>
            <ul class="dropdown">
                <li><a href="#"><i class="icon-envelope icon-large"></i>Classic mail</a></li>
                <li><a href="#"><i class="icon-truck icon-large"></i>UPS Delivery</a></li>
                <li><a href="#"><i class="icon-plane icon-large"></i>Private jet</a></li>
            </ul>
        </div>
    </div><!--end:flx-one-third-->
    <div class="flx-one-third last">
        <h3>Dropdown style 3</h3>
        <div id="dd-5" class="wrapper-dropdown-5" tabindex="1">John Doe
            <ul class="dropdown">
                <li><a href="#"><i class="icon-user"></i>Profile</a></li>
                <li><a href="#"><i class="icon-cog"></i>Settings</a></li>
                <li><a href="#"><i class="icon-remove"></i>Log out</a></li>
            </ul>
        </div>
    </div><!--end:flx-one-third-->
    <div class="clear"></div>
    <div class="flx-full-width">
        <h3>Tabs 1</h3>
        <div class="list-container-1">
            <ul class="tabs-1 clearfix">
                <li><a href="#tab-1-1">Tab one</a></li>
                <li><a href="#tab-1-2">Tab two</a></li>
                <li><a href="#tab-1-3">Tab three</a></li>
            </ul><!--tabs-1-->
        </div><!--list-container-1-->
        <div class="tab-container-1">
            <div id="tab-1-1" class="tab-content-1">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
            </div><!--tab-content-1-->
            <div id="tab-1-2" class="tab-content-1">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
            </div><!--tab-content-1-->
            <div id="tab-1-3" class="tab-content-1">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
            </div><!--tab-content-1-->
        </div><!--tab-container-1-->
    </div><!--end:flx-full-width-->
    <div class="flx-full-width">
        <h3>Tabs 2</h3>
        <div class="list-container-2">
            <ul class="tabs-2 clearfix">
                <li><a href="#tab-2-1">Tab one</a></li>
                <li><a href="#tab-2-2">Tab two</a></li>
                <li><a href="#tab-2-3">Tab three</a></li>
            </ul><!--tabs-2-->
        </div><!--list-container-2-->
        <div class="tab-container-2">
            <div id="tab-2-1" class="tab-content-2">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor.</p>
            </div><!--tab-content-2-->
            <div id="tab-2-2" class="tab-content-2">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor.</p>
            </div><!--tab-content-2-->
            <div id="tab-2-3" class="tab-content-2">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor.</p>
            </div><!--tab-content-2-->
        </div><!--tab-container-2-->
    </div><!--end:flx-full-width-->
    <div class="flx-full-width">
        <h3>Tabs 3</h3>
        <div class="list-container-4">
            <ul class="tabs-4 clearfix">
                <li><a href="#tab-4-1">Tab one</a></li>
                <li><a href="#tab-4-2">Tab two</a></li>
                <li><a href="#tab-4-3">Tab three</a></li>
            </ul><!--tabs-4-->
        </div><!--list-container-4-->
        <div class="tab-container-4">
            <div id="tab-4-1" class="tab-content-4">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor.</p>
            </div><!--tab-content-4-->
            <div id="tab-4-2" class="tab-content-4">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor.</p>
            </div><!--tab-content-4-->
            <div id="tab-4-3" class="tab-content-4">
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor.</p>
            </div><!--tab-content-4-->
        </div><!--tab-container-4-->
    </div><!--end:flx-full-width-->
    <div class="flx-one-two">
        <h3>Toggle</h3>
        <ul id="toggle-view">
            <li>
                <span>+</span>
                <h3>Toggle title 1</h3>
                <div class="clear"></div>
                <div class="panel clearfix">
                    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                </div>
            </li>
            <li>
                <span>+</span>
                <h3>Toggle title 2</h3>
                <div class="clear"></div>
                <div class="panel clearfix">
                    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                </div>
            </li>
            <li>
                <span>+</span>
                <h3>Toggle title 3</h3>
                <div class="clear"></div>
                <div class="panel clearfix">
                    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                </div>
            </li>
        </ul><!--end:toggle-view-->
    </div><!--end:flx-one-two-->
    <div class="flx-one-two last">
        <h3>Accordion</h3>
        <div class="acc-wrapper">
            <div class="accordion-title">
                <h5><a href="#">Accordion title 1</a></h5>
            </div>
            <div class="accordion-container">
                Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset
            </div>
            <div class="accordion-title">
                <h5><a href="#">Accordion title 2</a></h5>
            </div>
            <div class="accordion-container">
                Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset
            </div>
            <div class="accordion-title">
                <h5><a href="#">Accordion title 3</a></h5>
            </div>
            <div class="accordion-container">
                Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset
            </div>
        </div><!--end:acc-wrapper-->
    </div><!--end:flx-one-two-->
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
