<?php
/**
 * @file
 * cove_editions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cove_editions_default_rules_configuration() {
  $items = array();
  $items['rules_change_doc_author'] = entity_import('rules_config', '{ "rules_change_doc_author" : {
      "LABEL" : "Change Doc Author",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "author", "POST" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--editions_page" : { "bundle" : "editions_page" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_doc_owner" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "editions_page" : "editions_page" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-doc-owner" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:author" ], "value" : [ "node:field-doc-owner" ] } }
      ]
    }
  }');
  return $items;
}
