<?php
/**
 * @file
 * cove_mapping.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cove_mapping_default_rules_configuration() {
  $items = array();
  $items['cove_chronologies_timelines_map_notice'] = entity_import('rules_config', '{ "cove_chronologies_timelines_map_notice" : {
      "LABEL" : "Map notice",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "map" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--map" : { "bundle" : "map" } },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "map" : "map" } } } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Okay, great [site:current-user], you\\u0027ve just created a Map. Now it\\u0027s time to add places to it. To do that, simply click the \\u0022Add items\\u0022 link below. Further instructions await you there. " } }
      ]
    }
  }');
  $items['cove_chronologies_timelines_place_save_redirect'] = entity_import('rules_config', '{ "cove_chronologies_timelines_place_save_redirect" : {
      "LABEL" : "Place save redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "map", "redirect" ],
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--place" : { "bundle" : "place" },
        "node_update--place" : { "bundle" : "place" }
      },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "place" : "place" } } } }
      ],
      "DO" : [
        { "redirect" : { "url" : [ "node:field-parent-map:url" ], "force" : "0" } }
      ]
    }
  }');
  $items['rules_place_link_notice'] = entity_import('rules_config', '{ "rules_place_link_notice" : {
      "LABEL" : "Place link notice",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "map" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--place" : { "bundle" : "place" } },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "place" : "place" } } } },
        { "NOT data_is_empty" : { "data" : [ "node:field-parent-map" ] } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "drupal_message" : { "message" : "You\\u0027ve just added \\u003Ca href=\\u0022\\/node\\/[entity-fetched:nid]\\u0022\\u003E[entity-fetched:title]\\u003C\\/a\\u003E to your map. See below or \\u003Ca href=\\u0022\\/node\\/[entity-fetched:nid]\\u0022\\u003Eview\\u003C\\/a\\u003E \\/ \\u003Ca href=\\u0022\\/node\\/[entity-fetched:nid]\\/edit\\u0022\\u003Eedit\\u003C\\/a\\u003E it separately here. You may also \\u003Ca href=\\u0022\\/node\\/add\\/place\\u0022\\u003Eadd another Place\\u003C\\/a\\u003E. " } }
      ]
    }
  }');
  return $items;
}
