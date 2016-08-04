<?php
/**
 * @file
 * cove_chronologies_timelines.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cove_chronologies_timelines_default_rules_configuration() {
  $items = array();
  $items['rules_chron_entry_save_redirect'] = entity_import('rules_config', '{ "rules_chron_entry_save_redirect" : {
      "LABEL" : "Chron. entry save redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "chronology", "redirect" ],
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--chronology_entry" : { "bundle" : "chronology_entry" },
        "node_update--chronology_entry" : { "bundle" : "chronology_entry" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "chronology_entry" : "chronology_entry" } }
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : [ "node:field-parent-chronology:url" ], "force" : "0" } }
      ]
    }
  }');
  $items['rules_chron_notice_'] = entity_import('rules_config', '{ "rules_chron_notice_" : {
      "LABEL" : "Chron. notice ",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "chronology" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--chronology" : { "bundle" : "chronology" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "chronology" : "chronology" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Okay, great [site:current-user], you\\u0027ve just created a Chronology. Now it\\u0027s time to create entries for it. To do that, simply click the \\u0022Add items\\u0022 link below. Further instructions await you there. " } }
      ]
    }
  }');
  return $items;
}
