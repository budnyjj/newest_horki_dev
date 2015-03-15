<?php

print l(t('How to add local problems?'), 'problems/help.html', array(
      'attributes' => array(
           'class' => 'local-problems-help-link rich-link',
           'target' => '_blank'
           )
      )
);
print drupal_render_children($form);
?>
