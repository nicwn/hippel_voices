<?php
/**
 * Implementation of hook_ctools_plugin_directory() to let the system
 * know we implement widget plugins.
 */
function hippel_voices_ctools_plugin_directory($module, $plugin) {
  if ($module == 'vud') {
    return $plugin;
  }
}
