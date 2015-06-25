<?php
/**
 * @file engagement_workflow.rules.inc
 * Contains custom code for Rules module.
 */

/**
 * Implementation of hook_rules_event_info().
 * @ingroup rules
 */
function mailchimp_rules_event_info() {
  return array(
    'mailchimp_subscribe_user' => array(
      'label' => t('Email was subscribed to list'),
      'group' => t('MailChimp'),
      'variables' => array(
        'list' => array(
          'type' => 'text',
          'label' => t('A mailchimp lists entity.')
        ),
        'email' => array(
          'type' => 'text',
          'label' => t('Email address to be subscribed.')
        ),
      ),
    ),
    'mailchimp_unsubscribe_user' => array(
      'label' => t('Email was unsubscribed from list'),
      'group' => t('MailChimp'),
      'variables' => array(
        'list' => array(
          'type' => 'text',
          'label' => t('A mailchimp lists entity.')
        ),
        'email' => array(
          'type' => 'text',
          'label' => t('Email address to be unsubscribed.')
        ),
      ),
    ),
  );
}