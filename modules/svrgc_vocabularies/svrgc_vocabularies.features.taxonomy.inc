<?php
/**
 * @file
 * svrgc_vocabularies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function svrgc_vocabularies_taxonomy_default_vocabularies() {
  return array(
    'gallery' => array(
      'name' => 'Gallery',
      'machine_name' => 'gallery',
      'description' => 'Photo gallery',
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
