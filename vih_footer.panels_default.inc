<?php
/**
 * @file
 * vih_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function vih_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_mccoppin';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '875c4eb5-a2ab-4ded-864c-278f3d760bb7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4e679d63-fedd-49be-8bd1-4352497c7123';
  $pane->panel = 'column1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<ul><li><a href="/node/682">Kontakt</a></li><li><a href="http://elevforeningen.vih.dk">Elevforeningen</a></li><li><a href="http://vies.dk">Vejle Idrætsefterskole</a></li><li><a href="http://kursuscenter.vih.dk">Kursuscenter</a></li><li><a href="/node/683">Privatlivspolitik</a></li></ul>',
    'format' => 'panopoly_html_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4e679d63-fedd-49be-8bd1-4352497c7123';
  $display->content['new-4e679d63-fedd-49be-8bd1-4352497c7123'] = $pane;
  $display->panels['column1'][0] = 'new-4e679d63-fedd-49be-8bd1-4352497c7123';
  $pane = new stdClass();
  $pane->pid = 'new-6022d678-296d-4af5-89af-f2982defba80';
  $pane->panel = 'column3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><a href="http://vih.dk">Vejle Idrætshøjskole</a><br>Ørnebjergvej 28<br>7100 Vejle<br>+45 7582 0811<br><a href="/node/682">Kort og kørsel</a><br><a href="/node/2417"><span>E-mail </span>kontor@vih.dk</a></p>',
    'format' => 'panopoly_html_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6022d678-296d-4af5-89af-f2982defba80';
  $display->content['new-6022d678-296d-4af5-89af-f2982defba80'] = $pane;
  $display->panels['column3'][0] = 'new-6022d678-296d-4af5-89af-f2982defba80';
  $pane = new stdClass();
  $pane->pid = 'new-eeaca36c-8ec2-4056-8809-4cb30588b1a4';
  $pane->panel = 'column3';
  $pane->type = 'social_widget';
  $pane->subtype = 'social_widget';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'show_twitter' => 1,
    'twitter_button_text' => 'Follow us on Twitter',
    'show_facebook' => 1,
    'facebook_button_text' => 'Like us on Facebook',
    'show_google-plus' => 1,
    'google-plus_button_text' => 'Follow us on Google+',
    'show_instagram' => 1,
    'instagram_button_text' => 'Follow us on Instagram',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eeaca36c-8ec2-4056-8809-4cb30588b1a4';
  $display->content['new-eeaca36c-8ec2-4056-8809-4cb30588b1a4'] = $pane;
  $display->panels['column3'][1] = 'new-eeaca36c-8ec2-4056-8809-4cb30588b1a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-eeaca36c-8ec2-4056-8809-4cb30588b1a4';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
