<?php print $doctype; ?>
<html xmlns:og="http://ogp.me/ns#" lang="ru" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
<?php print $head; ?>
<title><?php print $head_title; ?></title>  
<link rel="shortcut icon" href="/favicon.ico">
<link rel="icon" sizes="16x16 32x32 64x64" href="/favicon.ico">
<link rel="icon" type="image/png" sizes="196x196" href="/sites/default/files/favicons/favicon-192.png">
<link rel="icon" type="image/png" sizes="160x160" href="/sites/default/files/favicons/favicon-160.png">
<link rel="icon" type="image/png" sizes="120x120" href="/sites/default/files/favicons/favicon-120.png">
<link rel="icon" type="image/png" sizes="96x96" href="/sites/default/files/favicons/favicon-96.png">
<link rel="icon" type="image/png" sizes="64x64" href="/sites/default/files/favicons/favicon-64.png">
<link rel="icon" type="image/png" sizes="32x32" href="/sites/default/files/favicons/favicon-32.png">
<link rel="icon" type="image/png" sizes="16x16" href="/sites/default/files/favicons/favicon-16.png">
<link rel="apple-touch-icon" href="/sites/default/files/favicons/favicon-57.png">
<link rel="apple-touch-icon" sizes="114x114" href="/sites/default/files/favicons/favicon-114.png">
<link rel="apple-touch-icon" sizes="72x72" href="/sites/default/files/favicons/favicon-72.png">
<link rel="apple-touch-icon" sizes="144x144" href="/sites/default/files/favicons/favicon-144.png">
<link rel="apple-touch-icon" sizes="60x60" href="/sites/default/files/favicons/favicon-60.png">
<link rel="apple-touch-icon" sizes="120x120" href="/sites/default/files/favicons/favicon-120.png">
<link rel="apple-touch-icon" sizes="76x76" href="/sites/default/files/favicons/favicon-76.png">
<link rel="apple-touch-icon" sizes="152x152" href="/sites/default/files/favicons/favicon-152.png">
<link rel="apple-touch-icon" sizes="180x180" href="/sites/default/files/favicons/favicon-180.png">
<meta name="msapplication-TileColor" content="#FFFFFF">
<meta name="msapplication-TileImage" content="/sites/default/files/favicons/favicon-144.png">
<meta name="msapplication-config" content="/sites/default/files/favicons/browserconfig.xml">  
<meta name="google-site-verification" content="mc_80mJ1g2ulo7wFCZyPg9_tfUYANmS7OCbKrLypEKg" />
<meta name="yandex-verification" content="d4b6a64cdf423497" />

<?php print $styles; ?>

<!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->

<!-- Yandex Direct -->
<script src="https://yastatic.net/pcode/adfox/loader.js" crossorigin="anonymous"></script>

<!-- SendPulse -->
<script charset="UTF-8" src="//cdn.sendpulse.com/js/push/ff43ffd7f1eab9f55eb2b7b70720d4b7_1.js" async></script>

</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
 
  <?php print $scripts; ?>
  <?php print $page_bottom; ?>
</body>
</html>
