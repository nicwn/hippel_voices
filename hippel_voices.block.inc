<?php
/**
 * Implementation of hook_block().
 */
function hippel_voices_block($op = 'list', $delta = 0, $edit = array()) {
  switch ($op) {
    case 'list':
      $blocks['hippel-voices-comment'] = array(
        'info' => t('Hippel Idea (Comment Form)'),
        'cache' => BLOCK_NO_CACHE,
      );
      $blocks['hippel-voices-question'] = array(
        'info' => t('Hippel Idea (Question Form)'),
        'cache' => BLOCK_NO_CACHE,
      );
      $blocks['hippel-voices-suggestion'] = array(
        'info' => t('Hippel Idea (Suggestion Form)'),
        'cache' => BLOCK_NO_CACHE,
      );
      $blocks['hippel-voices-image'] = array(
        'info' => t('Hippel Idea (Image Form)'),
        'cache' => BLOCK_NO_CACHE,
      );
      $blocks['hippel-voices-link'] = array(
        'info' => t('Hippel Idea (Link Form)'),
        'cache' => BLOCK_NO_CACHE,
      );
      return $blocks;
      break;

    case 'view':
      if ($delta == 'hippel-voices-comment') {
        return hippel_voices_get_block('comment', 'Leave a comment');
      }
      elseif ($delta == 'hippel-voices-question') {
        return hippel_voices_get_block('question', 'Ask a question');
      }
      elseif ($delta == 'hippel-voices-suggestion') {
        return hippel_voices_get_block('suggestion', 'Make a suggestion');
      }
      elseif ($delta == 'hippel-voices-image') {
        return hippel_voices_get_block('image', 'Upload an image');
      }
      elseif ($delta == 'hippel-voices-link') {
        return hippel_voices_get_block('link', 'Share a link');
      }
      else {
        break;
      }
  }
}

/**
 * Generate a block containing a node entry form.
 */
function hippel_voices_get_block($type, $subject) {
  if (node_access('create', $type)) {
    // Include page handler for node_add()
    module_load_include('inc', 'node', 'node.pages');
    // Get the title before rendering the form.
    $title = drupal_get_title();
    $form = node_add($type);
    // Restore title, which will have been overridden.
    drupal_set_title($title);
    $node_type = node_get_types('type', $type);
    $help = (!empty($node_type->help) ? '<p>'. filter_xss_admin($node_type->help) .'</p>' : '');
    return array(
      'subject' => t($subject),
      'content' => $help . $form,
    );
  }
}

