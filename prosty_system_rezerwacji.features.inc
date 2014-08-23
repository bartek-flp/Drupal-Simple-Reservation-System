<?php
/**
 * @file
 * prosty_system_rezerwacji.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function prosty_system_rezerwacji_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function prosty_system_rezerwacji_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function prosty_system_rezerwacji_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Pokój'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'room_reservation' => array(
      'name' => t('Rezerwacja pokoju'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
