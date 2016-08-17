<?php
/**
 * @file
 * Control: OL3CesiumControl.
 */

namespace Drupal\openlayers_cesium\Plugin\Control\OL3CesiumControl;

use Drupal\openlayers\Types\Control;

/**
 * Class OL3CesiumControl.
 *
 * @OpenlayersPlugin(
 *   id = "OL3CesiumControl",
 *   description = "Provides a Openlayers Cesium control."
 * )
 */
class OL3CesiumControl extends Control {
  /**
   * @inheritDoc
   */
  public function attached() {
    $attached = parent::attached();

    $attached['libraries_load'][] = array(
      'ol3-cesium',
    );

    return $attached;
  }

}
