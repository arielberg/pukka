<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
    "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"
    <?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <?php
    print $styles;
    print $scripts;

    ?>
    <link rel="stylesheet" href="<?php print base_path().drupal_get_path('theme','md_boom_multi');?>/css/colors/<?php print theme_get_setting('skins','md_boom_multi')?>.css" type="text/css" id="colors" />
    <style type="text/css">
        <?php if (isset($googlewebfonts)): print $googlewebfonts; endif; ?>
        <?php if (isset($theme_setting_css)): print $theme_setting_css; endif; ?>
        <?php
        // custom typography
        if (isset($typography)): print $typography; endif;
        ?>

        <?php if (isset($custom_css)): print $custom_css; endif; ?>
    </style>
    <!-- Style
               ================================================== -->


    <?php if (isset($header_code)): print $header_code; endif;?>
</head>
<body class="
<?php
    if(current_path() == 'home_mega_slider_1'){
        print ' home-page';
    }
    elseif(current_path() == 'home_mega_slider_2'){
        print ' home-style-2';
    }
    elseif(current_path() == 'node/64'){
        print 'sub-page under-struction';
    }
    elseif(current_path() == 'node/759'){
        print 'sub-page moaadon';
    }
    else {
        print ' sub-page pf-list-style';
    }
    if(theme_get_setting('sites_layout','md_boom_multi') == 'boxed'){
        print ' flx-boxed';
    }?> <?php if(isset($basic_page)) {print $basic_page;} ?> <?php if(isset($sidebar_class)) {print $sidebar_class;}?>"
    <?php print $attributes;
?> >
<?php print $page_top; ?>
<?php print $page; ?>
<?php
print $page_bottom;
if ($footer_code): print $footer_code; endif;
?>
</body>

</html>
