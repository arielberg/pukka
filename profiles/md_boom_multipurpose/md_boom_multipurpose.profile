<?php
  /**
    * @file md_boom_multipurpose.install
    */

  /**
  * Implements hook_install_alter()
  */
  function md_boom_multipurpose_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'MD Boom Multipurpose';
    $form['admin_account']['install_demo'] = array(
      '#type' => 'checkbox',
      '#title' => st('Install site with demo data'),
      '#default_value' => 1,
      '#prefix' => '<h4>Demo data</h4>',
    );

    # Add validate form to save theme options install
    array_unshift($form['#validate'], '_md_boom_multipurpose_configure_form_validate');
  }

  /**
    * Implements validate install config form
    */
  function _md_boom_multipurpose_configure_form_validate(&$form, &$form_state) {
    variable_set('md_boom_multipurpose_theme_install_option', $form_state['values']['install_demo']);

    # Add data for variable table
    $database = variable_get('md_boom_multipurpose_database', NULL);

    if ($database != NULL && is_array($database)) {
      # Get existed variables
      $existed_vars = db_select('variable', 'var')
                        ->fields('var', array('name'))
                        ->execute()
                        ->fetchAll();
      foreach($existed_vars as $id => $val) {
        $existed_vars[$id] = $val->name;
      }

      $first_record = (array)array_shift($database['data']['variable']);
      $fields = array_keys($first_record);
      $database['data']['variable'][] = (object)$first_record;
      $query = db_insert('variable')->fields($fields);
      foreach ($database['data']['variable'] as $record) {
        if (in_array($record->name, $existed_vars)) {
          continue;
        }

        $record = (array)$record;
        $query->values($record);
      }

      $query->execute();
    }
  }

  