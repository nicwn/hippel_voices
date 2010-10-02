<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function hippel_voices_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function hippel_voices_node_info() {
  $items = array(
    'comment' => array(
      'name' => t('Comment'),
      'module' => 'features',
      'description' => t('A comment that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Type'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('An image that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Type'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'module' => 'features',
      'description' => t('A link that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Type'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'module' => 'features',
      'description' => t('A question that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Type'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'suggestion' => array(
      'name' => t('Suggestion'),
      'module' => 'features',
      'description' => t('A suggestion that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Type'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function hippel_voices_views_api() {
  return array(
    'api' => '2',
  );
}
