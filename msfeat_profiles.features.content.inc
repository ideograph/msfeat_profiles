<?php

/**
 * Implementation of hook_content_default_fields().
 */
function msfeat_profiles_content_default_fields() {
  $fields = array();

  // Exported field: field_image_profile
  $fields['profile-field_image_profile'] = array(
    'field_name' => 'field_image_profile',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'profile_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'profile_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/profiles',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'defaultuser-hirez.png',
        'filepath' => 'sites/all/files/imagefield_default_images/defaultuser-hirez.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/all/files/imagefield_default_images/defaultuser-hirez.png',
        'filesize' => 7718,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1314089568,
        'fid' => '1',
      ),
      'use_default_image' => 1,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_header' => 0,
        'imagecache_inline' => 0,
        'imagecache_profile' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'profile image',
      'weight' => '1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_jobtitle
  $fields['profile-field_jobtitle'] = array(
    'field_name' => 'field_jobtitle',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '24',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_jobtitle][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Job Title',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Job Title');
  t('profile image');

  return $fields;
}
