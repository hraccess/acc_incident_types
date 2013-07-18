<?php
/**
 * @file
 * acc_incident_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_incident_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acc_incident_types';
  $view->description = '';
  $view->tag = 'Access';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Access Incident types';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Responsible Actor';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Access Constraint (field_access_constraint) */
  $handler->display->display_options['relationships']['field_access_constraint_tid']['id'] = 'field_access_constraint_tid';
  $handler->display->display_options['relationships']['field_access_constraint_tid']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['relationships']['field_access_constraint_tid']['field'] = 'field_access_constraint_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'incident_type' => 'incident_type',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Access Constraint (field_access_constraint) */
  $handler->display->display_options['filters']['field_access_constraint_tid']['id'] = 'field_access_constraint_tid';
  $handler->display->display_options['filters']['field_access_constraint_tid']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['filters']['field_access_constraint_tid']['field'] = 'field_access_constraint_tid';
  $handler->display->display_options['filters']['field_access_constraint_tid']['value'] = array(
    87 => '87',
    90 => '90',
    92 => '92',
    95 => '95',
  );
  $handler->display->display_options['filters']['field_access_constraint_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_access_constraint_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_constraint_tid']['vocabulary'] = 'access_constraints';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'Mine field identified by Mine Action Authority';
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['operator'] = '!=';
  $handler->display->display_options['filters']['name_1']['value'] = 'Mine presence reported by community but not demarcated';
  $handler->display->display_options['filters']['name_1']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['operator'] = '!=';
  $handler->display->display_options['filters']['name_2']['value'] = 'Travel permit (staff)';
  $handler->display->display_options['filters']['name_2']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_3']['id'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_3']['field'] = 'name';
  $handler->display->display_options['filters']['name_3']['operator'] = '!=';
  $handler->display->display_options['filters']['name_3']['value'] = 'Travel permit (transport of goods)';
  $handler->display->display_options['filters']['name_3']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_4']['id'] = 'name_4';
  $handler->display->display_options['filters']['name_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_4']['field'] = 'name';
  $handler->display->display_options['filters']['name_4']['operator'] = '!=';
  $handler->display->display_options['filters']['name_4']['value'] = 'New project implementation permit';
  $handler->display->display_options['filters']['name_4']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_5']['id'] = 'name_5';
  $handler->display->display_options['filters']['name_5']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_5']['field'] = 'name';
  $handler->display->display_options['filters']['name_5']['operator'] = '!=';
  $handler->display->display_options['filters']['name_5']['value'] = 'Renewal of project implementation permit';
  $handler->display->display_options['filters']['name_5']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_6']['id'] = 'name_6';
  $handler->display->display_options['filters']['name_6']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_6']['field'] = 'name';
  $handler->display->display_options['filters']['name_6']['operator'] = '!=';
  $handler->display->display_options['filters']['name_6']['value'] = 'Memorandum of understanding';
  $handler->display->display_options['filters']['name_6']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_7']['id'] = 'name_7';
  $handler->display->display_options['filters']['name_7']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_7']['field'] = 'name';
  $handler->display->display_options['filters']['name_7']['operator'] = '!=';
  $handler->display->display_options['filters']['name_7']['value'] = 'Technical agreement';
  $handler->display->display_options['filters']['name_7']['group'] = 1;

  /* Display: Incident Types (Access incident) */
  $handler = $view->new_display('entityreference', 'Incident Types (Access incident)', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Incident Type (Access Incident)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_organization_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_organization_type' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Incident types for Impediment on entry into the country */
  $handler = $view->new_display('entityreference', 'Incident types for Impediment on entry into the country', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Incident types for Impediment on entry into the country';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'incident_type' => 'incident_type',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Access Constraint (field_access_constraint) */
  $handler->display->display_options['filters']['field_access_constraint_tid']['id'] = 'field_access_constraint_tid';
  $handler->display->display_options['filters']['field_access_constraint_tid']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['filters']['field_access_constraint_tid']['field'] = 'field_access_constraint_tid';
  $handler->display->display_options['filters']['field_access_constraint_tid']['value'] = array(
    89 => '89',
  );
  $handler->display->display_options['filters']['field_access_constraint_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_constraint_tid']['vocabulary'] = 'access_constraints';

  /* Display: Incident types for Restriction on movement within the country */
  $handler = $view->new_display('entityreference', 'Incident types for Restriction on movement within the country', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Incident types for Restriction on movement within the country';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'incident_type' => 'incident_type',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Access Constraint (field_access_constraint) */
  $handler->display->display_options['filters']['field_access_constraint_tid']['id'] = 'field_access_constraint_tid';
  $handler->display->display_options['filters']['field_access_constraint_tid']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['filters']['field_access_constraint_tid']['field'] = 'field_access_constraint_tid';
  $handler->display->display_options['filters']['field_access_constraint_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_access_constraint_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_constraint_tid']['vocabulary'] = 'access_constraints';
  $translatables['acc_incident_types'] = array(
    t('Master'),
    t('Responsible Actor'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_access_constraint'),
    t('Incident Types (Access incident)'),
    t('Incident Type (Access Incident)'),
    t('Incident types for Impediment on entry into the country'),
    t('Incident types for Restriction on movement within the country'),
  );
  $export['acc_incident_types'] = $view;

  return $export;
}
