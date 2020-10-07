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
      'authorization' => 'http://navsa.org/oauth/authorize',
      'token' => 'http://navsa.org/oauth/token',
      'userinfo' => 'http://navsa.org/oauth/me',
    );
  }

}
