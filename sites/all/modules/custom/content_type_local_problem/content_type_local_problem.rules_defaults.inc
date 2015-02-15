<?php
/**
 * @file
 * content_type_local_problem.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function content_type_local_problem_default_rules_configuration() {
  $items = array();
  $items['rules_report_admin_about_new_local_problem'] = entity_import('rules_config', '{ "rules_report_admin_about_new_local_problem" : {
      "LABEL" : "Report admin about new local problem",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "local_problem" : "local_problem" } }
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
        { "redirect" : { "url" : "problems\\/thanks.html" } }
      ]
    }
  }');
  return $items;
}
