<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function hippel_voices_quicktabs_default_quicktabs() {
  $export = array();
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'hippel_idea_voice_forms';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Add your voice';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'hippel_voices_delta_hippel-voices-comment',
      'hide_title' => 1,
      'title' => 'Comment',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'hippel_voices_delta_hippel-voices-question',
      'hide_title' => 1,
      'title' => 'Question',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'hippel_voices_delta_hippel-voices-suggestion',
      'hide_title' => 1,
      'title' => 'Suggestion',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'hippel_voices_delta_hippel-voices-image',
      'hide_title' => 1,
      'title' => 'Image',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'hippel_voices_delta_hippel-voices-link',
      'hide_title' => 1,
      'title' => 'Link',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'Basic';

  $export['hippel_idea_voice_forms'] = $quicktabs;
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'hippel_voices';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'What people are saying';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_1',
      'args' => '%1',
      'get_displays' => 'vdisp_0',
      'title' => 'All',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_2',
      'args' => '%1',
      'get_displays' => 'vdisp_1',
      'title' => 'Comments',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_3',
      'args' => '%1',
      'get_displays' => 'vdisp_2',
      'title' => 'Questions',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_4',
      'args' => '%1',
      'get_displays' => 'vdisp_3',
      'title' => 'Suggestions',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_5',
      'args' => '%1',
      'get_displays' => 'vdisp_4',
      'title' => 'Images',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_6',
      'args' => '%1',
      'get_displays' => 'vdisp_5',
      'title' => 'Links',
      'weight' => '-95',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Arrows';

  $export['hippel_voices'] = $quicktabs;
  return $export;
}
