<?php
/**
 * @file
 * comments_suite.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function comments_suite_default_rules_configuration() {
  $items = array();
  $items['rules_narodnaja_navina'] = entity_import('rules_config', '{ "rules_narodnaja_navina" : {
      "LABEL" : "Report admin about new narodnaja navina",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "news_from_readers" : "news_from_readers" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "admin@horki.info",
            "subject" : "\\u041d\\u0430\\u0440\\u043e\\u0434\\u043d\\u0430\\u044f \\u043d\\u0430\\u0432\\u0456\\u043d\\u0430: [node:title]",
            "message" : "[node:title] \\r\\n\\r\\n[node:body]\\r\\n\\r\\n[node:edit-url]",
            "language" : [ "" ]
          }
        },
        { "redirect" : { "url" : "narodnaja\\/thanks.html" } }
      ]
    }
  }');
  return $items;
}
