<?php
/**
 * @file
 * signage_signs.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function signage_signs_default_rules_configuration() {
  $items = array();
  $items['rules_signage_new_sign_create_template'] = entity_import('rules_config', '{ "rules_signage_new_sign_create_template" : {
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
