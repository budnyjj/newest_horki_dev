<?php
/**
 * @file
 * horki2_breakpoints.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function horki2_breakpoints_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'horki2';
  $breakpoint_group->name = 'horki2';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.horki2.desktop_normal',
    1 => 'breakpoints.theme.horki2.desktop_narrow',
    2 => 'breakpoints.theme.horki2.mobile_normal',
    3 => 'breakpoints.theme.horki2.mobile_narrow',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['horki2'] = $breakpoint_group;

  return $export;
}
