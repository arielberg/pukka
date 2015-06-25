jQuery(document).ready(function($){
    var headerStyle = Drupal.settings.headerStyle;
    var widgetStyle = Drupal.settings.widgetStyle;
    var sitesLayout = Drupal.settings.sitesLayout;
    var sitesSkin = Drupal.settings.sitesSkin;
    var currentMenuActive = jQuery("ul.main-menu").find("li.menuparent.active-trail").attr("id");
    md_boom_multi_style_switch_INIT();
    // Switcher Layout
    jQuery('#theme-option').animate({
        left: '-307px'
    });
    jQuery('.m-open-close-button').live('click',function () {
        var mobile_tool = jQuery('#m-theme-option .theme-opt-wrapper');
        if (mobile_tool.is(':hidden')) {
            mobile_tool.slideDown('300');
        } else {
            mobile_tool.slideUp('300');
        }
        jQuery(this).toggleClass('active');
    });
    $("#md-boom-multi-widget-style").live('change', function() {
        $(this).attr("selected","selected");
        $('#right-sidebar aside.widget').removeClass('w-style1 w-style2 w-style3 w-style4 w-style5').addClass(this.value);
        $('#left-sidebar aside.widget').removeClass('w-style1 w-style2 w-style3 w-style4 w-style5').addClass(this.value);
    });
    $("#md-boom-multi-header-style").live('change',function(){
        var current_path = window.location.href;
        current_path = current_path.substring(0, Math.max(current_path.lastIndexOf("/"), current_path.lastIndexOf("\\\\")));

        jQuery.ajax({
            type:'POST',
            url: Drupal.settings.basePath + '?q=header_demo',
            async:false,
            data: {header:this.value},
            beforeSend:function(XMLHttpRequest, settings){

            },
            complete:function(XMLHttpRequest, textStatus){},
            success : function(data){
                jQuery('#flx-header').remove();
                jQuery('.flx-wrapper').prepend(data);
                md_boom_multi_style_switch_INIT();
                $(this).attr("selected","selected");
                $(".main-menu li#"+currentMenuActive+"").addClass("active-trail");
                if(1 === jQuery('.main-menu').length){
                    md_boom_multi_mobile_menu('.main-menu','#mobile-menu-bar .flx-mobile-menu', 'mobile-menu', 'mobile-menu');
                }
            },
            error : function(XMLHttpRequest, textStatus, errorThrown) {}
        });
    });
    $("[name=flx-select-layout-choice]").live('click',function(){
        var val = this.value;
        if('wide' == val){
            jQuery('body').removeClass('flx-boxed');
            jQuery('.flx-select-pattern').hide();
            jQuery('body').css('background-image','').css('background-repeat','').css('background-color','#ffffff');
        }else{
            jQuery('body').addClass('flx-boxed');
            jQuery('.flx-select-pattern').show();
            jQuery('body').css('background-image',jQuery('.choose-pattern a.active').css('backgroundImage'));
            jQuery('body').css('background-repeat','repeat');
        }
        jQuery(window).trigger('resize');
    });
    $(".choose-pattern a:not.flx-video-bg :not.flx-slider-bg").live('click',function(){
        var pattern = jQuery(this).css('backgroundImage');
        jQuery('body').css('background-image',pattern);
        jQuery('body').css('background-repeat','repeat');
        jQuery(this).parent().parent().find('a').removeClass('active');
        jQuery(this).addClass('active');
    })

    $("#md-boom-multi-theme-option-reset").live('click',function(){
        md_boom_multi_style_switch_INIT();
        $('#right-sidebar aside.widget').removeClass('w-style1 w-style2 w-style3 w-style4 w-style5').addClass('w-style1');
        $('#left-sidebar aside.widget').removeClass('w-style1 w-style2 w-style3 w-style4 w-style5').addClass('w-style1');

        var current_path = window.location.href;
        current_path = current_path.substring(0, Math.max(current_path.lastIndexOf("/"), current_path.lastIndexOf("\\\\")));

        jQuery.ajax({
            type:'POST',
            url: Drupal.settings.basePath + '?q=header_demo',
            async:false,
            data: {header:"header1"},
            beforeSend:function(XMLHttpRequest, settings){

            },
            complete:function(XMLHttpRequest, textStatus){},
            success : function(data){
                jQuery('#flx-header').remove();
                jQuery('.flx-wrapper').prepend(data);
                $(this).attr("selected","selected");
                md_boom_multi_style_switch_INIT();
                if(1 === jQuery('.main-menu').length){
                    md_boom_multi_mobile_menu('.main-menu','#mobile-menu-bar .flx-mobile-menu', 'mobile-menu', 'mobile-menu');
                }
            },
            error : function(XMLHttpRequest, textStatus, errorThrown) {}
        });
        $("#flx-select-layout-wide").attr("checked","checked");
        $('body').removeClass('flx-boxed');
        $('.flx-select-pattern').hide();
        $('body').css('background-image','').css('background-repeat','').css('background-color','#ffffff');
        $(".choose-color a").removeClass("active");
        $(".choose-color a.default").addClass("active");
        $("#colors").attr("href", "sites/all/themes/md_boom_multi/css/colors/default.css");
    })
})
function md_boom_multi_style_switch_INIT(){

    var headerStyle = Drupal.settings.headerStyle;
    var widgetStyle = Drupal.settings.widgetStyle;
    var sitesLayout = Drupal.settings.sitesLayout;
    var sitesSkin = Drupal.settings.sitesSkin;
    jQuery(".choose-color a").removeClass('active');
    jQuery(".choose-color a."+sitesSkin).addClass('active');
    jQuery('#flx-select-layout-'+sitesLayout).attr("checked","checked");

    /* =========================================================
     ************************Sub menu****************************
     ============================================================ */

    jQuery(".main-menu > li").hover(function() {
        jQuery(this).find("ul").first().slideDown(100);
    }, function() {
        jQuery(this).find("ul").first().slideUp(100);
    });
    jQuery(".main-menu li ul li").hover(function() {
        jQuery(this).find("ul").first().toggle(100);
    });
    jQuery(".main-menu li ul li").each(function() {
        if(jQuery(this).has("ul").length > 0) {
            jQuery(this).addClass("menu-arrow")
        }
    });
    // Color Change
    jQuery("a.default" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/default.css");
        return false;
    });

    jQuery("a.blue" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/blue.css");
        return false;
    });

    jQuery("a.pink" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/pink.css");
        return false;
    });

    jQuery("a.green" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/green.css");
        return false;
    });

    jQuery("a.red" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/red.css");
        return false;
    });

    jQuery("a.gray" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/gray.css");
        return false;
    });

    jQuery("a.brown" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/brown.css");
        return false;
    });

    jQuery("a.violet" ).click(function(){
        jQuery("#colors" ).attr("href", "sites/all/themes/md_boom_multi/css/colors/violet.css");
        return false;
    });

    jQuery('.choose-color a').click (function(e){
        e.preventDefault();
        jQuery(this).parent().parent().find('a').removeClass('active');
        jQuery(this).addClass('active');
    });


    /* =========================================================
     ************Show / Hide Tool Option*************************
     ============================================================ */
    jQuery('.flx-menu-toggle').click(function () {
        var mobile_menu = jQuery('#toggle-view-menu');
        if (mobile_menu.is(':hidden')) {
            mobile_menu.slideDown('300');
            jQuery(this).children('span').html('-');
        } else {
            mobile_menu.slideUp('300');
            jQuery(this).children('span').html('+');
        }
        jQuery(this).toggleClass('active');
    });
    jQuery('.open-close-button').click(function(e){
        e.preventDefault();
        var div = jQuery('#theme-option');
        if (div.css('left') === '-307px') {
            jQuery('#theme-option').animate({
                left: '0px'
            });
        } else {
            jQuery('#theme-option').animate({
                left: '-307px'
            });
        }
    });
}

function md_boom_multi_choose_pattern_CLICK(obj){
        var pattern = obj.css('backgroundImage');
        jQuery('body').css('background-image',pattern);
        jQuery('body').css('background-repeat','repeat');
        obj.parent().parent().find('a').removeClass('active');
        obj.addClass('active');
}
    function md_boom_multi_header_style_ONCHANGE(dropdown,setting){
        if(dropdown != null && setting == null) {
            var header = dropdown.children("option").filter(":selected").val();
        }
        if(setting != null) {
            var header = setting;
        }
        var current_path = window.location.href;
        current_path = current_path.substring(0, Math.max(current_path.lastIndexOf("/"), current_path.lastIndexOf("\\\\")));

        jQuery.ajax({
            type:'POST',
            url: Drupal.settings.basePath + 'header_demo',
            async:false,
            data: {header:header},
            beforeSend:function(XMLHttpRequest, settings){

            },
            complete:function(XMLHttpRequest, textStatus){},
            success : function(data){
                jQuery('#flx-header').remove();
                jQuery('.flx-wrapper').prepend(data);
                md_boom_multi_style_switch_INIT();
                if(1 === jQuery('.main-menu').length){
                    md_boom_multi_mobile_menu('.main-menu','#mobile-menu-bar .flx-mobile-menu', 'mobile-menu', 'mobile-menu');
                }
            },
            error : function(XMLHttpRequest, textStatus, errorThrown) {}
        });
    }
    function md_boom_multi_widget_style_ONCHANGE(dropdown,setting){
        if(dropdown != null && setting == null) {
            var widget = dropdown.children("option").filter(":selected").val();
        }
        if(setting != null) {
            var widget = setting;
        }
        console.log(widget);
        jQuery("[name=md-boom-multi-widget-style] option").attr("selected",false);
        jQuery('#right-sidebar aside.widget').removeClass('w-style1 w-style2 w-style3 w-style4 w-style5').addClass(widget);
        jQuery('#left-sidebar aside.widget').removeClass('w-style1 w-style2 w-style3 w-style4 w-style5').addClass(widget);
    }

    function md_boom_multi_theme_option_reset_CLICK(){
        var headerStyle = Drupal.settings.headerStyle;
        var widgetStyle = Drupal.settings.widgetStyle;
        var sitesLayout = Drupal.settings.sitesLayout;
        var sitesSkin = Drupal.settings.sitesSkin;
        jQuery(".choose-color").find('a').removeClass('active');
        jQuery(".choose-color a."+sitesSkin).addClass('active');
        md_boom_multi_layout_CHANGE(sitesLayout);
        jQuery('#flx-select-layout-'+sitesLayout).attr("checked","checked");
        jQuery('.choose-pattern li a').removeClass('active');
        jQuery('.choose-pattern li a').first().addClass('active');
        md_boom_multi_widget_style_ONCHANGE(null,widgetStyle);
        md_boom_multi_header_style_ONCHANGE(null,headerStyle);
        return false;
    }




