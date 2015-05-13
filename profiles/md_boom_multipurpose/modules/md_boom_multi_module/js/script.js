/*------------------------------------------------------------------------
# MD Boom Multi - 1, 2014
# ------------------------------------------------------------------------
# Designed by Felixplus - Drupal theme by MegaDrupal
# Websites:  http://www.megadrupal.com -  Email: info@megadrupal.com
--------------------------------------------------------------------------*/


jQuery(document).ready(function($) {
        var twitter_account = Drupal.settings.twitter_account;
        var twitter_max = Drupal.settings.twitter_num;
        $(".twitter_inner").tweet({
        modpath: Drupal.settings.basePath + "?q=md_boom_multi_module/tweet",
        count: twitter_max,
        username: twitter_account,
        template: '<p class="rs tweet-mind">{text}</p><p class="rs timestamp">{time}</p><i class="icon iTwitter"></i>'
        });
});