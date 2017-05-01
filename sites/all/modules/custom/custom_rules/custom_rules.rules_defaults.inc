<?php
/**
 * @file
 * custom_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function custom_rules_default_rules_configuration() {
  $items = array();
  $items['rules_delete_expired_ads'] = entity_import('rules_config', '{ "rules_delete_expired_ads" : {
      "LABEL" : "Delete expired ads",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "node_expire", "rules" ],
      "ON" : { "node_expired" : [] },
      "IF" : [
        { "node_expire_rules_expired_check" : { "node" : [ "node" ] } },
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "ads" : "ads" } } } }
      ],
      "DO" : [ { "entity_delete" : { "data" : [ "node" ] } } ]
    }
  }');
  $items['rules_send_notification_about_new_comment'] = entity_import('rules_config', '{ "rules_send_notification_about_new_comment" : {
      "LABEL" : "Send notification about new comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "horki.com@gmail.com ",
            "subject" : "\\u041d\\u043e\\u0432\\u044b \\u043a\\u0430\\u043c\\u0435\\u043d\\u0442\\u0430\\u0440 | [site:name]",
            "message" : "\\u041a\\u0430\\u0440\\u044b\\u0441\\u0442\\u0430\\u043b\\u044c\\u043d\\u0456\\u043a [comment:name] \\u043f\\u0430\\u043a\\u0456\\u043d\\u0443\\u045e \\u043a\\u0430\\u043c\\u0435\\u043d\\u0442\\u0430\\u0440 \\u0434\\u0430 \\u0430\\u0440\\u0442\\u044b\\u043a\\u0443\\u043b\\u0430 \\u0022[comment:node]\\u0022.\\r\\nIP-\\u0430\\u0434\\u0440\\u0430\\u0441 \\u043a\\u0430\\u0440\\u044b\\u0441\\u0442\\u0430\\u043b\\u044c\\u043d\\u0456\\u043a\\u0430: [comment:hostname].\\r\\n----------------------------------------------------------\\r\\n\\u0414\\u0430\\u0442\\u0430 \\u043a\\u0430\\u043c\\u0435\\u043d\\u0442\\u0430\\u0432\\u0430\\u043d\\u043d\\u044f: [comment:created]\\r\\n----------------------------------------------------------\\r\\n\\u0422\\u044d\\u043a\\u0441\\u0442 \\u043a\\u0430\\u043c\\u0435\\u043d\\u0442\\u0430\\u0440\\u0430:\\r\\n[comment:body]\\r\\n----------------------------------------------------------\\r\\n\\u0421\\u043f\\u0430\\u0441\\u044b\\u043b\\u043a\\u0430 \\u043d\\u0430 \\u043a\\u0430\\u043c\\u0435\\u043d\\u0442\\u0430\\u0440: \\r\\n[comment:url]\\r\\n\\u041c\\u0430\\u0434\\u044d\\u0440\\u0430\\u0432\\u0430\\u0446\\u044c \\u043a\\u0430\\u043c\\u0435\\u043d\\u0442\\u0430\\u0440: \\r\\n[comment:edit-url]",
            "language" : [ "site:current-page:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
