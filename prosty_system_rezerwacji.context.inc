<?php
/**
 * @file
 * prosty_system_rezerwacji.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function prosty_system_rezerwacji_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pokoj_hotelowy';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'room' => 'room',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kalendarz_rezerwacji-block_1' => array(
          'module' => 'views',
          'delta' => 'kalendarz_rezerwacji-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['pokoj_hotelowy'] = $context;

  return $export;
}
