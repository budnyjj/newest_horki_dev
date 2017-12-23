<?php
/**
 * @file
 * context_map_of_problems.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_map_of_problems_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'map_local_problems';
  $context->description = 'Кантэкст для мапы мясцовых праблем';
  $context->tag = 'template';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'path' => array(
      'values' => array(
        'problems/map.html' => 'problems/map.html',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'horki2_map_local_problems',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('template');
  t('Кантэкст для мапы мясцовых праблем');
  $export['map_local_problems'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'map_problems_views';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'views' => array(
      'values' => array(
        'map_local_problems:page' => 'map_local_problems:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openlayers_plus-blockswitcher' => array(
          'module' => 'openlayers_plus',
          'delta' => 'blockswitcher',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-local_problems-block_4' => array(
          'module' => 'views',
          'delta' => 'local_problems-block_4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-local_problems-block_3' => array(
          'module' => 'views',
          'delta' => 'local_problems-block_3',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-knowledge_base-block_1' => array(
          'module' => 'views',
          'delta' => 'knowledge_base-block_1',
          'region' => 'sidebar_third',
          'weight' => '-10',
        ),
        'block-33' => array(
          'module' => 'block',
          'delta' => '33',
          'region' => 'sidebar_fourth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['map_problems_views'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'problem_node';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'node' => array(
      'values' => array(
        'local_problem' => 'local_problem',
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
        'block-48' => array(
          'module' => 'block',
          'delta' => '48',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-local_problems-block_1' => array(
          'module' => 'views',
          'delta' => 'local_problems-block_1',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['problem_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'problem_views';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'views' => array(
      'values' => array(
        'local_problems:page_9' => 'local_problems:page_9',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-knowledge_base-block_1' => array(
          'module' => 'views',
          'delta' => 'knowledge_base-block_1',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['problem_views'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'solution_node';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'node' => array(
      'values' => array(
        'local_solution' => 'local_solution',
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
        'block-48' => array(
          'module' => 'block',
          'delta' => '48',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-knowledge_base-block_1' => array(
          'module' => 'views',
          'delta' => 'knowledge_base-block_1',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['solution_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'solution_views';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'base' => 'base',
      ),
    ),
    'views' => array(
      'values' => array(
        'knowledge_base:page_9' => 'knowledge_base:page_9',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-local_problems-block_1' => array(
          'module' => 'views',
          'delta' => 'local_problems-block_1',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['solution_views'] = $context;

  return $export;
}
