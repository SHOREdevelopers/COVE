<div id="block-<?php print $block->module . '-' . $block->delta; ?>" class="<?php print $classes; ?> " <?php print $attributes; ?>>
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
  <h2><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>

<div class="content"<?php print $content_attributes; ?>>
<nav class="navbar navbar-inverse navbar-fixed-top" id="navbar"> <div class="container"> <ul class="nav navbar-nav pull-left"> <li><a class="navbar-link" href="http://studio.covecollective.org/">COVE Studio <i class="fa fa-external-link-square"></i></a></li> <li class="active"> <a class="navbar-link" target="cove-editions" href="#">COVE Editions</a> </li> </ul>
<ul class="nav navbar-nav pull-right hidden-xs" id="globalnav"> <li>
   <div class="dropdown">
    <button class="btn btn-default dropdown-toggle" type="button" id="menu1" data-toggle="dropdown">Log in
    <span class="caret"></span></button>
    <ul class="dropdown-menu" role="menu" aria-labelledby="menu1">
      <li role="presentation"><?php print $content ?></li>
      <li role="presentation"><a role="menuitem" tabindex="-1" href="/user/login">Not A NAVSA member? Click here.</a></li>
    </ul>
  </div>
	</li>
	<li class="header-logo">
	<a href="http://navsa.org"><img src="/sites/default/files/adaptivetheme/sky_files/NAVSAlogo.png" alt="NAVSA logo"/></a>
	</li>
	<li class="header-logo divider"> | </li><li class="header-logo">
		<a href="https://bavs.ac.uk/">BAVS</a>
	</li>
	<li class="header-logo divider"> | </li>
	<li class="header-logo">
		<a href="http://www.avsa.unimelb.edu.au/">AVSA</a>
	</li>

  </ul> </div> </nav>
</div>
</div>
<script>
document.getElementById("edit-openid-connect-client-generic-login").value = "Log in with NAVSA";
</script>
