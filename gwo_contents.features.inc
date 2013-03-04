<?php
/**
 * @file
 * gwo_contents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gwo_contents_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gwo_contents_node_info() {
  $items = array(
    'short_article' => array(
      'name' => t('Short Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
