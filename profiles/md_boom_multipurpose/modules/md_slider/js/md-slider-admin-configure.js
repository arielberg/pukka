/*------------------------------------------------------------------------
# MD Slider - March 18, 2013
# ------------------------------------------------------------------------
# Websites:  http://www.megadrupal.com -  Email: info@megadrupal.com
--------------------------------------------------------------------------*/

(function(e){e(function(){function t(t,n,r){var i='<div class="'+n+'wrap clearfix">';var s=0;for($i=0;$i<=r;$i++){s=e(t+" option:eq("+$i+")").val();if(s){i+='<div id="'+n+s+'" class="slitem"></div>'}}i+="</div>";e(t).parent().append(i);var o=e(t+" option[selected]").val();e("#"+n+o).addClass("selected");e("."+n+"wrap .slitem").each(function(){e(this).click(function(){e("."+n+"wrap .selected").removeClass("selected");e(this).addClass("selected");e(t+" option[selected]").removeAttr("selected");tmpindex=e(this).attr("id").replace(n,"");e(t+" option[value="+tmpindex+"]").attr("selected","selected")})});e(t).hide()}e("#edit-sls-ldbar").change(function(){var t=e("input:radio:checked",e(this)).val();switch(t){case"bar":e(".form-item-sls-pie-position").hide();e(".form-item-sls-bar-position").show();e(".form-item-sls-bar-direction").show();break;case"none":e(".form-item-sls-pie-position").hide();e(".form-item-sls-bar-position").hide();e(".form-item-sls-bar-direction").hide();break}}).trigger("change");e("#edit-sls-full-width").change(function(){if(e(this).is(":checked")){e(".form-item-sls-width label").text("Effect zone width");e(".form-item-sls-create-bg-imgstyle").hide()}else{e(".form-item-sls-width label").text("Width");e(".form-item-sls-create-bg-imgstyle").show()}}).trigger("change");e("#md-slider-configure-form").submit(function(){if(e("#edit-sls-full-width").is(":checked")){e("#edit-sls-create-bg-imgstyle").attr("checked",false)}});e("#edit-show-bullet").change(function(){if(e(this).is(":checked")){e(".form-item-bullet-position").show()}else{e(".form-item-bullet-position").hide()}e("#edit-show-thumbnail").trigger("change")}).trigger("change");e("#edit-show-thumbnail").change(function(){if(e(this).is(":checked")){if(e("#edit-show-bullet").is(":checked")){e(".form-item-thumbnail-position").hide()}else{e(".form-item-thumbnail-position").show()}e(".form-item-sls-thumb-width").show();e(".form-item-sls-thumb-height").show()}else{if(e("#edit-show-bullet").is(":checked")){e(".form-item-thumbnail-position").hide()}else{e(".form-item-thumbnail-position").show()}e(".form-item-thumbnail-position").hide();e(".form-item-sls-thumb-width").hide();e(".form-item-sls-thumb-height").hide()}}).trigger("change");t("#edit-thumbnail-position","tp",4);t("#edit-border-style","bs",10);t("#edit-dropshadow-style","ds",6)})})(jQuery)