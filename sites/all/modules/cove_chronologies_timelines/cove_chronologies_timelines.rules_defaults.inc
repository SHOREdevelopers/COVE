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
  $items['rules_chron_entry_link_notice_cloned_'] = entity_import('rules_config', '{ "rules_chron_entry_link_notice_cloned_" : {
      "LABEL" : "Chron. entry link notice (cloned)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "chronology" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--chronology_entry" : { "bundle" : "chronology_entry" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "chronology_entry" : "chronology_entry" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-parent-chronology" ] } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "drupal_message" : { "message" : "You\\u0027ve just added \\u003Ca href=\\u0022\\/node\\/[entity-fetched:nid]\\u0022\\u003E[entity-fetched:title]\\u003C\\/a\\u003E to your chronology. See below or \\u003Ca href=\\u0022\\/node\\/[entity-fetched:nid]\\u0022\\u003Eview\\u003C\\/a\\u003E \\/ \\u003Ca href=\\u0022\\/node\\/[entity-fetched:nid]\\/edit\\u0022\\u003Eedit\\u003C\\/a\\u003E it separately here. You may also \\u003Ca href=\\u0022\\/node\\/add\\/place\\u0022\\u003Eadd another Place\\u003C\\/a\\u003E. " } }
      ]
    }
  }');
  $items['rules_chron_entry_save_redirect'] = entity_import('rules_config', '{ "rules_chron_entry_save_redirect" : {
      "LABEL" : "Chron. entry save redirect",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
        { "redirect" : { "url" : [ "node:field-parent-chronology:0:url" ], "force" : "0" } }
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
