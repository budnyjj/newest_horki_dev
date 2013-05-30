<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <link rel="icon" href="http://horki.info/favicon.ico" type="image/x-icon" />
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <meta name="verify-v1" content="A29kVzxMcO/zSJlO3EeJzU6vnTgF5KY1HcgHqId0+qA=" />
<meta name="google-site-verification" content="I50q2z2FdQZMKZ_SPHbi7dyjnjn7FD4wLkfEWkks0ZI" />

<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-17432924-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/ru_RU/all.js#xfbml=1&appId=228453163950847";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
 <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
<!--Akavita counter start-->
<script type="text/javascript">var AC_ID=23312;var AC_TR=false;
(function(){var l='http://adlik.akavita.com/acode.js'; var t='text/javascript';
try {var h=document.getElementsByTagName('head')[0];
var s=document.createElement('script'); s.src=l;s.type=t;h.appendChild(s);}catch(e){
document.write(unescape('%3Cscript src="'+l+'" type="'+t+'"%3E%3C/script%3E'));}})();
</script><span id="AC_Image"></span>
<noscript><a target='_blank' href='http://www.akavita.by/'>
<img src='http://adlik.akavita.com/bin/lik?id=23312&it=1'
border='0' height='1' width='1' alt='Akavita'/>
</a></noscript>
<!--Akavita counter end-->
</body>
</html>
