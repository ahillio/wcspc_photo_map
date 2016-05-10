<?php
/**
 * @file
 * wcspc_map.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wcspc_map_default_rules_configuration() {
  $items = array();
  $items['rules_on_saving_photo_redirect_back_to_profile'] = entity_import('rules_config', '{ "rules_on_saving_photo_redirect_back_to_profile" : {
      "LABEL" : "on saving photo redirect back to profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--photo" : { "bundle" : "photo" } },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "5" : "5", "6" : "6" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "user\\/[site:current-user:uid]" } } ]
    }
  }');
  $items['rules_redirect_user_on_login'] = entity_import('rules_config', '{ "rules_redirect_user_on_login" : {
      "LABEL" : "redirect user on login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "5" : "5", "6" : "6" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "user\\/[account:uid]" } } ]
    }
  }');
  return $items;
}
