<?php
/**
 * @file
 * cte_completer_survey.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function cte_completer_survey_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique SRN';
  $rule->name = 'unique_srn';
  $rule->field_name = 'field_srn';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'cte_completer_survey';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'errors' => 1,
  );
  $rule->error_message = 'The [field-name] [value] is already used by another form.';
  $export['unique_srn'] = $rule;

  return $export;
}
