<?php
/**
 * @file
 * user_registration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function user_registration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'system';
  $context->description = 'Кантэкст для старонак даведкі, стварэння новых нод';
  $context->tag = 'inner';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'path' => array(
      'values' => array(
        'davedka.html' => 'davedka.html',
        'davedka/*' => 'davedka/*',
        'node/add/*' => 'node/add/*',
        'uzgorak/*' => 'uzgorak/*',
        'library/*' => 'library/*',
        'user' => 'user',
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'uzhorak',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('inner');
  t('Кантэкст для старонак даведкі, стварэння новых нод');
  $export['system'] = $context;

  return $export;
}
