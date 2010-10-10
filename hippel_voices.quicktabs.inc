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
  );
  $quicktabs->style = 'Basic';

  $export['hippel_idea_voice_forms'] = $quicktabs;
  return $export;
}
