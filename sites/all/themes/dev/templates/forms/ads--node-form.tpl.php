<?php

print l(t('How to add ads?'), 'ads/help.html', array(
      'attributes' => array(
           'class' => 'ads-help-link rich-link',
           'target' => '_blank'
           )
      )
);
print drupal_render_children($form);

