<div id="block-<?php print $block->module . '-' . $block->delta; ?>" class="<?php print $classes; ?> " <?php print $attributes; ?>>
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
  <h2><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>

<div class="content"<?php print $content_attributes; ?>>
<nav class="navbar navbar-inverse navbar-fixed-top" id="navbar"> <div class="container"> <nav class="navbar navbar-inverse navbar-fixed-top" id="navbar"> <div class="container"> <ul class="nav navbar-nav"> <li><a class="navbar-link" href="#">COVE Studio <i class="fa fa-external-link-square"></i></a></li> <li class="active"> <a class="navbar-link" target="cove-editions" href="http://dev-rc-distro.pantheonsite.io/">COVE Editions</a> </li> </ul> <ul class="nav navbar-nav pull-right hidden-xs" id="globalnav"> <li>
<?php print $content ?>
</li> <a href="http://navsa.org"><img src="/sites/default/files/adaptivetheme/sky_files/NAVSAlogo.png" alt="NAVSA logo"/></a> </ul> </div> </nav> </div> </nav>
</div>
</div>
<script>
document.getElementById("edit-openid-connect-client-generic-login").value = "Log in";
</script>