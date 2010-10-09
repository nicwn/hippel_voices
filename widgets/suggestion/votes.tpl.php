<?php
// $Id: votes.tpl.php,v 1.1.2.8 2010/03/12 08:06:45 marvil07 Exp $
/**
 * @file
 * votes.tpl.php
 *
 * Plain widget votes display for Vote Up/Down
 */
?>
<span id="<?php print $id; ?>" class="total-votes-plain"><div class="bar"><div class="foreground" style="width:<?php print ($unsigned_points*0.6); ?>%"><span class="<?php print $class; ?> total"><?php print $unsigned_points; ?> <?php print $vote_label; ?></span></div></div></span>
