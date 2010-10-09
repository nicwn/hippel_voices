<?php
// $Id$

/**
 * @file
 * Hipfluence Widget.
 */

/**
 * Implementation of hook_vud_widgets(). (Specialized)
 */
function hippel_voices_suggestion_vud_widgets() {
  return array(
    'widget template' => 'widget',
    'votes template' => 'votes',
  );
}
