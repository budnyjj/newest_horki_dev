<?php
/**
 * @file
 * menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Распрацоўка',
    'description' => 'Development link',
  );
  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Функцыі',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: menu-additional-menu.
  $menus['menu-additional-menu'] = array(
    'menu_name' => 'menu-additional-menu',
    'title' => 'Дадатковае меню',
    'description' => 'Меню са спасылкамі з розных крыніц',
  );
  // Exported menu: menu-geografic.
  $menus['menu-geografic'] = array(
    'menu_name' => 'menu-geografic',
    'title' => 'Геаграфiчнае меню',
    'description' => 'Геаграфiчнае меню нашага сайта',
  );
  // Exported menu: menu-main.
  $menus['menu-main'] = array(
    'menu_name' => 'menu-main',
    'title' => 'Галоўнае меню',
    'description' => 'Галоўнае меню сайта',
  );
  // Exported menu: menu-mobile-anonymous.
  $menus['menu-mobile-anonymous'] = array(
    'menu_name' => 'menu-mobile-anonymous',
    'title' => 'Мабільнае меню (ананім) ',
    'description' => 'Мабільнае меню для ананімнага карыстальніка',
  );
  // Exported menu: menu-mobile-registered.
  $menus['menu-mobile-registered'] = array(
    'menu_name' => 'menu-mobile-registered',
    'title' => 'Мабільнае меню (для зарэгістраваных)',
    'description' => 'Мабільнае меню для зарэгістраваных карыстальнікаў.',
  );
  // Exported menu: menu-old.
  $menus['menu-old'] = array(
    'menu_name' => 'menu-old',
    'title' => 'Старыя тэмы',
    'description' => '',
  );
  // Exported menu: menu-system.
  $menus['menu-system'] = array(
    'menu_name' => 'menu-system',
    'title' => 'Сістэмнае меню',
    'description' => 'Сістэмнае меню сайта',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Навігацыя',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Development link');
  t('Menu items for any enabled features.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('Галоўнае меню');
  t('Галоўнае меню сайта');
  t('Геаграфiчнае меню');
  t('Геаграфiчнае меню нашага сайта');
  t('Дадатковае меню');
  t('Мабільнае меню (ананім) ');
  t('Мабільнае меню (для зарэгістраваных)');
  t('Мабільнае меню для ананімнага карыстальніка');
  t('Мабільнае меню для зарэгістраваных карыстальнікаў.');
  t('Меню са спасылкамі з розных крыніц');
  t('Навігацыя');
  t('Распрацоўка');
  t('Старыя тэмы');
  t('Сістэмнае меню');
  t('Сістэмнае меню сайта');
  t('Функцыі');

  return $menus;
}
