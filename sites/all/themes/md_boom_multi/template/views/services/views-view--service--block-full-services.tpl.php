<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>


    <section class="flx-intro-2">
        <h2 class="view-<?php print $view_name?>-title"><?php print $view_human_name;?></h2>
        <h5 class="flx-intro-excerpt"><span class="view-<?php print $view_name;?>-description"><?php if($view_description): print $view_description; endif?></span></h5>
    </section>
    <ul class="flx-services clearfix">
        <li class="clearfix"><p class="flx-skill-title"><?php print $skill_name;?></p>
            <div class="progress-bar blue animate"> <span class="progress-<?php print $skill_level;?>" style="width: <?php print $skill_level;?>%"><span></span></span></div>
            <p class="flx-skill-number"><?php print $skill_level;?>%</p>
        </li>
    </ul><!--end:flx-services-->
