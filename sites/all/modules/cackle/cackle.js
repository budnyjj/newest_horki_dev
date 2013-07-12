var mcSite = Drupal.settings.cackle.cackle_mc_site;;
var mcChannel = Drupal.settings.cackle.node_id;;
document.getElementById('mc-container').innerHTML = '';
(function() {
    var mc = document.createElement('script');
    mc.type = 'text/javascript';
    mc.async = true;
    mc.src = 'http://cackle.me/mc.widget-min.js';
    (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(mc);
})();
