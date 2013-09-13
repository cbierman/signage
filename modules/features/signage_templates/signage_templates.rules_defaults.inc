<?php
/**
 * @file
 * signage_templates.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function signage_templates_default_rules_configuration() {
  $items = array();
  $items['rules_signage_delete_sign_delete_all_templates'] = entity_import('rules_config', '{ "rules_signage_delete_sign_delete_all_templates" : {
      "LABEL" : "Signage Delete Sign -- Delete all Templates",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "signage" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_delete" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "signage_sign" : "signage_sign" } }
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_signage_template_sign_ref",
              "value" : [ "node" ],
              "limit" : "100"
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "entity-fetched" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [ { "entity_delete" : { "data" : [ "list-item" ] } } ]
          }
        }
      ]
    }
  }');
  $items['rules_signage_new_sign_create_default_template'] = entity_import('rules_config', '{ "rules_signage_new_sign_create_default_template" : {
      "LABEL" : "Signage New Sign - Create Default Template",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "signage" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "signage_sign" : "signage_sign" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "signage_template",
              "param_title" : "Default Template",
              "param_author" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:og-group-ref" ],
            "value" : [ "node:og-group-ref" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-signage-template-sign-ref" ],
            "value" : [ "node" ]
          }
        }
      ]
    }
  }');
  return $items;
}
