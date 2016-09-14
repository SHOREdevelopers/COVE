<?php
/**
 * @file
 * cove_chronologies_timelines.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cove_chronologies_timelines_taxonomy_default_vocabularies() {
  return array(
    'event_source' => array(
      'name' => 'Event Source',
      'machine_name' => 'event_source',
      'description' => 'The source, usually BRANCH for an external event',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
