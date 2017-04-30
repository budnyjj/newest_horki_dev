<?php
/**
 * @file
 * horki2_breakpoints.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function horki2_breakpoints_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.horki2.desktop_narrow';
  $breakpoint->name = 'desktop_narrow';
  $breakpoint->breakpoint = '(min-width: 918px)';
  $breakpoint->source = 'horki2';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.horki2.desktop_narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.horki2.desktop_normal';
  $breakpoint->name = 'desktop_normal';
  $breakpoint->breakpoint = '(min-width: 1224px)';
  $breakpoint->source = 'horki2';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.horki2.desktop_normal'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.horki2.mobile_narrow';
  $breakpoint->name = 'mobile_narrow';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'horki2';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.horki2.mobile_narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.horki2.mobile_normal';
  $breakpoint->name = 'mobile_normal';
  $breakpoint->breakpoint = '(min-width: 400px)';
  $breakpoint->source = 'horki2';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.horki2.mobile_normal'] = $breakpoint;

  return $export;
}
