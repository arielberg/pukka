function md_boom_multi_portfolio_detail_click(obj, nid, effect){
    var current_path = window.location.href;
    current_path = current_path.substring(0, Math.max(current_path.lastIndexOf("/"), current_path.lastIndexOf("\\\\")));
    if(!obj.hasClass('inprocess')){
        jQuery.ajax({
            type:'POST',
            url: current_path+ '/?q=ajax_node',
            async:false,
            data: {nodeid:nid},
            beforeSend:function(XMLHttpRequest, settings){
                obj.addClass('inprocess');
                jQuery('.pf-detail-box').html('<center>Loading...</center>');
                if(false == effect)
                    jQuery('.pf-detail-box').fadeTo("slow", 0.5);
            },
            complete:function(XMLHttpRequest, textStatus){},
            success : function(data){
                jQuery('.pf-detail-box').html(data);

                if(true == effect)
                    jQuery('.pf-detail-box').slideDown(500);
                else
                    jQuery('.pf-detail-box').fadeTo("slow", 1);

                obj.removeClass('inprocess');


            },
            error : function(XMLHttpRequest, textStatus, errorThrown) {}
        });
    }
    return true;
}
function md_boom_multi_portfolio_hide_click(obj){
    obj.remove();
    jQuery('.pf-detail-box').slideUp(500);
    return false;
}
jQuery(document).ready(function($) {
    /* =========================================================
     ************ Add class sidebar search *********************
     ==========================================================*/
    if($("body").hasClass("left-sidebar") || $("body").hasClass("right-sidebar")) {
        $(".span3 #search-block-form .form-item input").addClass('sidebar-search');
        $(".span3 #search-block-form .form-item input").removeClass('search-query');
        $(".span3 #search-block-form .form-actions input").addClass('sidebar-search');
        $(".span3 #search-block-form .form-actions input").removeClass('search-query');
        $(".span3 #search-block-form .form-actions input").removeAttr("src","value");
        $(".span3 #search-block-form .form-actions input").attr('id','');

    }
        /* =========================================================
     *************** dushot test*********************
     ==========================================================*/
        if ($('#block-block-7').length) {
            $('body').addClass("dusha-test");
        }
        if ($('#block-block-8').length) {
            $('body').addClass("dusha-test");
        }        
        if ($('#block-block-9').length) {
            $('body').addClass("dusha-test");
        }
        if ($('#node-1434').length) {
            $('body').addClass("node-1434");
        }

        if ($('div.node-dushot-test').length) {
            $sum1=0;
            $sum2=0;
            $sum3=0;
            $(".node-content .field-item").each(function(){
                if($.trim($(this).html())=='1'){
                    $sum1++;
                } 
                if($.trim($(this).html())=='2'){
                    $sum2++;
                } 
                if($.trim($(this).html())=='3'){
                    $sum3++;
                }
            });
            if (($sum1>=$sum2) && ($sum1>=$sum3)){
                    window.location.href = "/node/849/vata"; 
           }
           else if (($sum2>=$sum1) && ($sum2>=$sum3)){
                    window.location.href = "/node/847/pitta"; 
           }
            else if (($sum3>=$sum1) && ($sum3>=$sum2)){
                    window.location.href = "/node/848/kapha"; 
           }
        }
        



    /* =========================================================
     *************** Fix width audio html5 *********************
     ==========================================================*/
    $(".flx-entry-thumb audio").css ('width','100%');
    /* =========================================================
     ************ Remove classes with basic page*****************
     ==========================================================*/
    if($("body").hasClass("basic-page")) {
        $(".span9").removeClass("span9");
        $("#left-sidebar").css ('display','none');
    }
    if(1 === jQuery('.main-menu').length){
        md_boom_multi_mobile_menu('.main-menu','#mobile-menu-bar .flx-mobile-menu', 'mobile-menu', 'mobile-menu');
    }
});

/* =========================================================
 ***********************Background animate ******************
 ==========================================================*/
var scrollSpeed = 50;
// set the default position
var current = 1;
// set the direction, direction can be either "v", "h" (vertical or horizontal)
var direction = 'h';
function scrollBg(){
    // 1 pixel row at a time, change to -1 for other direction
    current -= 1;
    // set div
    jQuery('#bg-animate').css("backgroundPosition", (direction == 'h') ? current+"px 0" : "0 " + current+"px");
}
setInterval("scrollBg()", scrollSpeed);
/* =========================================================
 *******************Mobile Menu***********************
 ============================================================ */
function md_boom_multi_mobile_menu(menu_id, mobile_menu_wrap, mobile_menu_id, mobile_menu_class){
    jQuery(mobile_menu_wrap).html('');
    jQuery("<select>").appendTo(mobile_menu_wrap);
    jQuery(mobile_menu_wrap).find('select').first().attr("id",mobile_menu_id).attr("class",mobile_menu_class);

    jQuery(menu_id).find('a').each(function() {
        var el = jQuery(this);
        var selected = '';
        if (el.parent().hasClass('active') == true){
            selected = "selected='selected'";
        }
        var depth = el.parents("ul").size();
        var space = '';
        if(depth > 1){
            for(i=1; i<depth; i++){
                space += '&nbsp;&nbsp;-&nbsp;&nbsp;';
            }
        }
        jQuery("<option "+selected+" value='"+el.attr("href")+"'>"+space+el.text()+"</option>").appendTo(jQuery('#'+mobile_menu_id));
    });

    jQuery('#'+mobile_menu_id).change(function() {
        window.location = jQuery(this).find("option:selected").val();
    });
}
/* =========================================================
 *******************Mobile Menu sticky***********************
 ============================================================ */
jQuery(function () {
    if(jQuery('#mobile-menu-bar').length > 1){
        var mobile_menu_offset_top = jQuery('#mobile-menu-bar').offset().top;
        jQuery(window).scroll(function () {
            if (jQuery(this).scrollTop() > mobile_menu_offset_top) {
                jQuery('#mobile-menu-bar').addClass('menu-bar-fixed');
            } else {
                jQuery('#mobile-menu-bar').removeClass('menu-bar-fixed');
            }
        });
    }
});
/* =========================================================
 *****************Sliding Text and Icon Menu*****************
 ==========================================================*/
jQuery(function() {
  jQuery('#sti-menu').iconmenu();
});
jQuery(document).ready(function($){
    /* =========================================================
     ************************ jquery cycle2 *************************
     ============================================================ */
    jQuery('#flx-service-slider').cycle();
    /*----------------------- Footer Column 1 No margin ---------------------*/
    $('#flx-footer .row-fluid .block:first-child').find('.span4').addClass('no-margin');
    $('#flx-footer .row-fluid .block:first-child').find('.span2').addClass('no-margin');
    /* =========================================================
     ***********************Isotope**************************
     ============================================================ */
    $.Isotope.prototype._getCenteredMasonryColumns = function() {
        this.width = this.element.width();

        var parentWidth = this.element.parent().width();

        // i.e. options.masonry && options.masonry.columnWidth

        var colW = this.options.masonry && this.options.masonry.columnWidth ||
            // or use the size of the first item
            this.$filteredAtoms.outerWidth(true) ||
            // if there's no items, use size of container
            parentWidth;

        var cols = Math.floor( parentWidth / colW );
        cols = Math.max( cols, 1 );

        // i.e. this.masonry.cols = ....
        this.masonry.cols = cols;
        // i.e. this.masonry.columnWidth = ...
        this.masonry.columnWidth = colW;
    };

    $.Isotope.prototype._masonryReset = function() {
        // layout-specific props
        this.masonry = {};
        // FIXME shouldn't have to call this again
        this._getCenteredMasonryColumns();
        var i = this.masonry.cols;
        this.masonry.colYs = [];
        while (i--) {
            this.masonry.colYs.push( 0 );
        }
    };

    $.Isotope.prototype._masonryResizeChanged = function() {
        var prevColCount = this.masonry.cols;
        // get updated colCount
        this._getCenteredMasonryColumns();
        return ( this.masonry.cols !== prevColCount );
    };

    $.Isotope.prototype._masonryGetContainerSize = function() {
        var unusedCols = 0,
            i = this.masonry.cols;
        // count unused columns
        while ( --i ) {
            if ( this.masonry.colYs[i] !== 0 ) {
                break;
            }
            unusedCols++;
        }

        return {
            height : Math.max.apply( Math, this.masonry.colYs ),
            // fit container to columns that have been used;
            width : (this.masonry.cols - unusedCols) * this.masonry.columnWidth
        };
    };

    jQuery(function(){

        var $container = jQuery('#container');
        var $containerSmall = jQuery('#content-small');

        // add randomish size classes
        $container.find('.element').each(function(){
            var $this = jQuery(this),
                number = parseInt( $this.find('.number').text(), 10 );
            if ( number % 7 % 2 === 1 ) {
                $this.addClass('width2');
            }
            if ( number % 3 === 0 ) {
                $this.addClass('height2');
            }
            if ( number % 7 === 0 ) { //Rare because it picks random number from 1 to 11 and only 7 matches criteria
                $this.addClass('width3');
                $this.addClass('height2');
            }
        });

        // center images inside elements
        function centerIsotypeImages(){
            jQuery('.element').each(function(){
                var $this = jQuery(this);
                if($this.find('img').get(0) === undefined){ return; }
                var cont_ratio = $this.width() / $this.height();
                var img_ratio = $this.find('img').get(0).width / $this.find('img').get(0).height;

                if(cont_ratio <= img_ratio){
                    $this.find('img').css({ 'width' : 'auto', 'height' : '100%', 'top' : 0 }).css({ 'left' : ~(($this.find('img').width()-$this.width())/2)+1 });
                    $this.find('img').stop(true, true).fadeIn(200);
                    $this.find('img').addClass('pf-img-visible');
                }else{
                    $this.find('img').css({ 'width' : '100%', 'height' : 'auto', 'left' : 0 }).css({ 'top' : ~(($this.find('img').height()-$this.height())/2)+1 });
                    $this.find('img').stop(true, true).fadeIn(200);
                    $this.find('img').addClass('pf-img-visible');
                }
            });
        }

        jQuery(".pf-img").one("load",function(){
            var $this = jQuery(this);
            var cont_ratio = $this.parent().width() / $this.parent().height();
            var img_ratio = $this.get(0).width / $this.get(0).height;
            if(cont_ratio <= img_ratio){
                $this.css({ 'width' : 'auto', 'height' : '100%', 'top' : 0 }).css({ 'left' : ~(($this.width()-$this.parent().width())/2)+1 });
                $this.addClass('pf-img-visible');
            }else{
                $this.css({ 'width' : '100%', 'height' : 'auto', 'left' : 0 }).css({ 'top' : ~(($this.height()-$this.parent().height())/2)+1 });
                $this.addClass('pf-img-visible');
            }
        });

        $container.isotope({
            itemSelector : '.element',
            masonry : {
                //columnWidth : 120
                columnWidth : 5,
                gutterWidth: 5
            },
            masonryHorizontal : {
                rowHeight: 120
            },
            cellsByRow : {
                columnWidth : 240,
                rowHeight : 240
            },
            cellsByColumn : {
                columnWidth : 240,
                rowHeight : 240
            },
            getSortData : {
                symbol : function( $elem ) {
                    return $elem.attr('data-symbol');
                },
                category : function( $elem ) {
                    return $elem.attr('data-category');
                },
                number : function( $elem ) {
                    return parseInt( $elem.find('.number').text(), 10 );
                },
                weight : function( $elem ) {
                    return parseFloat( $elem.find('.weight').text().replace( /[\(\)]/g, '') );
                },
                name : function ( $elem ) {
                    return $elem.find('.name').text();
                }
            }
        });


        var $optionSets = jQuery('#options .option-set'),
            $optionLinks = $optionSets.find('a');

        $optionLinks.click(function(){
            var $this = jQuery(this);
            // don't proceed if already selected
            if ( $this.hasClass('selected') ) {
                return false;
            }
            var $optionSet = $this.parents('.option-set');
            $optionSet.find('.selected').removeClass('selected');
            $this.addClass('selected');

            // make option object dynamically, i.e. { filter: '.my-filter-class' }
            var options = {},
                key = $optionSet.attr('data-option-key'),
                value = $this.attr('data-option-value');
            // parse 'false' as false boolean
            value = value === 'false' ? false : value;
            options[ key ] = value;
            if ( key === 'layoutMode' && typeof changeLayoutMode === 'function' ) {
                // changes in layout modes need extra logic
                changeLayoutMode( $this, options )
            } else {
                // otherwise, apply new options
                $container.isotope( options );
            }

            return false;
        });



        // change layout
        var isHorizontal = false;
        function changeLayoutMode( $link, options ) {
            var wasHorizontal = isHorizontal;
            isHorizontal = $link.hasClass('horizontal');

            if ( wasHorizontal !== isHorizontal ) {
                // orientation change
                // need to do some clean up for transitions and sizes
                var style = isHorizontal ?
                { height: '80%', width: $container.width() } :
                { width: 'auto' };
                // stop any animation on container height / width
                $container.filter(':animated').stop();
                // disable transition, apply revised style
                $container.addClass('no-transition').css( style );
                setTimeout(function(){
                    $container.removeClass('no-transition').isotope( options );
                }, 100 )
            } else {
                $container.isotope( options );
            }
        }


        // toggle variable sizes of all elements
        jQuery('#toggle-sizes').find('a').click(function(){
            if(jQuery(this).hasClass('toggle-selected')){ return false; }
            jQuery('#toggle-sizes').find('a').removeClass('toggle-selected');
            jQuery(this).addClass('toggle-selected');
            if(!jQuery('#toggle-sizes a:first-child').hasClass('toggle-selected')){ $container.find('.element').addClass('element-small'); }else{ $container.find('.element').removeClass('element-small'); }
            $container.find('img').fadeOut(0);
            $container
                .toggleClass('variable-sizes')
                .isotope('reLayout');
            centerIsotypeImages();
            return false;
        });


        jQuery('#insert a').click(function(){
            var $newEls = jQuery( fakeElement.getGroup() );
            $container.isotope( 'insert', $newEls );

            return false;
        });

        jQuery('#append a').click(function(){
            var $newEls = jQuery( fakeElement.getGroup() );
            $container.append( $newEls ).isotope( 'appended', $newEls );

            return false;
        });


        var $sortBy = jQuery('#sort-by');
        jQuery('#shuffle a').click(function(){
            $container.isotope('shuffle');
            $sortBy.find('.selected').removeClass('selected');
            $sortBy.find('[data-option-value="random"]').addClass('selected');
            return false;
        });
/* =========================================================
 ***********************Flickr Feed**************************
 ==========================================================*/
    var flickrID = Drupal.settings.flickrID;
    var flickrNum = Drupal.settings.flickrNum;
    if(flickrID != null && flickrNum !=null) {
        jQuery('#flickr-feed-1').jflickrfeed({
            limit: flickrNum,
            qstrings: {
                id: flickrID
            },
            itemTemplate:
                '<li class="flickr-badge-image">' +
                    '<a rel="prettyPhoto[kopa-flickr]" href="{{image}}" title="{{title}}">' +
                    '<img src="{{image_s}}" alt="{{title}}" width="60px" heigth="60px" />' +
                    '</a>' +
                    '</li>'
        }, function(data) {
            jQuery("a[rel^='prettyPhoto']").prettyPhoto({
                show_title: false,
                deeplinking:false
            }).mouseenter(function(){
                    jQuery(this).find('img').fadeTo(500, 0.6);
                }).mouseleave(function(){
                    jQuery(this).find('img').fadeTo(400, 1);
                });
        });
    }

    /* =========================================================
     ************************Alert box***************************
     ========================================================= */
    jQuery(".alert-close-info").click(function(){
        jQuery(".alert-box-info").fadeOut("slow");
        return false;
    });

    jQuery(".alert-close-success").click(function(){
        jQuery(".alert-box-success").fadeOut("slow");
        return false;
    });

    jQuery(".alert-close-warning").click(function(){
        jQuery(".alert-box-warning").fadeOut("slow");
        return false;
    });

    jQuery(".alert-close-error").click(function(){
        jQuery(".alert-box-error").fadeOut("slow");
        return false;
    });
    /* =========================================================
     *******************Logo Client hover************************
     ============================================================ */
    var flx_logo = jQuery("#flx-slides li");
    if(flx_logo.length > 0){
        flx_logo.mouseenter(function(){
            jQuery(this).find('.flx-logo-default').first().fadeTo(300, 0);
            jQuery(this).find('.flx-logo-hover').first().fadeTo(300, 1);
        }).mouseleave(function(){
                jQuery(this).find('.flx-logo-default').first().fadeTo(300, 1);
                jQuery(this).find('.flx-logo-hover').first().fadeTo(300, 0);
            });
    }
    var flx_logo_2 = jQuery("#flx-slides-2 li");

    if(flx_logo_2.length > 0){
        flx_logo_2.mouseenter(function(){
            jQuery(this).find('.flx-logo-default').first().fadeTo(300, 0);
            jQuery(this).find('.flx-logo-hover').first().fadeTo(300, 1);
        }).mouseleave(function(){
                jQuery(this).find('.flx-logo-default').first().fadeTo(300, 1);
                jQuery(this).find('.flx-logo-hover').first().fadeTo(300, 0);
            });
    }
    /* =========================================================
     ******************Social icons hover************************
     ============================================================ */

    jQuery(".about-social-link li").mouseenter(function(){
        jQuery(this).find('a').fadeTo(300, 0);
    }).mouseleave(function(){
            jQuery(this).find('a').fadeTo(300, 1);
        });
    /* =========================================================
     ****************************Tabs****************************
     ============================================================ */
    if( jQuery(".tab-content-1").length > 0){
        //Default Action Product Tab
        jQuery(".tab-content-1").hide(); //Hide all content
        jQuery("ul.tabs-1 li:first").addClass("active").show(); //Activate first tab
        jQuery(".tab-content-1:first").show(); //Show first tab content
        //On Click Event Product Tab
        jQuery("ul.tabs-1 li").click(function() {
            jQuery("ul.tabs-1 li").removeClass("active"); //Remove any "active" class
            jQuery(this).addClass("active"); //Add "active" class to selected tab
            jQuery(".tab-content-1").hide(); //Hide all tab content
            var activeTab = jQuery(this).find("a").attr("href"); //Find the rel attribute value to identify the active tab + content
            jQuery(activeTab).fadeIn(); //Fade in the active content
            return false;

        });
    }

    if( jQuery(".tab-content-2").length > 0){
        //Default Action Product Tab
        jQuery(".tab-content-2").hide(); //Hide all content
        jQuery("ul.tabs-2 li:first").addClass("active").show(); //Activate first tab
        jQuery(".tab-content-2:first").show(); //Show first tab content
        //On Click Event Product Tab
        jQuery("ul.tabs-2 li").click(function() {
            jQuery("ul.tabs-2 li").removeClass("active"); //Remove any "active" class
            jQuery(this).addClass("active"); //Add "active" class to selected tab
            jQuery(".tab-content-2").hide(); //Hide all tab content
            var activeTab = jQuery(this).find("a").attr("href"); //Find the rel attribute value to identify the active tab + content
            jQuery(activeTab).fadeIn(); //Fade in the active content
            return false;

        });
    }

    if( jQuery(".tab-content-3").length > 0){
        //Default Action Product Tab
        jQuery(".tab-content-3").hide(); //Hide all content
        jQuery("ul.tabs-3 li:first").addClass("active").show(); //Activate first tab
        jQuery(".tab-content-3:first").show(); //Show first tab content
        //On Click Event Product Tab
        jQuery("ul.tabs-3 li").click(function() {
            var CurrentPosition = jQuery(this).position();
            var NewTop = CurrentPosition.top;
            jQuery(".tab-highlight").animate({
                "top":NewTop
            },"normal");
            jQuery("ul.tabs-3 li").removeClass("active"); //Remove any "active" class
            jQuery(this).addClass("active"); //Add "active" class to selected tab
            jQuery(".tab-content-3").hide(); //Hide all tab content
            var activeTab = jQuery(this).find("a").attr("href"); //Find the rel attribute value to identify the active tab + content
            jQuery(activeTab).fadeIn(); //Fade in the active content
            return false;

        });
    }

    if( jQuery(".tab-content-4").length > 0){
        //Default Action Product Tab
        jQuery(".tab-content-4").hide(); //Hide all content
        jQuery("ul.tabs-4 li:first").addClass("active").show(); //Activate first tab
        jQuery(".tab-content-4:first").show(); //Show first tab content
        //On Click Event Product Tab
        jQuery("ul.tabs-4 li").click(function() {
            var CurrentPosition = jQuery(this).position();
            var NewTop = CurrentPosition.top;
            jQuery(".tab-highlight").animate({
                "top":NewTop
            },"normal");
            jQuery("ul.tabs-4 li").removeClass("active"); //Remove any "active" class
            jQuery(this).addClass("active"); //Add "active" class to selected tab
            jQuery(".tab-content-4").hide(); //Hide all tab content
            var activeTab = jQuery(this).find("a").attr("href"); //Find the rel attribute value to identify the active tab + content
            jQuery(activeTab).fadeIn(); //Fade in the active content
            return false;

        });
    }
    /* =========================================================
     ************************Accordion***************************
     ========================================================= */
    (function() {
        var acc_wrapper=jQuery('.acc-wrapper');
        if (acc_wrapper.length > 0)
        {
            jQuery('.acc-wrapper .accordion-container').hide();
            jQuery.each(acc_wrapper, function(index, item){
                jQuery(this).find(jQuery('.accordion-title')).first().addClass('active').next().show();

            });
            jQuery('.accordion-title').on('click', function(e) {
                if( jQuery(this).next().is(':hidden') ) {
                    jQuery(this).parent().find(jQuery('.active')).removeClass('active').next().slideUp(300);
                    jQuery(this).toggleClass('active').next().slideDown(300);
                }
                e.preventDefault();
            });
        }
    })();

    /* =========================================================
     ***********************Toggle Boxes*************************
     ============================================================ */

    jQuery('#toggle-view li').click(function () {

        var text = jQuery(this).children('div.panel');

        if (text.is(':hidden')) {
            text.slideDown('300');
            jQuery(this).children('span').html('-');
        } else {
            text.slideUp('300');
            jQuery(this).children('span').html('+');
        }

    });

    jQuery('#toggle-view-menu li').click(function () {

        var text = jQuery(this).children('div.menu-panel');

        if (text.is(':hidden')) {
            text.slideDown('300');
            jQuery(this).children('span').html('-');
        } else {
            text.slideUp('300');
            jQuery(this).children('span').html('+');
        }

    });

    /* =========================================================
     **************************Fix CSS***************************
     ============================================================ */
    jQuery(".list-container-3 ul li:first-child").css({
        "border-top-width": "1px",
        "border-top-style":"solid",
        "border-top-color":"#d9d9d9"
    });
    jQuery(".list-container-3 ul li:last-child").css({
        "border-bottom-width": "1px",
        "border-bottom-style":"solid",
        "border-bottom-color":"#d9d9d9"
    });
    jQuery(".flx-boom .list-container-3 ul li:last-child").css({
        "border-bottom":"none"
    });
    jQuery(".flx-boom .list-container-3 ul li:first-child").css({
        "border-top":"none"
    });
    jQuery("#right-sidebar .widget .flx-categories li:first-child").css({
        "border-top-width": "1px",
        "border-top-style":"solid",
        "border-top-color":"#d9d9d9"
    });
    jQuery("#left-sidebar .widget .flx-categories li:first-child").css({
        "border-top-width": "1px",
        "border-top-style":"solid",
        "border-top-color":"#d9d9d9"
    });
    jQuery(".footer-menu li:last-child").css({
        "margin-right":0
    });

});
/* =========================================================
 ********************Testimonials****************************
 ========================================================= */
jQuery(function() {
    jQuery('#testimonial-slider-1').flexslider({
        animation: "slide",
        slideshow: true,
        controlsContainer: ".flexslider-container"
    });

    jQuery('#testimonial-slider-2').flexslider({
        animation: "slide",
        slideshow: true,
        controlsContainer: ".flexslider-container"
    });
});

jQuery(window).load(function() {
/* =========================================================
 ********************Slider Backgorund***********************
 ============================================================ */
    jQuery('.flexslider').flexslider({
        animation: "slide",
        slideshow: true,
        controlNav: true,
        start: function(slider){
            jQuery('body').removeClass('loading');
        }
    });
/* =========================================================
 **************************prettyPhoto***********************
 ============================================================ */
    jQuery("a[rel^='prettyPhoto']").prettyPhoto({
        overlay_gallery: false,
        "theme": 'light_rounded',
        keyboard_shortcuts: true,
        social_tools: false
    });
    /* =========================================================
     ******************Partners Logo Slider***********************
     ============================================================ */
    if( jQuery("#flx-slides li").length > 3){
        jQuery('#flx-slides').carouFredSel({
            responsive: true,
            prev: '#prev-1',
            next: '#next-1',
            width: '100%',
            scroll: 1,
            auto: false,
            items: {
                width: 160,
                height: 'auto',
                visible: {
                    min: 1,
                    max: 5
                }
            }
        });
    }

    if( jQuery("#flx-slides-2 li").length > 3){
        jQuery('#flx-slides-2').carouFredSel({
            responsive: true,
            prev: '#prev-3',
            next: '#next-3',
            width: '100%',
            scroll: 1,
            auto: false,
            items: {
                width: 160,
                height: 'auto',
                visible: {
                    min: 1,
                    max: 4
                }
            }
        });
    }

    if( jQuery(".list-carousel li").length > 3){
        jQuery('.list-carousel').each(function() {
            jQuery('ul#flx-slides-3', this).carouFredSel({
                responsive: true,
                prev: jQuery(".carousel-prev", this),
                next: jQuery(".carousel-next", this),
                width: '100%',
                scroll: 1,
                auto: false,
                items: {
                    width: 220,
                    height: 'auto',
                    visible: {
                        min: 1,
                        max: 4
                    }
                }
            });

        });

    }

    if( jQuery("#flx-team-slides li").length > 3){
        jQuery('#flx-team-slides').carouFredSel({
            responsive: true,
            prev: '#prev-2',
            next: '#next-2',
            width: '100%',
            scroll: 1,
            auto: false,
            items: {
                width: 230,
                height: 'auto',
                visible: {
                    min: 1,
                    max: 4
                }
            }
        });
    }

    if( jQuery("#flx-pf-slides li").length > 3){
        jQuery('#flx-pf-slides').carouFredSel({
            responsive: true,
            prev: '#prev-5',
            next: '#next-5',
            width: '100%',
            scroll: 1,
            auto: false,
            items: {
                width: 185,
                height: 'auto',
                visible: {
                    min: 1,
                    max: 4
                }
            }
        });
    }
    jQuery("#flx-footer .widget .tweet_list li:last-child").css({
        "margin-bottom":0,
        "padding-bottom":0,
        "border-bottom": "none"
    });

});
/* =========================================================
 ******************Img auto margin-top***********************
 ============================================================ */
function auto_margin_t(){
    var imgs = jQuery('a.auto-margin');
    var img_height;
    var div_height;
    jQuery.each( imgs, function( index, value){
        img_height = parseInt(jQuery(this).height());

        div_height = parseInt(jQuery(this).parent().height());

        number = div_height - img_height;
        number = parseInt( number / 2);

        jQuery(this).css('margin-top', number);
    });
    var imgs_service = jQuery('i.auto-margin-top');
    var img_service_height;
    var div_service_height;

    jQuery.each( imgs_service, function( index, value){
        img_service_height = parseInt(jQuery(this).height());

        div_service_height = parseInt(jQuery(this).parent().height());

        number = div_service_height - img_service_height;
        number = parseInt( number / 2);

        jQuery(this).css('margin-top', number);
    });
}
jQuery(document).ready(function(){
    auto_margin_t();
});
jQuery(window).resize(function() {
    auto_margin_t();

});

/* =========================================================
 *******************Scroll bar*******************************
 ============================================================ */
function flx_scroll_bar(){
    if (jQuery('#jp-container').length > 0) {
        // the element we want to apply the jScrollPane
        var $el					= jQuery('#jp-container').jScrollPane({
                verticalGutter 	: -16
            }),

        // the extension functions and options
            extensionPlugin 	= {

                extPluginOpts	: {
                    // speed for the fadeOut animation
                    mouseLeaveFadeSpeed	: 500,
                    // scrollbar fades out after hovertimeout_t milliseconds
                    hovertimeout_t		: 1000,
                    // if set to false, the scrollbar will be shown on mouseenter and hidden on mouseleave
                    // if set to true, the same will happen, but the scrollbar will be also hidden on mouseenter after "hovertimeout_t" ms
                    // also, it will be shown when we start to scroll and hidden when stopping
                    useTimeout			: true,
                    // the extension only applies for devices with width > deviceWidth
                    deviceWidth			: 980
                },
                hovertimeout	: null, // timeout to hide the scrollbar
                isScrollbarHover: false,// true if the mouse is over the scrollbar
                elementtimeout	: null,	// avoids showing the scrollbar when moving from inside the element to outside, passing over the scrollbar
                isScrolling		: false,// true if scrolling
                addHoverFunc	: function() {

                    // run only if the window has a width bigger than deviceWidth
                    if( jQuery(window).width() <= this.extPluginOpts.deviceWidth ) return false;

                    var instance		= this;

                    // functions to show / hide the scrollbar
                    jQuery.fn.jspmouseenter 	= jQuery.fn.show;
                    jQuery.fn.jspmouseleave 	= jQuery.fn.fadeOut;

                    // hide the jScrollPane vertical bar
                    var $vBar			= this.getContentPane().siblings('.jspVerticalBar').hide();

                    /*
                     * mouseenter / mouseleave events on the main element
                     * also scrollstart / scrollstop - @James Padolsey : http://james.padolsey.com/javascript/special-scroll-events-for-jquery/
                     */
                    $el.bind('mouseenter.jsp',function() {

                        // show the scrollbar
                        $vBar.stop( true, true ).jspmouseenter();

                        if( !instance.extPluginOpts.useTimeout ) return false;

                        // hide the scrollbar after hovertimeout_t ms
                        clearTimeout( instance.hovertimeout );
                        instance.hovertimeout 	= setTimeout(function() {
                            // if scrolling at the moment don't hide it
                            if( !instance.isScrolling )
                                $vBar.stop( true, true ).jspmouseleave( instance.extPluginOpts.mouseLeaveFadeSpeed || 0 );
                        }, instance.extPluginOpts.hovertimeout_t );


                    }).bind('mouseleave.jsp',function() {

                            // hide the scrollbar
                            if( !instance.extPluginOpts.useTimeout )
                                $vBar.stop( true, true ).jspmouseleave( instance.extPluginOpts.mouseLeaveFadeSpeed || 0 );
                            else {
                                clearTimeout( instance.elementtimeout );
                                if( !instance.isScrolling )
                                    $vBar.stop( true, true ).jspmouseleave( instance.extPluginOpts.mouseLeaveFadeSpeed || 0 );
                            }

                        });

                    if( this.extPluginOpts.useTimeout ) {

                        $el.bind('scrollstart.jsp', function() {

                            // when scrolling show the scrollbar
                            clearTimeout( instance.hovertimeout );
                            instance.isScrolling	= true;
                            $vBar.stop( true, true ).jspmouseenter();

                        }).bind('scrollstop.jsp', function() {

                                // when stop scrolling hide the scrollbar (if not hovering it at the moment)
                                clearTimeout( instance.hovertimeout );
                                instance.isScrolling	= false;
                                instance.hovertimeout 	= setTimeout(function() {
                                    if( !instance.isScrollbarHover )
                                        $vBar.stop( true, true ).jspmouseleave( instance.extPluginOpts.mouseLeaveFadeSpeed || 0 );
                                }, instance.extPluginOpts.hovertimeout_t );

                            });

                        // wrap the scrollbar
                        // we need this to be able to add the mouseenter / mouseleave events to the scrollbar
                        var $vBarWrapper	= jQuery('<div/>').css({
                            position	: 'absolute',
                            left		: $vBar.css('left'),
                            top			: $vBar.css('top'),
                            right		: $vBar.css('right'),
                            bottom		: $vBar.css('bottom'),
                            width		: $vBar.width(),
                            height		: $vBar.height()
                        }).bind('mouseenter.jsp',function() {

                                clearTimeout( instance.hovertimeout );
                                clearTimeout( instance.elementtimeout );

                                instance.isScrollbarHover	= true;

                                // show the scrollbar after 100 ms.
                                // avoids showing the scrollbar when moving from inside the element to outside, passing over the scrollbar
                                instance.elementtimeout	= setTimeout(function() {
                                    $vBar.stop( true, true ).jspmouseenter();
                                }, 100 );

                            }).bind('mouseleave.jsp',function() {

                                // hide the scrollbar after hovertimeout_t
                                clearTimeout( instance.hovertimeout );
                                instance.isScrollbarHover	= false;
                                instance.hovertimeout = setTimeout(function() {
                                    // if scrolling at the moment don't hide it
                                    if( !instance.isScrolling )
                                        $vBar.stop( true, true ).jspmouseleave( instance.extPluginOpts.mouseLeaveFadeSpeed || 0 );
                                }, instance.extPluginOpts.hovertimeout_t );

                            });

                        $vBar.wrap( $vBarWrapper );

                    }

                }

            },

        // the jScrollPane instance
            jspapi 			= $el.data('jsp');

        // extend the jScollPane by merging
        jQuery.extend( true, jspapi, extensionPlugin );
        jspapi.addHoverFunc();
    }

}
jQuery(document).ready(function(){
    flx_scroll_bar();
});
jQuery(window).resize(function() {
    flx_scroll_bar();
});
/* =========================================================
 ********************Comment Form Validation*****************
 ========================================================= */
if(jQuery("#comments-form").length > 0){
    // Validate the contact form
    jQuery('#comments-form').validate({

        // Add requirements to each of the fields
        rules: {
            name: {
                required: true,
                minlength: 2
            },
            email: {
                required: true,
                email: true
            },
            message: {
                required: true,
                minlength: 10
            }
        },

        // Specify what error messages to display
        // when the user does something horrid
        messages: {
            name: {
                required: "Please enter your name.",
                minlength: jQuery.format("At least {0} characters required.")
            },
            email: {
                required: "Please enter your email.",
                email: "Please enter a valid email."
            },
            message: {
                required: "Please enter a message.",
                minlength: jQuery.format("At least {0} characters required.")
            }
        },

        // Use Ajax to send everything to processForm.php
        submitHandler: function(form) {
            jQuery("#submit-comment").attr("value", "Sending...");
            jQuery(form).ajaxSubmit({
                success: function(responseText, statusText, xhr, $form) {
                    jQuery("#response").html(responseText).hide().slideDown("fast");
                    jQuery("#submit-comment").attr("value", "Send it");
                    jQuery(form).find("input[type=text]").val('');
                    jQuery(form).find("input[type=email]").val('');
                    jQuery(form).find("input[type=url]").val('');
                    jQuery(form).find("textarea").val('');
                }
            });
            return false;
        }
    });
}

if(jQuery("#contact-form").length > 0){
    // Validate the contact form
    jQuery('#contact-form').validate({

        // Add requirements to each of the fields
        rules: {
            name: {
                required: true,
                minlength: 2
            },
            email: {
                required: true,
                email: true
            },
            message: {
                required: true,
                minlength: 10
            }
        },

        // Specify what error messages to display
        // when the user does something horrid
        messages: {
            name: {
                required: "Please enter your name.",
                minlength: jQuery.format("At least {0} characters required.")
            },
            email: {
                required: "Please enter your email.",
                email: "Please enter a valid email."
            },
            message: {
                required: "Please enter a message.",
                minlength: jQuery.format("At least {0} characters required.")
            }
        },

        // Use Ajax to send everything to processForm.php
        submitHandler: function(form) {
            jQuery("#submit-contact").attr("value", "Sending...");
            jQuery(form).ajaxSubmit({
                success: function(responseText, statusText, xhr, $form) {
                    jQuery("#response").html(responseText).hide().slideDown("fast");
                    jQuery("#submit-contact").attr("value", "Send it");
                    jQuery(form).find("input[type=text]").val('');
                    jQuery(form).find("input[type=email]").val('');
                    jQuery(form).find("input[type=url]").val('');
                    jQuery(form).find("textarea").val('');
                }
            });
            return false;
        }
    });
}

// hide #back-top first
jQuery("#back-top").hide();

// fade in #back-top
jQuery(function () {
    jQuery(window).scroll(function () {
        if (jQuery(this).scrollTop() > 100) {
            jQuery('#back-top').fadeIn();
        } else {
            jQuery('#back-top').fadeOut();
        }
    });

    // scroll body to 0px on click
    jQuery('#back-top a').click(function () {
        jQuery('body,html').animate({
            scrollTop: 0
        }, 800);
        return false;
    });
});

/* =========================================================
 **************Switch portfolio view when responsive*********
 ==========================================================*/
function flx_portfolio_view(){
    var view_port_width = jQuery(window).width();
    if (view_port_width <= 980) {
        jQuery('#toggle-sizes').find('a').click();
    }
}

jQuery(document).ready(function(){
    flx_portfolio_view();
});
jQuery(window).resize(function() {
    flx_portfolio_view();
});


/* =========================================================
 *********************** Dropdown List **********************
 ==========================================================*/

})
function DropDown_3(el_3) {
    this.dd_3 = el_3;
    this.placeholder = this.dd_3.children('span');
    this.opts = this.dd_3.find('ul.dropdown > li');
    this.val = '';
    this.index = -1;
    this.initEvents();
}
DropDown_3.prototype = {
    initEvents : function() {
        var obj_3 = this;

        obj_3.dd_3.on('click', function(event){
            jQuery(this).toggleClass('active');
            return false;
        });

        obj_3.opts.on('click',function(){
            var opt = jQuery(this);
            obj_3.val = opt.text();
            obj_3.index = opt.index();
            obj_3.placeholder.text(obj_3.val);
        });
    },
    getValue : function() {
        return this.val;
    },
    getIndex : function() {
        return this.index;
    }
}

jQuery(function() {

    var dd_3 = new DropDown_3( jQuery('#dd-3') );

    jQuery(document).click(function() {
        // all dropdowns
        jQuery('.wrapper-dropdown-3').removeClass('active');
    });

});

function DropDown_2(el_2) {
    this.dd_2 = el_2;
    this.initEvents_2();
}
DropDown_2.prototype = {
    initEvents_2 : function() {
        var obj_2 = this;

        obj_2.dd_2.on('click', function(event){
            jQuery(this).toggleClass('active');
            event.stopPropagation();
        });
    }
}

jQuery(function() {

    var dd_2 = new DropDown_2( jQuery('#dd-2') );

    jQuery(document).click(function() {
        // all dropdowns
        jQuery('.wrapper-dropdown-2').removeClass('active');
    });

});

function DropDown_5(el_5) {
    this.dd_5 = el_5;
    this.initEvents_5();
}
DropDown_5.prototype = {
    initEvents_5 : function() {
        var obj_5 = this;
        obj_5.dd_5.on('click', function(event){
            jQuery(this).toggleClass('active');
            event.stopPropagation();
        });
    }
}

jQuery(function() {
    var dd_5 = new DropDown_5( jQuery('#dd-5') );
    jQuery(document).click(function() {
        // all dropdowns
        jQuery('.wrapper-dropdown-5').removeClass('active');
    });

});
function changeWrapperSize() {
    var wrapperHeight = jQuery(".flx-wrapper").height();
    var windowHeight = jQuery(window).height();
    if(wrapperHeight < windowHeight) {
        jQuery(".flx-wrapper").css({"height":""+windowHeight+"px"});
    }
}
jQuery(window).resize(function(){
    changeWrapperSize();
})
jQuery(document).ready(function($) {
    // Full height body
    changeWrapperSize();
    // Slider Background
    jQuery('#bg-slider').flexslider({
        animation: "fade",
        start: function(slider){
            jQuery('body').removeClass('loading');
        }
    });
    /* =========================================================
     ******************Progress bar jQuery plugin****************
     ==========================================================*/
    jQuery(function() {
        jQuery(".progress-bar > span").each(function() {
            jQuery(this)
                .data("origWidth", jQuery(this).width())
                .width(0)
                .animate({
                    width: jQuery(this).data("origWidth")
                }, 1200);
        });
    });
    /*--------------------- Background ----------------------*/
    jQuery('.flx-video-bg').click(function () {
        jQuery('#big-video-wrap').css({"display":"block"});
        jQuery('.bg-wrapper').css({"display":"none"});
    });

    jQuery('.flx-slider-bg').click(function () {
        jQuery('.bg-wrapper').css({"display":"block"});
        jQuery('#big-video-wrap').css({"display":"none"});
    });

    jQuery('.remove-video-bg').click(function () {
        jQuery('#big-video-wrap').css({"display":"none"});
        jQuery('.bg-wrapper').css({"display":"none"});
    });
    var BV;
    (function($) {
        var videoBG = Drupal.settings.videoBG;
        var current_path = window.location.href;
        current_path = current_path.substring(0, Math.max(current_path.lastIndexOf("/"), current_path.lastIndexOf("\\\\")));
        // initialize BigVideo
        BV = new $.BigVideo();
        BV.init();
        // Playlist button click starts video
        $('.playlist-btn').on('click', function(e) {
            e.preventDefault();
            BV.show($(this).attr('href'));
        })

        // Video Play/Pause toggle
        $('#video-toggle').on('click', function(e) {
            if (this.checked)   BV.getPlayer().play();
            else                BV.getPlayer().pause();
        })

        // set up navigation
        $('.nav-link').on('click',function(e){
            e.preventDefault();
            scrollToSection($(this).attr('href'));
        })

        function scrollToSection(id) {
            $(window)._scrollable().stop();
            $(window).scrollTo(id, {
                duration: 300,
                offset: -50,
                // easeInOutQuad
                easing: function(x,t,b,c,d){if((t/=d/2)<1) return c/2*t*t+b;return -c/2*((--t)*(t-2)-1)+b;}
            });
        }
    })(jQuery);

})


