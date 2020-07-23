<?php

/**
 * @file
 * An example implementation of OpenID Connect client.
 */

/**
 * Custom OpenID Connect client.
 */
class OpenIDConnectClientCustom extends OpenIDConnectClientBase {

  /**
   * {@inheritdoc}
   */
  public function settingsForm() {
    $form = parent::settingsForm();
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function getEndpoints() {
    return array(
      'authorization' => 'https://bavs.ac.uk/oauth/authorize',
      'token' => 'https://bavs.ac.uk/oauth/token',
      'userinfo' => 'https://bavs.ac.uk/oauth/me',
    );
  }

}
