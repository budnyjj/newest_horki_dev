<?php
/**
 * @file views-view-views-rss--aposhnija-navinu--feed-turbo.tpl.php
 * Template for Yandex.Turbo RSS feed.
 */
?>
<?php print "<?xml"; ?> version="1.0" encoding="utf-8" <?php print "?>"; ?>
<?php
$processed_rss_feed = str_replace("<item>", "<item turbo=\"false\">", $rss_feed);
  print $processed_rss_feed;
?>
