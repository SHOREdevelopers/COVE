<?php
/**
 * @file
 * cove_editions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cove_editions_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|editions_index_page|form';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_index_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates',
    'weight' => '7',
    'children' => array(
      0 => 'field_original_publication_date',
      1 => 'field_partial_publication_date',
      2 => 'field_published',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-dates field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_dates|node|editions_index_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|editions_page|default';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates',
    'weight' => '1',
    'children' => array(
      0 => 'field_original_publication_date',
      1 => 'field_partial_publication_date',
      2 => 'field_published',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-dates field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_dates|node|editions_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|editions_page|form';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates',
    'weight' => '4',
    'children' => array(
      0 => 'field_original_publication_date',
      1 => 'field_partial_publication_date',
      2 => 'field_published',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-dates field-group-fieldset',
        'description' => 'Enter a date below marking the original publication date of the document. If the exact date is unknown or there are other date-related considerations not covered by this section, please contact us and we\'ll assist you. ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_dates|node|editions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helpers|node|editions_page|default';
  $field_group->group_name = 'group_helpers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc. helper fields',
    'weight' => '15',
    'children' => array(
      0 => 'field_people_addressed_on_this_p',
      1 => 'field_people_mentioned_on_this_p',
      2 => 'field_places_mentioned_in_this_l',
      3 => 'field_unique_target',
      4 => 'field_xml_tei',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Misc. helper fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-helpers field-group-fieldset',
        'description' => 'These fields are related to the import and scraping of master TEI files:  a link to the TEI file on the server, a unique ID for use when multiple feeds are imported to the same node, and three fields related to pulling people and places where marked up in TEI files. ',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_helpers|node|editions_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helpers|node|editions_page|form';
  $field_group->group_name = 'group_helpers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc. helper fields',
    'weight' => '7',
    'children' => array(
      0 => 'field_people_addressed_on_this_p',
      1 => 'field_people_mentioned_on_this_p',
      2 => 'field_places_mentioned_in_this_l',
      3 => 'field_unique_target',
      4 => 'field_xml_tei',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Misc. helper fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-helpers field-group-fieldset',
        'description' => 'These fields are related to the import and scraping of master TEI files:  a link to the TEI file on the server, a unique ID for use when multiple feeds are imported to the same node, and three fields related to pulling people and places where marked up in TEI files. ',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_helpers|node|editions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|editions_index_page|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_index_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '9',
    'children' => array(
      0 => 'field_index_banner',
      1 => 'field_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_images|node|editions_index_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|editions_index_page|form';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_index_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy Keywords',
    'weight' => '12',
    'children' => array(
      0 => 'opencalais_person_tags',
      1 => 'taxonomy_vocabulary_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy Keywords',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-keywords field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_keywords|node|editions_index_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|editions_page|default';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy Keywords',
    'weight' => '4',
    'children' => array(
      0 => 'opencalais_city_tags',
      1 => 'opencalais_continent_tags',
      2 => 'opencalais_country_tags',
      3 => 'opencalais_naturalfeature_tags',
      4 => 'opencalais_organization_tags',
      5 => 'opencalais_person_tags',
      6 => 'opencalais_provinceorstate_tags',
      7 => 'opencalais_region_tags',
      8 => 'taxonomy_vocabulary_3',
      9 => 'taxonomy_vocabulary_52',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy Keywords',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-keywords field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_keywords|node|editions_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|editions_page|form';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy Keywords',
    'weight' => '6',
    'children' => array(
      0 => 'opencalais_person_tags',
      1 => 'taxonomy_vocabulary_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy Keywords',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-keywords field-group-fieldset',
        'description' => 'Below, you can provide tags for this document using a general free tagging category, "Tags", as well as a "Person" category designed specifically to target people referenced in the document. ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_keywords|node|editions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nines|node|editions_index_page|form';
  $field_group->group_name = 'group_nines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_index_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'NINES Metadata',
    'weight' => '6',
    'children' => array(
      0 => 'field_nines_discipline_s_',
      1 => 'field_nines_genre_s_',
      2 => 'field_nines_type_s_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'NINES Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-nines field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_nines|node|editions_index_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nines|node|editions_page|default';
  $field_group->group_name = 'group_nines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'NINES Metadata',
    'weight' => '21',
    'children' => array(
      0 => 'field_nines_discipline_s_',
      1 => 'field_nines_genre_s_',
      2 => 'field_nines_type_s_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'NINES Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nines field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_nines|node|editions_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nines|node|editions_page|form';
  $field_group->group_name = 'group_nines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'NINES Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_nines_discipline_s_',
      1 => 'field_nines_genre_s_',
      2 => 'field_nines_type_s_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'NINES Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nines field-group-fieldset',
        'description' => 'There is one more important step in classifying the document: the "Genre", "Discipline" and "Type." These are drawn from a tag set developed by NINES. Select all appropriate options below, paying particular attention to "Genre."',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_nines|node|editions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|editions_index_page|form';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_index_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '8',
    'children' => array(
      0 => 'field_edited_by',
      1 => 'field_main_author',
      2 => 'field_resource_technical_editor',
      3 => 'field_annotator',
      4 => 'field_postgraduate_researcher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'People',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-people field-group-fieldset',
        'description' => 'Fields related to authors, editors, etc.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_people|node|editions_index_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|editions_page|default';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '2',
    'children' => array(
      0 => 'field_authored_by_primary_',
      1 => 'field_authored_by_secondary_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'People',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-people field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_people|node|editions_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|editions_page|form';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '5',
    'children' => array(
      0 => 'field_authored_by_primary_',
      1 => 'field_authored_by_secondary_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'People',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-people field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_people|node|editions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|editions_index_page|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_index_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site Structure',
    'weight' => '4',
    'children' => array(
      0 => 'field_parent_section',
      1 => 'field_edition_state',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Site Structure',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-structure field-group-fieldset',
        'description' => 'The fields that define hierarchical relationships among pages in the site, i.e. from Sections ("Editions") > Resources > Individual pages. ',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_structure|node|editions_index_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|editions_page|default';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site Structure',
    'weight' => '3',
    'children' => array(
      0 => 'field_parent_section',
      1 => 'field_resource_index',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Site Structure',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-structure field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_structure|node|editions_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|editions_page|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add to an Edition',
    'weight' => '1',
    'children' => array(
      0 => 'field_resource_index',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add to an Edition',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-structure field-group-fieldset',
        'description' => 'Before you get started creating content, we need to know a few things about this document so that we can place it properly within the site hierarchy. You or someone else should already have created a "Resource" under which this page should fall. Select that below in the "Parent Resource" drop-down. ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_structure|node|editions_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add to an Edition');
  t('Dates');
  t('Images');
  t('Misc. helper fields');
  t('NINES Metadata');
  t('People');
  t('Site Structure');
  t('Taxonomy Keywords');

  return $field_groups;
}
