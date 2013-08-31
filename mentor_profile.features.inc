<?php
/**
 * @file
 * mentor_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function mentor_profile_default_profile2_type() {
  $items = array();
  $items['mentor'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "mentor",
    "label" : "Mentor",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : [  ]
  }');
  return $items;
}
