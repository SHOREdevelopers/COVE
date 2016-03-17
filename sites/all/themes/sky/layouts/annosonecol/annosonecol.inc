<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Single column for Annotations'),
  'category' => t('Columns: 1'),
  'icon' => 'annosonecol.png',
  'theme' => 'annosonecol',
  'css' => 'annosonecol.css',
  'regions' => array(
    'annos' => t('Annotation area'),
    'main' => t('Main'),
    'rightfloat' => t('Right floated'),
  ),
);
