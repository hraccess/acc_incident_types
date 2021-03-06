<?php
/**
 * @file
 * acc_incident_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function acc_incident_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-acc_incident_types-field_access_constraint'
  $field_instances['taxonomy_term-acc_incident_types-field_access_constraint'] = array(
    'bundle' => 'acc_incident_types',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_access_constraint',
    'label' => 'Access Constraint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Constraint');

  return $field_instances;
}
