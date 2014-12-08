<?php
/**
 * @file
 * comments_suite.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function comments_suite_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'comment_form';
  $context->description = 'Comment form for article page';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'comments' => 'comments',
      ),
    ),
    'user' => array(
      'values' => array(
        'Aўтар' => 'Aўтар',
        'authenticated user' => 'authenticated user',
        'Блогер' => 'Блогер',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'commentsblock-comment_form_block' => array(
          'module' => 'commentsblock',
          'delta' => 'comment_form_block',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment form for article page');
  t('blocks');
  $export['comment_form'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'comments';
  $context->description = 'context for comments list on article page';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'node' => array(
      'values' => array(
        'afisha' => 'afisha',
        'company' => 'company',
        'news' => 'news',
        'news_from_readers' => 'news_from_readers',
        'poll' => 'poll',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/*' => 'node/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-comments_block-block' => array(
          'module' => 'views',
          'delta' => 'comments_block-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  t('context for comments list on article page');
  $export['comments'] = $context;

  return $export;
}
