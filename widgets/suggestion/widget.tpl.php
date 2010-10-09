<?php
// $Id$

/**
 * @file
 * widget.tpl.php
 *
 * Suggestion widget theme for Vote Up/Down
 */
?>
<?php if ($show_links): ?>
  <div class="vud-widget vud-widget-suggestion" id="<?php print $id; ?>">
    <a href="<?php print $link_up; ?>" rel="nofollow" class="<?php print $link_class_up; ?>">
      <span class="<?php print $class_up; ?>" title="<?php print t('Vote up!'); ?>"></span>
    </a>
    <div class="unsigned-votes-suggestion"><span id="<?php print $id; ?>"><span class="<?php print $class; ?> total"><?php print $unsigned_points; ?></span></span></div>
    <a href="<?php print $link_down; ?>" rel="nofollow" class="<?php print $link_class_down; ?>">
      <span class="<?php print $class_down; ?>" title="<?php print t('Vote down!'); ?>"></span>
    </a>
    <span class="total-votes-suggestion"><span class="<?php print $class; ?> total"><div><?php print $vote_count; ?></div><div><?php print $count_label; ?></div></span></span>
  </div>
<?php endif; ?>
