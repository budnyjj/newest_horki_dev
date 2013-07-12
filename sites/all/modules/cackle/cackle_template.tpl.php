<?php
/**
 * @file
 * Cackle template for comments.
 */
?>
<div id="mc-container">
    <div id="mc-content">
        <?php if ($has_curl): ?>
        <ul id="cackle-comments">
            <?php
            foreach ($obj as $comment): ?>
            <li id="cackle-comment-<?php echo $comment->cid; ?>">
                <div id="cackle-comment-header-<?php echo $comment->cid; ?>" class="cackle-comment-header">
                    <cite id="cackle-cite-<?php echo $comment->cid; ?>">
                        <a id="cackle-author-user-<?php echo $comment->cid; ?>" href="<?php echo check_url($comment->homepage); ?>" target="_blank" rel="nofollow"><?php echo check_plain($comment->name); ?></a>
                    </cite>
                </div>
                <div id="cackle-comment-body-<?php echo $comment->cid; ?>" class="cackle-comment-body">
                    <div id="cackle-comment-message-<?php echo $comment->cid; ?>" class="cackle-comment-message">
                        <?php echo check_plain($comment->comment_body_value); ?>
                    </div>
                </div>
            </li>
            <?php endforeach; ?>

        </ul>
        <?php endif; ?>
    </div>
</div>
