<?php
/**
 * @file
 * Style: Icon.
 */

namespace Drupal\openlayers\Plugin\Style\Icon;

use Drupal\openlayers\Types\Style;

/**
 * Class Icon.
 *
 * @OpenlayersPlugin(
 *  id = "Icon"
 * )
 */
class Icon extends Style {
  /**
   * {@inheritdoc}
   */
  public function optionsForm(array &$form, array &$form_state) {
    $form['options']['path'] = array(
      '#type' => 'textfield',
      '#title' => 'Path',
      '#default_value' => $this->getOption('path', ''),
    );
    $form['options']['scale'] = array(
      '#type' => 'textfield',
      '#title' => 'Scale',
      '#default_value' => $this->getOption('scale', ''),
    );
    $form['options']['anchor'][0] = array(
      '#type' => 'textfield',
      '#title' => 'Anchor X',
      '#default_value' => $this->getOption(array('anchor', 0), 0.5),
    );
    $form['options']['anchor'][1] = array(
      '#type' => 'textfield',
      '#title' => 'Anchor Y',
      '#default_value' => $this->getOption(array('anchor', 1), 0.5),
    );
  }

}
