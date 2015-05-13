<?php
/**
 * @file
 * md_boom_multipurpose_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function md_boom_multipurpose_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about_the_author';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'About the author';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About the author';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: משתמש: תמונה */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_class'] = 'author-name';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* שדה: משתמש: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* קריטריון לסידור: משתמש: תאריך יצירה */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: משתמש: פעיל */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: משתמש: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'blog',
  );
  $handler->display->display_options['argument_mode'] = 'token';
  $handler->display->display_options['default_argument'] = '[node:author:uid]';

  /* Display: Who am I? */
  $handler = $view->new_display('block', 'Who am I?', 'block_author');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Who am I?';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'הצג את ההמשך';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* הודעה בתחתית האתר: כללי: אזור טקסט */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="span8">
                        <div class="list-container-1 flx-mt-60">
                            <ul class="tabs-1 clearfix">
                                <li><a href="#tab-1-1">Services</a></li>
                                <li><a href="#tab-1-2">Support</a></li>
                                <li><a href="#tab-1-3">Features</a></li>
                            </ul><!--tabs-1-->
                        </div><!--list-container-1-->
                        <div class="tab-container-1">
                            <div id="tab-1-1" class="tab-content-1">                        
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                            </div><!--tab-content-1-->
                            <div id="tab-1-2" class="tab-content-1">                        
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                            </div><!--tab-content-1-->
                            <div id="tab-1-3" class="tab-content-1">                        
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                            </div><!--tab-content-1-->            
                        </div><!--tab-container-1-->
                    </div><!--end:span8-->           ';
  $handler->display->display_options['footer']['area']['format'] = 'pure_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: משתמש: תמונה */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_class'] = 'author-name';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_user_description']['id'] = 'field_user_description';
  $handler->display->display_options['fields']['field_user_description']['table'] = 'field_data_field_user_description';
  $handler->display->display_options['fields']['field_user_description']['field'] = 'field_user_description';
  $handler->display->display_options['fields']['field_user_description']['label'] = '';
  $handler->display->display_options['fields']['field_user_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_user_description']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_user_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_user_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_description']['element_class'] = 'flx-entry-content';
  $handler->display->display_options['fields']['field_user_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_description']['element_default_classes'] = FALSE;
  $translatables['about_the_author'] = array(
    t('Master'),
    t('About the author'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('EVA Field'),
    t('הכל'),
    t('Who am I?'),
    t('הצג את ההמשך'),
    t('<div class="span8">
                        <div class="list-container-1 flx-mt-60">
                            <ul class="tabs-1 clearfix">
                                <li><a href="#tab-1-1">Services</a></li>
                                <li><a href="#tab-1-2">Support</a></li>
                                <li><a href="#tab-1-3">Features</a></li>
                            </ul><!--tabs-1-->
                        </div><!--list-container-1-->
                        <div class="tab-container-1">
                            <div id="tab-1-1" class="tab-content-1">                        
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                            </div><!--tab-content-1-->
                            <div id="tab-1-2" class="tab-content-1">                        
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                            </div><!--tab-content-1-->
                            <div id="tab-1-3" class="tab-content-1">                        
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer pretium dignissim metus at tempus. Mauris in elit in urna bibendum tincidunt ac eget velit. Quisque eget metus sed mi sollicitudin pretium. Fusce et leo ligula. Aliquam blandit cursus luctus. Ut a metus dolor, vel egestas nulla. Aliquam ultrices pretium risus vel tempor. </p>
                            </div><!--tab-content-1-->            
                        </div><!--tab-container-1-->
                    </div><!--end:span8-->           '),
  );
  $export['about_the_author'] = $view;

  $view = new view();
  $view->name = 'basic_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Basic Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Basic Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Elements */
  $handler = $view->new_display('page', 'Elements', 'page_elements');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elements';
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $handler->display->display_options['path'] = 'elements';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Elements';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Typoghaphy */
  $handler = $view->new_display('page', 'Typoghaphy', 'page_typography');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Typography';
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $handler->display->display_options['path'] = 'typography';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Typography';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Pricing Table */
  $handler = $view->new_display('page', 'Pricing Table', 'page_pricing_table');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pricing Table';
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $handler->display->display_options['path'] = 'pricing_table';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Pricing Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Icons */
  $handler = $view->new_display('page', 'Icons', 'page_icons');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Icons';
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $handler->display->display_options['path'] = 'icons';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Icons';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['basic_pages'] = array(
    t('Master'),
    t('Basic Pages'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Elements'),
    t('Class aptent taciti sociosqu ad litora torquent per conubia nostra'),
    t('Typoghaphy'),
    t('Typography'),
    t('Pricing Table'),
    t('Icons'),
  );
  $export['basic_pages'] = $view;

  $view = new view();
  $view->name = 'blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'בלוג, ספורט ומתכונים';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'הבלוג של ד"ר אליעז';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '[...]';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'מספר פריטים בעמוד';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'היסט';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'created' => 'created',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* יחס: תוכן: מחבר */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* שדה: תוכן: סרטון */
  $handler->display->display_options['fields']['field_blog_multimedia']['id'] = 'field_blog_multimedia';
  $handler->display->display_options['fields']['field_blog_multimedia']['table'] = 'field_data_field_blog_multimedia';
  $handler->display->display_options['fields']['field_blog_multimedia']['field'] = 'field_blog_multimedia';
  $handler->display->display_options['fields']['field_blog_multimedia']['label'] = '';
  $handler->display->display_options['fields']['field_blog_multimedia']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_multimedia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_multimedia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_multimedia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_multimedia']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_blog_multimedia']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_blog_multimedia']['separator'] = '';
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: משתמש: תמונה */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = '0';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* שדה: משתמש: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: תגיות */
  $handler->display->display_options['fields']['field_blog_tag']['id'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['table'] = 'field_data_field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['field'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['label'] = '';
  $handler->display->display_options['fields']['field_blog_tag']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['delta_offset'] = '0';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'post' => 'post',
  );

  /* Display: Our Histories */
  $handler = $view->new_display('page', 'Our Histories', 'page_blog');
  $handler->display->display_options['display_description'] = 'Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'מספר פריטים בעמוד';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'היסט';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: תוכן: מחבר */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['path'] = 'blogg';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Related Posts */
  $handler = $view->new_display('entity_view', 'Related Posts', 'entity_view_related_posts');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F d, Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_blog_body']['id'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['table'] = 'field_data_field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['field'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['label'] = '';
  $handler->display->display_options['fields']['field_blog_body']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_blog_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_blog_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_body']['element_default_classes'] = FALSE;
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_blog_thumbnail']['id'] = 'field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['table'] = 'field_data_field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['field'] = 'field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_blog_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_thumbnail']['settings'] = array(
    'image_style' => 'related_blog_image',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'blog',
  );
  $handler->display->display_options['argument_mode'] = 'token';
  $handler->display->display_options['default_argument'] = '[node:nid]';

  /* Display: בלוג ראשי */
  $handler = $view->new_display('page', 'בלוג ראשי', 'page_blog2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'בלוג';
  $handler->display->display_options['display_description'] = 'Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: תוכן: מחבר */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: משתמש: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_blog_category']['id'] = 'field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['table'] = 'field_data_field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['field'] = 'field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['label'] = '';
  $handler->display->display_options['fields']['field_blog_category']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_category']['element_default_classes'] = FALSE;
  /* שדה: תוכן: תגיות */
  $handler->display->display_options['fields']['field_blog_tag']['id'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['table'] = 'field_data_field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['field'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['label'] = '<i class="icon-tags"></i>';
  $handler->display->display_options['fields']['field_blog_tag']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_blog_tag']['delta_offset'] = '0';
  /* שדה: תוכן: הוספת תמונה */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'blog__recipe__sport',
    'image_link' => 'content',
  );
  /* שדה: תוכן: תמונה לעמוד מתכונים ראשי */
  $handler->display->display_options['fields']['field_image_main_blog']['id'] = 'field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['table'] = 'field_data_field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['field'] = 'field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['label'] = '';
  $handler->display->display_options['fields']['field_image_main_blog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_main_blog']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_image_main_blog']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_main_blog']['settings'] = array(
    'image_style' => 'blog__recipe__sport',
    'image_link' => 'content',
  );
  /* שדה: תוכן: תוכן */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* שדה: תוכן: תקציר  */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[body]';
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_blog_body']['id'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['table'] = 'field_data_field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['field'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['label'] = '';
  $handler->display->display_options['fields']['field_blog_body']['element_label_colon'] = FALSE;
  /* שדה: תוכן: מחבר */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'blog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blog Style 2';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Our History */
  $handler = $view->new_display('page', 'Our History', 'page_blog3');
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '[...]';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* שדה: תוכן: סרטון */
  $handler->display->display_options['fields']['field_blog_multimedia']['id'] = 'field_blog_multimedia';
  $handler->display->display_options['fields']['field_blog_multimedia']['table'] = 'field_data_field_blog_multimedia';
  $handler->display->display_options['fields']['field_blog_multimedia']['field'] = 'field_blog_multimedia';
  $handler->display->display_options['fields']['field_blog_multimedia']['label'] = '';
  $handler->display->display_options['fields']['field_blog_multimedia']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_multimedia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_multimedia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_multimedia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_multimedia']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_blog_multimedia']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_blog_multimedia']['separator'] = '';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: משתמש: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_blog_category']['id'] = 'field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['table'] = 'field_data_field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['field'] = 'field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['label'] = '';
  $handler->display->display_options['fields']['field_blog_category']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_category']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_blog_body']['id'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['table'] = 'field_data_field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['field'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['label'] = '';
  $handler->display->display_options['fields']['field_blog_body']['alter']['max_length'] = '280';
  $handler->display->display_options['fields']['field_blog_body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_blog_body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_blog_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_blog_body']['alter']['more_link_text'] = '[...]';
  $handler->display->display_options['fields']['field_blog_body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_blog_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_blog_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'blog3';
  $handler->display->display_options['menu']['title'] = 'Blog Style 3';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: המבצעים שלנו */
  $handler = $view->new_display('block', 'המבצעים שלנו', 'block_recent_posts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'המבצעים שלנו';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: תוכן: Referenced products */
  $handler->display->display_options['relationships']['field_products_product_id']['id'] = 'field_products_product_id';
  $handler->display->display_options['relationships']['field_products_product_id']['table'] = 'field_data_field_products';
  $handler->display->display_options['relationships']['field_products_product_id']['field'] = 'field_products_product_id';
  /* יחס: נעיצה לרשימות: product_home_page */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'product_home_page';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_blog_thumbnail']['id'] = 'field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['table'] = 'field_data_field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['field'] = 'field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_blog_thumbnail']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['field_blog_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_thumbnail']['settings'] = array(
    'image_style' => 'recent_posts',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_blog_thumbnail']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_blog_thumbnail']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F, d Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: תוכן: מוצר */
  $handler->display->display_options['fields']['field_products']['id'] = 'field_products';
  $handler->display->display_options['fields']['field_products']['table'] = 'field_data_field_products';
  $handler->display->display_options['fields']['field_products']['field'] = 'field_products';
  $handler->display->display_options['fields']['field_products']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'show_single_product_attributes' => 0,
    'line_item_type' => 0,
  );
  /* שדה: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_products_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['alter']['text'] = 'מחיר: [commerce_price]';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_savings_formatter_formatter';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => 'calculated_sell_price',
    'prices' => array(
      'list' => 'list',
      'price' => 'price',
      'savings' => 0,
    ),
    'savings' => 'both',
    'show_labels' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* קריטריון לסינון: תוכן: תמונה (field_blog_thumbnail:fid) */
  $handler->display->display_options['filters']['field_blog_thumbnail_fid']['id'] = 'field_blog_thumbnail_fid';
  $handler->display->display_options['filters']['field_blog_thumbnail_fid']['table'] = 'field_data_field_blog_thumbnail';
  $handler->display->display_options['filters']['field_blog_thumbnail_fid']['field'] = 'field_blog_thumbnail_fid';
  $handler->display->display_options['filters']['field_blog_thumbnail_fid']['operator'] = 'not empty';

  /* Display: ספורט ראשי */
  $handler = $view->new_display('page', 'ספורט ראשי', 'page_sport');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ספורט';
  $handler->display->display_options['display_description'] = 'Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: תוכן: מחבר */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* יחס: Nodequeue: תור */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'article_queue' => 0,
    'events' => 0,
    'faq' => 0,
    'our_friends' => 0,
    'recipes' => 0,
    'slides' => 0,
    'sport' => 0,
    'symptoms' => 0,
    'videos' => 0,
    'product' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: משתמש: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: תוכן: תגיות */
  $handler->display->display_options['fields']['field_blog_tag']['id'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['table'] = 'field_data_field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['field'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['label'] = '';
  $handler->display->display_options['fields']['field_blog_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_tag']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_blog_tag']['delta_offset'] = '0';
  /* שדה: תוכן: הוספת תמונה */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'blog__recipe__sport',
    'image_link' => 'content',
  );
  /* שדה: תוכן: תוכן */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* שדה: תוכן: תקציר  */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[body]';
  /* שדה: תוכן: מחבר */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* קריטריון לסידור: Nodequeue: מיקום */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sport' => 'sport',
  );
  $handler->display->display_options['path'] = 'sport';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'ספורט';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: מתכונים ראשי */
  $handler = $view->new_display('page', 'מתכונים ראשי', 'page_recipe');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'מתכונים';
  $handler->display->display_options['display_description'] = 'Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: תוכן: מחבר */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* יחס: Nodequeue: תור */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'article_queue' => 0,
    'events' => 0,
    'faq' => 0,
    'our_friends' => 0,
    'recipes' => 0,
    'slides' => 0,
    'sport' => 0,
    'symptoms' => 0,
    'videos' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: משתמש: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: תוכן: תגיות */
  $handler->display->display_options['fields']['field_blog_tag']['id'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['table'] = 'field_data_field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['field'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['label'] = '';
  $handler->display->display_options['fields']['field_blog_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_tag']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_blog_tag']['delta_offset'] = '0';
  /* שדה: תוכן: הוספת תמונה */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'blog__recipe__sport',
    'image_link' => 'content',
  );
  /* שדה: תוכן: תוכן */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* שדה: תוכן: תקציר  */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[body]';
  /* שדה: תוכן: תמונה לעמוד מתכונים ראשי */
  $handler->display->display_options['fields']['field_image_main_blog']['id'] = 'field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['table'] = 'field_data_field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['field'] = 'field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['label'] = '';
  $handler->display->display_options['fields']['field_image_main_blog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_main_blog']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_image_main_blog']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_main_blog']['settings'] = array(
    'image_style' => 'blog__recipe__sport',
    'image_link' => 'content',
  );
  /* שדה: תוכן: מחבר */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* קריטריון לסידור: Nodequeue: מיקום */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  $handler->display->display_options['path'] = 'recipe';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'מתכונים';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: הבלוג של ד"ר אליעז */
  $handler = $view->new_display('page', 'הבלוג של ד"ר אליעז', 'blogdr');
  $handler->display->display_options['display_description'] = 'Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: משתמש: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'Asia/Ho_Chi_Minh';
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_blog_category']['id'] = 'field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['table'] = 'field_data_field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['field'] = 'field_blog_category';
  $handler->display->display_options['fields']['field_blog_category']['label'] = '';
  $handler->display->display_options['fields']['field_blog_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_category']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_category']['element_default_classes'] = FALSE;
  /* שדה: תוכן: תגיות */
  $handler->display->display_options['fields']['field_blog_tag']['id'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['table'] = 'field_data_field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['field'] = 'field_blog_tag';
  $handler->display->display_options['fields']['field_blog_tag']['label'] = '';
  $handler->display->display_options['fields']['field_blog_tag']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_blog_tag']['delta_offset'] = '0';
  /* שדה: תוכן: הוספת תמונה */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'blog__recipe__sport',
    'image_link' => 'content',
  );
  /* שדה: תוכן: תמונה לעמוד מתכונים ראשי */
  $handler->display->display_options['fields']['field_image_main_blog']['id'] = 'field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['table'] = 'field_data_field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['field'] = 'field_image_main_blog';
  $handler->display->display_options['fields']['field_image_main_blog']['label'] = '';
  $handler->display->display_options['fields']['field_image_main_blog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_main_blog']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_image_main_blog']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_main_blog']['settings'] = array(
    'image_style' => 'blog__recipe__sport',
    'image_link' => 'content',
  );
  /* שדה: תוכן: תוכן */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* שדה: תוכן: תקציר  */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[body]';
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_blog_body']['id'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['table'] = 'field_data_field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['field'] = 'field_blog_body';
  $handler->display->display_options['fields']['field_blog_body']['label'] = '';
  $handler->display->display_options['fields']['field_blog_body']['element_label_colon'] = FALSE;
  /* שדה: תוכן: מחבר */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'post_eloiz' => 'post_eloiz',
  );
  $handler->display->display_options['path'] = 'blog-dr-eliaz';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'הבלוג של ד"ר אליעז';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['blog'] = array(
    t('Master'),
    t('הבלוג של ד"ר אליעז'),
    t('[...]'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('מספר פריטים בעמוד'),
    t('- הכל -'),
    t('היסט'),
    t('« לעמוד הראשון'),
    t('‹ לעמוד הקודם'),
    t('לעמוד הבא ›'),
    t('לעמוד האחרון »'),
    t('author'),
    t('Our Histories'),
    t('Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.'),
    t('עוד'),
    t('Related Posts'),
    t('הכל'),
    t('בלוג ראשי'),
    t('בלוג'),
    t('<i class="icon-tags"></i>'),
    t('[field_image]'),
    t('[body]'),
    t('Our History'),
    t('Class aptent taciti sociosqu ad litora torquent per conubia nostra'),
    t('המבצעים שלנו'),
    t('Products referenced by field_products'),
    t('flag'),
    t('מוצר'),
    t('מחיר: [commerce_price]'),
    t('ספורט ראשי'),
    t('ספורט'),
    t('queue'),
    t('מתכונים ראשי'),
    t('מתכונים'),
  );
  $export['blog'] = $view;

  $view = new view();
  $view->name = 'categories_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Categories Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'סיווגים';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: סיווג במילון: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* קריטריון לסינון: מילון טקסונומי: שם מכונה */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'blog_category' => 'blog_category',
  );

  /* Display: Categories */
  $handler = $view->new_display('block', 'Categories', 'categories_widget');
  $translatables['categories_widget'] = array(
    t('Master'),
    t('סיווגים'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Categories'),
  );
  $export['categories_widget'] = $view;

  $view = new view();
  $view->name = 'contact';
  $view->description = 'We’d love to hear from you and answer any questions you may have. Send us an email, complete our project planner...';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'צור קשר';
  $handler->display->display_options['css_class'] = 'web-wrapper';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: טופס: Webform form body */
  $handler->display->display_options['fields']['webform_form_body']['id'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['table'] = 'node';
  $handler->display->display_options['fields']['webform_form_body']['field'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['label'] = '';
  $handler->display->display_options['fields']['webform_form_body']['element_label_colon'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );

  /* Display: צרו איתנו קשר */
  $handler = $view->new_display('page', 'צרו איתנו קשר', 'page_contact');
  $handler->display->display_options['path'] = 'contact';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contact';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['contact'] = array(
    t('Master'),
    t('צור קשר'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('צרו איתנו קשר'),
  );
  $export['contact'] = $view;

  $view = new view();
  $view->name = 'features';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'תכונות';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'features' => 'features',
  );

  /* Display:  */
  $handler = $view->new_display('block', '', 'block_features');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: Features description */
  $handler->display->display_options['fields']['field_features_description']['id'] = 'field_features_description';
  $handler->display->display_options['fields']['field_features_description']['table'] = 'field_data_field_features_description';
  $handler->display->display_options['fields']['field_features_description']['field'] = 'field_features_description';
  $handler->display->display_options['fields']['field_features_description']['label'] = '';
  $handler->display->display_options['fields']['field_features_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_features_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_features_description']['element_default_classes'] = FALSE;
  /* שדה: תוכן: Features Icon */
  $handler->display->display_options['fields']['field_features_icon']['id'] = 'field_features_icon';
  $handler->display->display_options['fields']['field_features_icon']['table'] = 'field_data_field_features_icon';
  $handler->display->display_options['fields']['field_features_icon']['field'] = 'field_features_icon';
  $handler->display->display_options['fields']['field_features_icon']['label'] = '';
  $handler->display->display_options['fields']['field_features_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_features_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_features_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_features_icon']['click_sort_column'] = 'bundle';
  $handler->display->display_options['fields']['field_features_icon']['settings'] = array(
    'link_to_content' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $translatables['features'] = array(
    t('Master'),
    t('תכונות'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
  );
  $export['features'] = $view;

  $view = new view();
  $view->name = 'frequently_asked_questions';
  $view->description = 'You Have Questions. We Have Answers. If you have a specific question not listed here please contact us.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frequently Asked Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frequently Asked Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'מספר פריטים בעמוד';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'היסט';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: Questions Category */
  $handler->display->display_options['fields']['field_questions_category']['id'] = 'field_questions_category';
  $handler->display->display_options['fields']['field_questions_category']['table'] = 'field_data_field_questions_category';
  $handler->display->display_options['fields']['field_questions_category']['field'] = 'field_questions_category';
  $handler->display->display_options['fields']['field_questions_category']['label'] = '';
  $handler->display->display_options['fields']['field_questions_category']['element_type'] = '0';
  $handler->display->display_options['fields']['field_questions_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questions_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_questions_category']['type'] = 'taxonomy_term_reference_plain';
  /* שדה: תוכן: Questions Detail */
  $handler->display->display_options['fields']['field_questions_detail']['id'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['table'] = 'field_data_field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['field'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['label'] = '';
  $handler->display->display_options['fields']['field_questions_detail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_questions_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_questions_detail']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_questions_detail']['delta_offset'] = '0';
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: FAQ Page */
  $handler = $view->new_display('page', 'FAQ Page', 'page_faq');
  $handler->display->display_options['path'] = 'faq';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Frequently Asked Questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment Template */
  $handler = $view->new_display('attachment', 'Attachment Template', 'attachment_template');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: Questions Detail */
  $handler->display->display_options['fields']['field_questions_detail']['id'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['table'] = 'field_data_field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['field'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['label'] = '';
  $handler->display->display_options['fields']['field_questions_detail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_questions_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_questions_detail']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_questions_detail']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* קריטריון לסינון: תוכן: Questions Category (field_questions_category) */
  $handler->display->display_options['filters']['field_questions_category_tid']['id'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['table'] = 'field_data_field_questions_category';
  $handler->display->display_options['filters']['field_questions_category_tid']['field'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator_id'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['label'] = 'Questions Category (field_questions_category)';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['identifier'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_questions_category_tid']['vocabulary'] = 'faq';
  $handler->display->display_options['filters']['field_questions_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_faq' => 'page_faq',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_pager'] = TRUE;
  $handler->display->display_options['render_pager'] = TRUE;

  /* Display: Attachment Features */
  $handler = $view->new_display('attachment', 'Attachment Features', 'attachment_features');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: Questions Detail */
  $handler->display->display_options['fields']['field_questions_detail']['id'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['table'] = 'field_data_field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['field'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['label'] = '';
  $handler->display->display_options['fields']['field_questions_detail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_questions_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_questions_detail']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_questions_detail']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* קריטריון לסינון: תוכן: Questions Category (field_questions_category) */
  $handler->display->display_options['filters']['field_questions_category_tid']['id'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['table'] = 'field_data_field_questions_category';
  $handler->display->display_options['filters']['field_questions_category_tid']['field'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator_id'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['label'] = 'Questions Category (field_questions_category)';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['identifier'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_questions_category_tid']['vocabulary'] = 'faq';
  $handler->display->display_options['filters']['field_questions_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_faq' => 'page_faq',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_pager'] = TRUE;
  $handler->display->display_options['render_pager'] = TRUE;

  /* Display: Attachment Support */
  $handler = $view->new_display('attachment', 'Attachment Support', 'attachment_support');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: Questions Detail */
  $handler->display->display_options['fields']['field_questions_detail']['id'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['table'] = 'field_data_field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['field'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['label'] = '';
  $handler->display->display_options['fields']['field_questions_detail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_questions_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_questions_detail']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_questions_detail']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* קריטריון לסינון: תוכן: Questions Category (field_questions_category) */
  $handler->display->display_options['filters']['field_questions_category_tid']['id'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['table'] = 'field_data_field_questions_category';
  $handler->display->display_options['filters']['field_questions_category_tid']['field'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['value'] = array(
    21 => '21',
  );
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator_id'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['label'] = 'Questions Category (field_questions_category)';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['identifier'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_questions_category_tid']['vocabulary'] = 'faq';
  $handler->display->display_options['filters']['field_questions_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_faq' => 'page_faq',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_pager'] = TRUE;
  $handler->display->display_options['render_pager'] = TRUE;

  /* Display: Attachment Shopping Cart */
  $handler = $view->new_display('attachment', 'Attachment Shopping Cart', 'attachment_shopping_cart');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: Questions Detail */
  $handler->display->display_options['fields']['field_questions_detail']['id'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['table'] = 'field_data_field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['field'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['label'] = '';
  $handler->display->display_options['fields']['field_questions_detail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_questions_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_questions_detail']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_questions_detail']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* קריטריון לסינון: תוכן: Questions Category (field_questions_category) */
  $handler->display->display_options['filters']['field_questions_category_tid']['id'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['table'] = 'field_data_field_questions_category';
  $handler->display->display_options['filters']['field_questions_category_tid']['field'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['value'] = array(
    22 => '22',
  );
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator_id'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['label'] = 'Questions Category (field_questions_category)';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['identifier'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_questions_category_tid']['vocabulary'] = 'faq';
  $handler->display->display_options['filters']['field_questions_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_faq' => 'page_faq',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_pager'] = TRUE;
  $handler->display->display_options['render_pager'] = TRUE;

  /* Display: Attachment User Guide */
  $handler = $view->new_display('attachment', 'Attachment User Guide', 'attachment_user_guide');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: Questions Detail */
  $handler->display->display_options['fields']['field_questions_detail']['id'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['table'] = 'field_data_field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['field'] = 'field_questions_detail';
  $handler->display->display_options['fields']['field_questions_detail']['label'] = '';
  $handler->display->display_options['fields']['field_questions_detail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_questions_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_questions_detail']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_questions_detail']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_questions_detail']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* קריטריון לסינון: תוכן: Questions Category (field_questions_category) */
  $handler->display->display_options['filters']['field_questions_category_tid']['id'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['table'] = 'field_data_field_questions_category';
  $handler->display->display_options['filters']['field_questions_category_tid']['field'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['value'] = array(
    23 => '23',
  );
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator_id'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['label'] = 'Questions Category (field_questions_category)';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['operator'] = 'field_questions_category_tid_op';
  $handler->display->display_options['filters']['field_questions_category_tid']['expose']['identifier'] = 'field_questions_category_tid';
  $handler->display->display_options['filters']['field_questions_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_questions_category_tid']['vocabulary'] = 'faq';
  $handler->display->display_options['filters']['field_questions_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_faq' => 'page_faq',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_pager'] = TRUE;
  $handler->display->display_options['render_pager'] = TRUE;
  $translatables['frequently_asked_questions'] = array(
    t('Master'),
    t('Frequently Asked Questions'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('מספר פריטים בעמוד'),
    t('- הכל -'),
    t('היסט'),
    t('« לעמוד הראשון'),
    t('‹ לעמוד הקודם'),
    t('לעמוד הבא ›'),
    t('לעמוד האחרון »'),
    t('FAQ Page'),
    t('Attachment Template'),
    t('Questions Category (field_questions_category)'),
    t('Attachment Features'),
    t('Attachment Support'),
    t('Attachment Shopping Cart'),
    t('Attachment User Guide'),
  );
  $export['frequently_asked_questions'] = $view;

  $view = new view();
  $view->name = 'home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'דף הבית';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Home Mega Slider 2 */
  $handler = $view->new_display('page', 'Home Mega Slider 2', 'page_home_mega_slider_2');
  $handler->display->display_options['path'] = 'home_mega_slider_2';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Home Mega Slider 2';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Home Mega Slider 1 */
  $handler = $view->new_display('page', 'Home Mega Slider 1', 'page_home_mega_slider_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['path'] = 'home_mega_slider_1';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Home Mega Slider 1';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['home'] = array(
    t('Master'),
    t('דף הבית'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Home Mega Slider 2'),
    t('Home Mega Slider 1'),
  );
  $export['home'] = $view;

  $view = new view();
  $view->name = 'our_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meet the team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'מספר פריטים בעמוד';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'היסט';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* כותרת: כללי: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* יחס: Nodequeue: תור */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'article_queue' => 0,
    'events' => 0,
    'faq' => 0,
    'our_friends' => 0,
    'recipes' => 0,
    'slides' => 0,
    'sport' => 0,
    'symptoms' => 0,
    'videos' => 0,
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: בקצרה */
  $handler->display->display_options['fields']['field_team_job']['id'] = 'field_team_job';
  $handler->display->display_options['fields']['field_team_job']['table'] = 'field_data_field_team_job';
  $handler->display->display_options['fields']['field_team_job']['field'] = 'field_team_job';
  $handler->display->display_options['fields']['field_team_job']['label'] = '';
  $handler->display->display_options['fields']['field_team_job']['element_type'] = '0';
  $handler->display->display_options['fields']['field_team_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_job']['element_default_classes'] = FALSE;
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_team_avatar']['id'] = 'field_team_avatar';
  $handler->display->display_options['fields']['field_team_avatar']['table'] = 'field_data_field_team_avatar';
  $handler->display->display_options['fields']['field_team_avatar']['field'] = 'field_team_avatar';
  $handler->display->display_options['fields']['field_team_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_team_avatar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_team_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_team_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_avatar']['settings'] = array(
    'image_style' => 'team_avatar_224x235',
    'image_link' => 'content',
  );
  /* שדה: תוכן: קישורים חברתיים */
  $handler->display->display_options['fields']['field_team_social']['id'] = 'field_team_social';
  $handler->display->display_options['fields']['field_team_social']['table'] = 'field_data_field_team_social';
  $handler->display->display_options['fields']['field_team_social']['field'] = 'field_team_social';
  $handler->display->display_options['fields']['field_team_social']['label'] = '';
  $handler->display->display_options['fields']['field_team_social']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_social']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_team_social']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_team_social']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_team_social']['multi_type'] = 'ul';
  /* קריטריון לסידור: Nodequeue: מיקום */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'our_team' => 'our_team',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;

  /* Display: החברים שלנו */
  $handler = $view->new_display('page', 'החברים שלנו', 'page_about_us');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'החברים שלנו';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'about_us';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'About Us';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['our_team'] = array(
    t('Master'),
    t('Meet the team'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('מספר פריטים בעמוד'),
    t('- הכל -'),
    t('היסט'),
    t('« לעמוד הראשון'),
    t('‹ לעמוד הקודם'),
    t('לעמוד הבא ›'),
    t('לעמוד האחרון »'),
    t('queue'),
    t('Block'),
    t('החברים שלנו'),
  );
  $export['our_team'] = $view;

  $view = new view();
  $view->name = 'overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'סקירה';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_overview_body']['id'] = 'field_overview_body';
  $handler->display->display_options['fields']['field_overview_body']['table'] = 'field_data_field_overview_body';
  $handler->display->display_options['fields']['field_overview_body']['field'] = 'field_overview_body';
  $handler->display->display_options['fields']['field_overview_body']['label'] = '';
  $handler->display->display_options['fields']['field_overview_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_overview_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overview_body']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_overview_icon']['id'] = 'field_overview_icon';
  $handler->display->display_options['fields']['field_overview_icon']['table'] = 'field_data_field_overview_icon';
  $handler->display->display_options['fields']['field_overview_icon']['field'] = 'field_overview_icon';
  $handler->display->display_options['fields']['field_overview_icon']['label'] = '';
  $handler->display->display_options['fields']['field_overview_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_overview_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overview_icon']['element_default_classes'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'overview' => 'overview',
  );

  /* Display: Overview */
  $handler = $view->new_display('block', 'Overview', 'block_overview');
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $translatables['overview'] = array(
    t('Master'),
    t('סקירה'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Overview'),
    t('Class aptent taciti sociosqu ad litora torquent per conubia nostra'),
  );
  $export['overview'] = $view;

  $view = new view();
  $view->name = 'partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partners';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_partner_logo']['id'] = 'field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['table'] = 'field_data_field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['field'] = 'field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['label'] = '';
  $handler->display->display_options['fields']['field_partner_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_partner_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_logo']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_partner_logo_hover']['id'] = 'field_partner_logo_hover';
  $handler->display->display_options['fields']['field_partner_logo_hover']['table'] = 'field_data_field_partner_logo_hover';
  $handler->display->display_options['fields']['field_partner_logo_hover']['field'] = 'field_partner_logo_hover';
  $handler->display->display_options['fields']['field_partner_logo_hover']['label'] = '';
  $handler->display->display_options['fields']['field_partner_logo_hover']['element_type'] = '0';
  $handler->display->display_options['fields']['field_partner_logo_hover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_logo_hover']['element_default_classes'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partners' => 'partners',
  );

  /* Display: Our Clients */
  $handler = $view->new_display('block', 'Our Clients', 'block_our_clients');

  /* Display: Our Customers */
  $handler = $view->new_display('block', 'Our Customers', 'block_our_customers');
  $translatables['partners'] = array(
    t('Master'),
    t('Partners'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Our Clients'),
    t('Our Customers'),
  );
  $export['partners'] = $view;

  $view = new view();
  $view->name = 'portfolio';
  $view->description = 'Clean and decent personal portfolio and microblog HTML template perfectly suitable for Creative Company';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portfolio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portfolio';
  $handler->display->display_options['css_class'] = 'hidden-phone';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: Portfolio Taxonomy */
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['id'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['table'] = 'field_data_field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['field'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['delta_offset'] = '0';
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_4col',
    'image_link' => '',
  );
  /* שדה: תוכן: Portfolio Layout Mode */
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['id'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['table'] = 'field_data_field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['field'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['type'] = 'list_key';
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio' => 'portfolio',
  );

  /* Display: Lastest Portfolio */
  $handler = $view->new_display('block', 'Lastest Portfolio', 'block_lastest_portfolio1');
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: Portfolio Taxonomy */
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['id'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['table'] = 'field_data_field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['field'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['delta_offset'] = '0';
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: תוכן: Portfolio Layout Mode */
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['id'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['table'] = 'field_data_field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['field'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['type'] = 'list_key';
  /* שדה: תוכן: קישור לעמוד באתר */
  $handler->display->display_options['fields']['field_node_reference']['id'] = 'field_node_reference';
  $handler->display->display_options['fields']['field_node_reference']['table'] = 'field_data_field_node_reference';
  $handler->display->display_options['fields']['field_node_reference']['field'] = 'field_node_reference';
  $handler->display->display_options['fields']['field_node_reference']['label'] = '';
  $handler->display->display_options['fields']['field_node_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_node_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_reference']['settings'] = array(
    'link' => 0,
  );

  /* Display: Our Portfolio */
  $handler = $view->new_display('page', 'Our Portfolio', 'page_portfolio');
  $handler->display->display_options['display_description'] = 'Clean and decent personal portfolio and microblog HTML template perfectly suitable for Creative Company';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: Portfolio Taxonomy */
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['id'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['table'] = 'field_data_field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['field'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['delta_offset'] = '0';
  /* שדה: תוכן: Portfolio Layout Mode */
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['id'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['table'] = 'field_data_field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['field'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['type'] = 'list_key';
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'portfolio';
  $handler->display->display_options['menu']['title'] = 'Portfolio';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Portfolio 2 Columns */
  $handler = $view->new_display('page', 'Portfolio 2 Columns', 'page_portfolio_2col');
  $handler->display->display_options['display_description'] = 'Clean and decent personal portfolio and microblog HTML template perfectly suitable for Creative Company';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: Portfolio Taxonomy */
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['id'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['table'] = 'field_data_field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['field'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['delta_offset'] = '0';
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_2col',
    'image_link' => '',
  );
  /* שדה: תוכן: Portfolio Layout Mode */
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['id'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['table'] = 'field_data_field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['field'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['type'] = 'list_key';
  $handler->display->display_options['path'] = 'portfolio_2col';
  $handler->display->display_options['menu']['title'] = 'Grid 2 columns';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: מוצרים */
  $handler = $view->new_display('page', 'מוצרים', 'page_portfolio_3col');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['display_description'] = 'Clean and decent personal portfolio and microblog HTML template perfectly suitable for Creative Company';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: תוכן: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'product_type' => 'product_type',
    'recipetype' => 'recipetype',
    'simptomim' => 'simptomim',
    'blog_category' => 0,
    'faq' => 0,
    'portfolio_category' => 0,
    'author' => 0,
    'recipe_time' => 0,
    'tags' => 0,
  );
  /* יחס: תוכן: Referenced products */
  $handler->display->display_options['relationships']['field_products_product_id']['id'] = 'field_products_product_id';
  $handler->display->display_options['relationships']['field_products_product_id']['table'] = 'field_data_field_products';
  $handler->display->display_options['relationships']['field_products_product_id']['field'] = 'field_products_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: מוצר */
  $handler->display->display_options['fields']['field_products']['id'] = 'field_products';
  $handler->display->display_options['fields']['field_products']['table'] = 'field_data_field_products';
  $handler->display->display_options['fields']['field_products']['field'] = 'field_products';
  $handler->display->display_options['fields']['field_products']['label'] = '';
  $handler->display->display_options['fields']['field_products']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_products']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'show_single_product_attributes' => 0,
    'line_item_type' => 0,
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_products]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: הוספת תמונה */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_3col',
    'image_link' => '',
  );
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_blog_thumbnail']['id'] = 'field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['table'] = 'field_data_field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['field'] = 'field_blog_thumbnail';
  $handler->display->display_options['fields']['field_blog_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_blog_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_thumbnail']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_blog_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_3col',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_blog_thumbnail']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_blog_thumbnail']['delta_offset'] = '0';
  /* שדה: תוכן: Portfolio Taxonomy */
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['id'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['table'] = 'field_data_field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['field'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['delta_offset'] = '0';
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['empty'] = '[field_blog_thumbnail]';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_3col',
    'image_link' => '',
  );
  /* שדה: תוכן: Portfolio Layout Mode */
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['id'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['table'] = 'field_data_field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['field'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['type'] = 'list_key';
  /* שדה: תוכן: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* שדה: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_products_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_type'] = '0';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_savings_formatter_formatter';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => 'calculated_sell_price',
    'prices' => array(
      'list' => 'list',
      'price' => 'price',
      'savings' => 0,
    ),
    'savings' => 'both',
    'show_labels' => 0,
  );
  /* שדה: תוכן: בחירת סוג המוצר */
  $handler->display->display_options['fields']['field_product_type']['id'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['fields']['field_product_type']['field'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['label'] = '';
  $handler->display->display_options['fields']['field_product_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* קריטריון לסידור: סיווג במילון: Weight in tid */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_index';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: סיווג במילון: מזהה מושג */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
    'recipe' => 'recipe',
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $handler->display->display_options['menu']['title'] = 'Grid 3 columns';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Portfolio 4 Columns */
  $handler = $view->new_display('page', 'Portfolio 4 Columns', 'page_portfolio_4col');
  $handler->display->display_options['display_description'] = 'Clean and decent personal portfolio and microblog HTML template perfectly suitable for Creative Company';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: Portfolio Taxonomy */
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['id'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['table'] = 'field_data_field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['field'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['delta_offset'] = '0';
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_4col',
    'image_link' => '',
  );
  /* שדה: תוכן: Portfolio Layout Mode */
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['id'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['table'] = 'field_data_field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['field'] = 'field_portfolio_layout_mode';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_layout_mode']['type'] = 'list_key';
  $handler->display->display_options['path'] = 'portfolio_4col';
  $handler->display->display_options['menu']['title'] = 'Grid 4 columns';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Related Project */
  $handler = $view->new_display('entity_view', 'Related Project', 'entity_view_related_project');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: Portfolio Taxonomy */
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['id'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['table'] = 'field_data_field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['field'] = 'field_portfolio_taxonomy';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_taxonomy']['delta_offset'] = '0';
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_thumbnails',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: תוכן: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'portfolio_category' => 'portfolio_category',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'portfolio',
  );
  $handler->display->display_options['argument_mode'] = 'token';
  $handler->display->display_options['default_argument'] = '[node:field-portfolio-taxonomy:tid]';

  /* Display: Slider Thumbnail Portfolio */
  $handler = $view->new_display('block', 'Slider Thumbnail Portfolio', 'block_slider_thumbnail');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* הודעה בתחתית האתר: כללי: אזור טקסט */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="entry-content">
                <p class="flx-mb-30"><span class="flx-dropcap flx-color"><?php print t(\'L\');?></span><?php print t(\'orem ipsum dolor sit amet, consectetur adipiscing elit. In id dui ac
                    tellus vestibulum accumsan. Mauris in metus lorem. Integer quis enim metus. Suspendisse elit nisl, pretium at vulputate vitae, semper at diam. Ut ut sem elit, sit amet elementum lectus. Phasellus vel sapien massa, et molestie risus. Ut at nulla sed erat sagittis aliquet. Vestibulum nec dui quam, sed pulvinar erat. Vivamus urna tellus, suscipit id ultricies a, sagittis eu leo.</p>
                <p>Etiam non nisi dui. Aenean tincidunt, risus eu vestibulum dapibus, augue magna vestibulum magna, sed vestibulum nisi ante id nisl. Proin urna mi, ornare id tempor a, viverra ac urna. Aliquam a pulvinar leo.nulla. Curabitur nunc nunc.</p>\');?>
                <center><a href="<?php print base_path();?>portfolio" class="flx-more-link"><?php print t(\'view our Portfolio\');?></a></center>
            </div><!--end:entry-content-->';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_slider_thumbnail',
    'image_link' => '',
  );

  /* Display: כל המתכונים של מוצר מסויים */
  $handler = $view->new_display('page', 'כל המתכונים של מוצר מסויים', 'recipe');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'מתכונים עם המוצר [title_1]';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_product_reference_target_id']['id'] = 'field_product_reference_target_id';
  $handler->display->display_options['relationships']['field_product_reference_target_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_target_id']['field'] = 'field_product_reference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_product_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* שדה: תוכן: הוספת תמונה */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_3col',
    'image_link' => '',
  );
  /* שדה: תוכן: תמונה */
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['id'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['table'] = 'field_data_field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['field'] = 'field_portfolio_thumbnail';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['alter']['text'] = '[field_image_1]';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['empty'] = '[field_image_1]';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_thumbnail']['settings'] = array(
    'image_style' => 'portfolio_thumbnail_4col',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_product_reference_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  $handler->display->display_options['path'] = 'node/%/recipe';
  $translatables['portfolio'] = array(
    t('Master'),
    t('Portfolio'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Lastest Portfolio'),
    t('Class aptent taciti sociosqu ad litora torquent per conubia nostra'),
    t('Our Portfolio'),
    t('Clean and decent personal portfolio and microblog HTML template perfectly suitable for Creative Company'),
    t('Portfolio 2 Columns'),
    t('מוצרים'),
    t('%1'),
    t('term'),
    t('Products referenced by field_products'),
    t('[field_products]'),
    t('[field_image]'),
    t('[field_blog_thumbnail]'),
    t('הכל'),
    t('Portfolio 4 Columns'),
    t('Related Project'),
    t('Slider Thumbnail Portfolio'),
    t('<div class="entry-content">
                <p class="flx-mb-30"><span class="flx-dropcap flx-color"><?php print t(\'L\');?></span><?php print t(\'orem ipsum dolor sit amet, consectetur adipiscing elit. In id dui ac
                    tellus vestibulum accumsan. Mauris in metus lorem. Integer quis enim metus. Suspendisse elit nisl, pretium at vulputate vitae, semper at diam. Ut ut sem elit, sit amet elementum lectus. Phasellus vel sapien massa, et molestie risus. Ut at nulla sed erat sagittis aliquet. Vestibulum nec dui quam, sed pulvinar erat. Vivamus urna tellus, suscipit id ultricies a, sagittis eu leo.</p>
                <p>Etiam non nisi dui. Aenean tincidunt, risus eu vestibulum dapibus, augue magna vestibulum magna, sed vestibulum nisi ante id nisl. Proin urna mi, ornare id tempor a, viverra ac urna. Aliquam a pulvinar leo.nulla. Curabitur nunc nunc.</p>\');?>
                <center><a href="<?php print base_path();?>portfolio" class="flx-more-link"><?php print t(\'view our Portfolio\');?></a></center>
            </div><!--end:entry-content-->'),
    t('כל המתכונים של מוצר מסויים'),
    t('מתכונים עם המוצר [title_1]'),
    t('תוכן entity referenced from field_product_reference'),
    t('[field_image_1]'),
  );
  $export['portfolio'] = $view;

  $view = new view();
  $view->name = 'recent_comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Recent Comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Comments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = 'on';
  /* יחס: תגובה: תוכן */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* שדה: תגובה: כותרת */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* שדה: תגובה: מחבר */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* קריטריון לסידור: תגובה: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תגובה: מאושר */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Recent Comments */
  $handler = $view->new_display('block', 'Recent Comments', 'recent_comments_widget');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תגובה: מחבר */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $translatables['recent_comments'] = array(
    t('Master'),
    t('Recent Comments'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('תוכן'),
    t('מחבר'),
    t('כותרת'),
  );
  $export['recent_comments'] = $view;

  $view = new view();
  $view->name = 'recent_posts_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent Posts Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Posts Widget';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: תוכן: תאריך פירסום */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F d, Y';
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Recent Posts */
  $handler = $view->new_display('block', 'Recent Posts', 'recent_posts_widget');
  $translatables['recent_posts_widget'] = array(
    t('Master'),
    t('Recent Posts Widget'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Recent Posts'),
  );
  $export['recent_posts_widget'] = $view;

  $view = new view();
  $view->name = 'service';
  $view->description = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_service_icon']['id'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['table'] = 'field_data_field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['field'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['label'] = '';
  $handler->display->display_options['fields']['field_service_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_service_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_icon']['element_default_classes'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_service_description']['id'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['table'] = 'field_data_field_service_description';
  $handler->display->display_options['fields']['field_service_description']['field'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['label'] = '';
  $handler->display->display_options['fields']['field_service_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_service_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_service_description']['element_label_colon'] = FALSE;
  /* קריטריון לסידור: תוכן: כותרת */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );

  /* Display: Demo Services */
  $handler = $view->new_display('block', 'Demo Services', 'block_demo_services');
  $handler->display->display_options['display_description'] = 'Lorem ipsum dolor sit amet consectetuer aliquet Morbi nec In Vivamus. Class aptent taciti sociosqu ad litora torquent per conubi';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Services */
  $handler = $view->new_display('page', 'Services', 'page_services');
  $handler->display->display_options['display_description'] = 'Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_service_icon']['id'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['table'] = 'field_data_field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['field'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['label'] = '';
  $handler->display->display_options['fields']['field_service_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_service_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_icon']['element_default_classes'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_service_description']['id'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['table'] = 'field_data_field_service_description';
  $handler->display->display_options['fields']['field_service_description']['field'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['label'] = '';
  $handler->display->display_options['fields']['field_service_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_service_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_service_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'services';
  $handler->display->display_options['menu']['title'] = 'Services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['service'] = array(
    t('Master'),
    t('Services'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Demo Services'),
    t('Lorem ipsum dolor sit amet consectetuer aliquet Morbi nec In Vivamus. Class aptent taciti sociosqu ad litora torquent per conubi'),
    t('Nulla enim quam, porttitor non vestibulum nec, cursus quis nulla.'),
  );
  $export['service'] = $view;

  $view = new view();
  $view->name = 'skills';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Skills';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Skills';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_skill_level']['id'] = 'field_skill_level';
  $handler->display->display_options['fields']['field_skill_level']['table'] = 'field_data_field_skill_level';
  $handler->display->display_options['fields']['field_skill_level']['field'] = 'field_skill_level';
  $handler->display->display_options['fields']['field_skill_level']['label'] = '';
  $handler->display->display_options['fields']['field_skill_level']['element_type'] = '0';
  $handler->display->display_options['fields']['field_skill_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_skill_level']['element_default_classes'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'skills' => 'skills',
  );

  /* Display: Our Skills */
  $handler = $view->new_display('block', 'Our Skills', 'block_our_skills');
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $translatables['skills'] = array(
    t('Master'),
    t('Skills'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Our Skills'),
    t('Class aptent taciti sociosqu ad litora torquent per conubia nostra'),
  );
  $export['skills'] = $view;

  $view = new view();
  $view->name = 'tags_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tags Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tags Widget';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: סיווג במילון: שם */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_class'] = 'flx-tag';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* קריטריון לסינון: מילון טקסונומי: שם מכונה */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tags' => 'tags',
  );

  /* Display: Tag Cloud */
  $handler = $view->new_display('block', 'Tag Cloud', 'tags_widget');
  $translatables['tags_widget'] = array(
    t('Master'),
    t('Tags Widget'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Tag Cloud'),
  );
  $export['tags_widget'] = $view;

  $view = new view();
  $view->name = 'testimonials';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonials' => 'testimonials',
  );

  /* Display: Testimonials */
  $handler = $view->new_display('page', 'Testimonials', 'page_testimonials');
  $handler->display->display_options['display_description'] = 'Class aptent taciti sociosqu ad litora torquent per conubia nostra';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_author_avatar']['id'] = 'field_author_avatar';
  $handler->display->display_options['fields']['field_author_avatar']['table'] = 'field_data_field_author_avatar';
  $handler->display->display_options['fields']['field_author_avatar']['field'] = 'field_author_avatar';
  $handler->display->display_options['fields']['field_author_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_author_avatar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_avatar']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_testimonials_body']['id'] = 'field_testimonials_body';
  $handler->display->display_options['fields']['field_testimonials_body']['table'] = 'field_data_field_testimonials_body';
  $handler->display->display_options['fields']['field_testimonials_body']['field'] = 'field_testimonials_body';
  $handler->display->display_options['fields']['field_testimonials_body']['label'] = '';
  $handler->display->display_options['fields']['field_testimonials_body']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_testimonials_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_testimonials_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonials_body']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_author_job']['id'] = 'field_author_job';
  $handler->display->display_options['fields']['field_author_job']['table'] = 'field_data_field_author_job';
  $handler->display->display_options['fields']['field_author_job']['field'] = 'field_author_job';
  $handler->display->display_options['fields']['field_author_job']['label'] = '';
  $handler->display->display_options['fields']['field_author_job']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_job']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_author_site']['id'] = 'field_author_site';
  $handler->display->display_options['fields']['field_author_site']['table'] = 'field_data_field_author_site';
  $handler->display->display_options['fields']['field_author_site']['field'] = 'field_author_site';
  $handler->display->display_options['fields']['field_author_site']['label'] = '';
  $handler->display->display_options['fields']['field_author_site']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author_site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_site']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'testimonials';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Testimonials';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block Testimonials */
  $handler = $view->new_display('block', 'Block Testimonials', 'block_testimonials');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Block Testimonials';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_testimonials_body']['id'] = 'field_testimonials_body';
  $handler->display->display_options['fields']['field_testimonials_body']['table'] = 'field_data_field_testimonials_body';
  $handler->display->display_options['fields']['field_testimonials_body']['field'] = 'field_testimonials_body';
  $handler->display->display_options['fields']['field_testimonials_body']['label'] = '';
  $handler->display->display_options['fields']['field_testimonials_body']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_testimonials_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_testimonials_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_testimonials_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonials_body']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_author_avatar']['id'] = 'field_author_avatar';
  $handler->display->display_options['fields']['field_author_avatar']['table'] = 'field_data_field_author_avatar';
  $handler->display->display_options['fields']['field_author_avatar']['field'] = 'field_author_avatar';
  $handler->display->display_options['fields']['field_author_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_author_avatar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_avatar']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['element_default_classes'] = FALSE;
  /* שדה: נקודת אחיזה שבורה/חסרה */
  $handler->display->display_options['fields']['field_author_site']['id'] = 'field_author_site';
  $handler->display->display_options['fields']['field_author_site']['table'] = 'field_data_field_author_site';
  $handler->display->display_options['fields']['field_author_site']['field'] = 'field_author_site';
  $handler->display->display_options['fields']['field_author_site']['label'] = '';
  $handler->display->display_options['fields']['field_author_site']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author_site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_site']['element_default_classes'] = FALSE;
  $translatables['testimonials'] = array(
    t('Master'),
    t('Testimonials'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Class aptent taciti sociosqu ad litora torquent per conubia nostra'),
    t('Block Testimonials'),
  );
  $export['testimonials'] = $view;

  return $export;
}
