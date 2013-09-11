<?php
/**
 * This plugin array is more or less self documenting
 */
$plugin = array(
  // the title in the admin
  'title' => t('Hello panel'),
  // no one knows if "single" defaults to FALSE...
  'single' => TRUE,
  // oh joy, I get my own section of panel panes
  'category' => array(t('Ctools hello'), -9),
  'render callback' => 'hello_user'
);


function hello_user($subtype, $conf, $context = NULL) {
    global $user;
    $block = new stdClass();
    if ($user->uid) {
        $block->content = "Hello, $user->name";}
    else {
        $block->content = "Hello, guest";
    }

return $block;
}






