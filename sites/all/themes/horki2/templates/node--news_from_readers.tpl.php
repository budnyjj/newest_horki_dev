<article<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
	<footer class="submitted"><?php print date("d.m.Y", $node->published_at); ?> &ndash; <?php print date("H:i", $node->published_at); ?> 
  	<?php if ($page): ?> 
  	      <?php if (isset($node_views_cntr)): ?>
	      	    <span class="delimiter">|</span>
	      	    <?php print $node_views_cntr; ?>
  	      <?php endif; ?>
  	      <?php if (isset($node_comments_cntr)): ?>
	      	    <span class="delimiter">|</span>
	      	    <?php print $node_comments_cntr; ?>
  	      <?php endif; ?>
	      <span class="delimiter">|</span>
	      <span class="by-readers"><?php print t("submitted by user") ?></span>
  	<?php endif; ?>
	</footer>
	<?php
	$block = block_load('block', '61');
	$block_array = _block_get_renderable_array(_block_render_blocks(array($block)));
	print render($block_array);   
	?> 
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
</article>
