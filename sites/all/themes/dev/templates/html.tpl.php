<?php print $doctype; ?>
<html lang="ru" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
<?php print $head; ?>
<title><?php print $head_title; ?></title>  
<link rel="icon" href="/favicon.ico" type="image/x-icon" />
<?php print $styles; ?>

<meta name="verify-v1" content="A29kVzxMcO/zSJlO3EeJzU6vnTgF5KY1HcgHqId0+qA=" />
<meta name="google-site-verification" content="I50q2z2FdQZMKZ_SPHbi7dyjnjn7FD4wLkfEWkks0ZI" />

<!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
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
