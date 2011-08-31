<?php

/**
 * Implementation of hook_strongarm().
 */
function msfeat_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_allowed_profile';
  $strongarm->value = array(
    0 => 3,
  );
  $export['better_formats_allowed_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_profile';
  $strongarm->value = 0;
  $export['comment_anonymous_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_profile';
  $strongarm->value = '3';
  $export['comment_controls_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_profile';
  $strongarm->value = '4';
  $export['comment_default_mode_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_profile';
  $strongarm->value = '1';
  $export['comment_default_order_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_profile';
  $strongarm->value = '0';
  $export['comment_form_location_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_profile';
  $strongarm->value = '1';
  $export['comment_preview_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_profile';
  $strongarm->value = '0';
  $export['comment_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_profile';
  $strongarm->value = '1';
  $export['comment_subject_field_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_profile';
  $strongarm->value = array(
    'title' => '2',
    'body_field' => '4',
    'revision_information' => '9',
    'author' => '8',
    'options' => '10',
    'comment_settings' => '11',
    'menu' => '6',
    'path' => '13',
    'flag' => '0',
    'path_redirect' => '12',
    'nodewords' => '7',
  );
  $export['content_extra_weights_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_profile_pattern';
  $strongarm->value = '[type]/[title-raw]';
  $export['pathauto_node_profile_pattern'] = $strongarm;

  return $export;
}
