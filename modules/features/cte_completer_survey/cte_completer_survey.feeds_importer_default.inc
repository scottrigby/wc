<?php
/**
 * @file
 * cte_completer_survey.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cte_completer_survey_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cte_completer_survey';
  $feeds_importer->config = array(
    'name' => 'CTE completer survey',
    'description' => 'An Entityform importer for CTE completer survey',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorEntityform',
      'config' => array(
        'values' => array(
          'type' => 'cte_completer_survey',
        ),
        'mappings' => array(
          0 => array(
            'source' => 'SRN',
            'target' => 'field_srn',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Certification or license',
            'target' => 'field_certification_or_license',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Working to obtain certification or license',
            'target' => 'field_working_to_obtain_certific',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'On active duty',
            'target' => 'field_on_active_duty',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'Employed full time',
            'target' => 'field_employed_full_time',
            'unique' => 0,
          ),
          5 => array(
            'source' => 'Employed part time',
            'target' => 'field_employed_part_time',
            'unique' => 0,
          ),
          6 => array(
            'source' => 'Seeking employment',
            'target' => 'field_seeking_employment',
            'unique' => 0,
          ),
          7 => array(
            'source' => 'Reason not employed',
            'target' => 'field_reason_not_employed',
            'unique' => 0,
          ),
          8 => array(
            'source' => 'CTE required for current job',
            'target' => 'field_cte_required_for_current_j',
            'unique' => 0,
          ),
          9 => array(
            'source' => 'CTE related to current job',
            'target' => 'field_cte_related_to_current_job',
            'unique' => 0,
          ),
          10 => array(
            'source' => 'Certification related to current job',
            'target' => 'field_certification_related_to_c',
            'unique' => 0,
          ),
          11 => array(
            'source' => 'CTE skills in current job',
            'target' => 'field_cte_skills_in_current_job',
            'unique' => 0,
          ),
          12 => array(
            'source' => 'Additional education',
            'target' => 'field_additional_education',
            'unique' => 0,
          ),
          13 => array(
            'source' => 'Full or part time student',
            'target' => 'field_full_or_part_time_student',
            'unique' => 0,
          ),
          14 => array(
            'source' => 'Additional education types',
            'target' => 'field_additional_education_types',
            'unique' => 0,
          ),
          15 => array(
            'source' => 'CTE related to additional education',
            'target' => 'field_cte_related_to_additional_',
            'unique' => 0,
          ),
          16 => array(
            'source' => 'Comments or suggestions',
            'target' => 'field_comments_or_suggestions',
            'unique' => 0,
          ),
          17 => array(
            'source' => 'Program',
            'target' => 'field_program',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'School',
            'target' => 'field_school:label',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'District',
            'target' => 'field_district:label',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Preparation for further education or employment',
            'target' => 'field_preparation_edu_employment',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['cte_completer_survey'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cte_district';
  $feeds_importer->config = array(
    'name' => 'CTE district',
    'description' => 'A node importer for CTE districts',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'district',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'District',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cte_district'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cte_school';
  $feeds_importer->config = array(
    'name' => 'CTE school',
    'description' => 'A node importer for CTE schools',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'school',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'School',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'District',
            'target' => 'field_district:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['cte_school'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cte_taxonomy_program';
  $feeds_importer->config = array(
    'name' => 'CTE taxonomy program',
    'description' => 'A taxonomy importer for CTE program vocabulary',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'program',
        'force_update' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Program',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cte_taxonomy_program'] = $feeds_importer;

  return $export;
}
