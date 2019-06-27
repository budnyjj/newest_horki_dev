<?php

/**
 * @file
 * text_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function text_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Ads text.
  $formats['ads_text'] = array(
    'format' => 'ads_text',
    'name' => 'Ads text',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
    'filters' => array(
      'filter_html' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a>, <p>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 3,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Anonymous text.
  $formats['anonymous_text'] = array(
    'format' => 'anonymous_text',
    'name' => 'Anonymous text',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'htmlpurifier_basic' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(
          'htmlpurifier_help' => 0,
          'htmlpurifier_basic_config' => array(
            'Attr.EnableID' => 0,
            'AutoFormat.AutoParagraph' => 0,
            'AutoFormat.Linkify' => 1,
            'AutoFormat.RemoveEmpty' => 0,
            'HTML.Allowed' => 'p[class],a[href],em,strike,u,strong,ul,ol,li,h2[class],h3[class],img[src][style][alt][title][width][height]',
            'HTML.ForbiddenAttributes' => '',
            'HTML.ForbiddenElements' => '',
            'HTML.SafeObject' => 0,
            'Output.FlashCompat' => 0,
            'URI.DisableExternalResources' => 0,
            'URI.DisableResources' => 0,
            'Null_URI.Munge' => 1,
          ),
        ),
      ),
      'picture' => array(
        'weight' => 3,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Author text.
  $formats['author_text'] = array(
    'format' => 'author_text',
    'name' => 'Author text',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'video_embed_field' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'picture' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Comment text.
  $formats['comment_text'] = array(
    'format' => 'comment_text',
    'name' => 'Comment text',
    'cache' => 1,
    'status' => 1,
    'weight' => -5,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a>, <p>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'picture' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
