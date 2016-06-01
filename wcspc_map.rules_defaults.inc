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
  $items['rules_display_message_node_awaits_moderation'] = entity_import('rules_config', '{ "rules_display_message_node_awaits_moderation" : {
      "LABEL" : "Display message - node awaits moderation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--photo" : { "bundle" : "photo" } },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "4" : "4", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Your photo will be published as soon as our staff approves it." } }
      ]
    }
  }');
  $items['rules_email_admin_about_new_user'] = entity_import('rules_config', '{ "rules_email_admin_about_new_user" : {
      "LABEL" : "Email admin about new user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "katenugent@wcspc.org",
            "subject" : "New user on wcspc.org",
            "message" : "Hi Kate, [account:name] just signed up on the website.  Their email address is [account:mail].  Thought I\\u0027d let you know.  -the Happy WCSPC Robot.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_email_admin_when_new_photo_is_posted'] = entity_import('rules_config', '{ "rules_email_admin_when_new_photo_is_posted" : {
      "LABEL" : "Email admin when new photo is posted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--photo" : { "bundle" : "photo" } },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "4" : "4", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "katenugent@wcspc.org",
            "subject" : "New photo awaits your approval",
            "message" : "Hi Kate, a new photo has been submitted.  You can review and publish it here [site:url]\\/admin\\/content\\/photos. -the Happy WCSPC Robot",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_email_author_when_photo_is_published'] = entity_import('rules_config', '{ "rules_email_author_when_photo_is_published" : {
      "LABEL" : "Email author when their photo is published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--photo" : { "bundle" : "photo" } },
      "IF" : [
        { "data_is" : { "data" : [ "node-unchanged:status" ], "value" : "0" } },
        { "AND" : [ { "data_is" : { "data" : [ "node:status" ], "value" : "1" } } ] }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Your photo was published on WCSPC.org",
            "message" : "Hi [node:author:field-first-name], your photo documenting substance use was published. Find it on the the map at [site:url]\\/photos-substance-use. -the Happy WCSPC Robot",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
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
            "roles" : { "value" : { "2" : "2" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "user\\/[account:uid]" } } ]
    }
  }');
  $items['rules_redirect_user_on_node_save'] = entity_import('rules_config', '{ "rules_redirect_user_on_node_save" : {
      "LABEL" : "Redirect user on node save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--photo" : { "bundle" : "photo" } },
      "DO" : [ { "redirect" : { "url" : [ "node:author:url" ], "force" : "0" } } ]
    }
  }');
  $items['rules_user_login_message'] = entity_import('rules_config', '{ "rules_user_login_message" : {
      "LABEL" : "User Login Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "4" : "4", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "You logged in, now post your photo!" } }
      ]
    }
  }');
  return $items;
}
