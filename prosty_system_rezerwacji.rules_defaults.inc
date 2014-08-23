<?php
/**
 * @file
 * prosty_system_rezerwacji.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function prosty_system_rezerwacji_default_rules_configuration() {
  $items = array();
  $items['rules_wiadomo_c_po_zapisaniu_rezerwacji'] = entity_import('rules_config', '{ "rules_wiadomo_c_po_zapisaniu_rezerwacji" : {
      "LABEL" : "Wiadomo\\u015bc po zapisaniu rezerwacji",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--room_reservation" : { "bundle" : "room_reservation" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_reservation_email" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-reservation-email]",
            "subject" : "Potwierdz rezerwacje",
            "message" : "Tresc",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : {
            "message" : "Na Tw\\u00f3j adres email wys\\u0142ali\\u015bmy wiadomo\\u015bc z informacja jak potwierdzi\\u0107 rejestarcj\\u0119.",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  return $items;
}
