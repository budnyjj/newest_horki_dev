<?php
/**
 * @file views-view-views-rss.tpl.php
 * Default template for feed displays that use the RSS Fields style.
 */
?>
<?php print "<?xml"; ?> version="1.0" encoding="utf-8" <?php print "?>"; ?>
<?php print str_replace('<item>', '<item turbo="true">', $rss_feed); ?>