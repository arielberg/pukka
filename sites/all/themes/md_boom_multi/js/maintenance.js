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
jQuery(document).ready(function($){
    $("#countdown").countdown({
            start_date : ""+ Drupal.settings.current_dt +"",
            event_date: ""+ Drupal.settings.event_dt +"",
            format: "on"
        },

        function() {
            // callback function
        });
});