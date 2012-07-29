<?php
/**
 * @file
 * cte_completer_survey.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cte_completer_survey_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function cte_completer_survey_default_entityform_type() {
  $items = array();
  $items['cte_completer_survey'] = entity_import('entityform_type', '{
    "type" : "cte_completer_survey",
    "label" : "CTE completer survey",
    "weight" : "0",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : "",
      "submit_button_text" : "",
      "submission_page_title" : "",
      "submission_text" : "",
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : ""
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function cte_completer_survey_node_info() {
  $items = array(
    'district' => array(
      'name' => t('District'),
      'base' => 'node_content',
      'description' => t('A district'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'school' => array(
      'name' => t('School'),
      'base' => 'node_content',
      'description' => t('A school'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
