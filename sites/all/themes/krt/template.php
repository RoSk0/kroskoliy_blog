<?php

/**
 * @file
 * Template for theme.
 */

/**
 * Implements hook_preprocess_page().
 */
function krt_preprocess_page(&$vars) {
  $site_name = variable_get('site_name');
  $options = array('html' => TRUE, 'external' => TRUE, 'attributes' => array('title' => ''));
  $path = drupal_get_path('theme', 'krt') . '/images/';
  $drupalorg_img = theme('image', array('path' => $path . 'druplicon.png'));
  $drupalorg_profile = 'https://drupal.org/user/325151';
  $drupalorg_options = $options;
  $drupalorg_options['attributes']['title'] = $site_name . ' in Drupal.org';
  $facebook_img = theme('image', array('path' => $path . 'facebook.png'));
  $facebook_profile = 'https://www.facebook.com/Roskoliy.Kirill';
  $facebook_options = $options;
  $facebook_options['attributes']['title'] = $site_name . ' in Facebook';
  $twitter_img = theme('image', array('path' => $path . 'twitter.png'));
  $twitter_profile = 'https://twitter.com/roskoliy_kirill';
  $twitter_options = $options;
  $twitter_options['attributes']['title'] = $site_name . ' in Twitter';
  $google_img = theme('image', array('path' => $path . 'google_plus.png'));
  $google_profile = 'https://plus.google.com/u/0/103371556403809366918';
  $google_options = $options;
  $google_options['attributes']['title'] = $site_name . ' in Google+';
  $linkedin_img = theme('image', array('path' => $path . 'linkedin.png'));
  $linkedin_profile = 'http://ua.linkedin.com/in/roskoliykirill/';
  $linkedin_options = $options;
  $linkedin_options['attributes']['title'] = $site_name . ' in LinkedIn';
  $github_img = theme('image', array('path' => $path . 'github.png'));
  $github_profile = 'https://github.com/RoSk0';
  $github_options = $options;
  $github_options['attributes']['title'] = $site_name . ' in GitHub';
  $skype_img = theme('image', array('path' => $path . 'skype.png'));
  $skype_options = $options;
  $skype_options['attributes']['title'] = $site_name . ' in Skype';
  $email_img = theme('image', array('path' => $path . 'mail.png'));
  $email_options = $options;
  $email_options['attributes']['title'] = 'Contact me';
  unset($email_options['external']);
  $rss_img = theme('image', array('path' => $path . 'rss.png'));
  $rss_options = $options;
  $rss_options['attributes']['title'] = 'RSS';

  $items = array(
    'drupalorg' => l($drupalorg_img, $drupalorg_profile, $drupalorg_options),
    'facebook' => l($facebook_img, $facebook_profile, $facebook_options),
    'twitter' => l($twitter_img, $twitter_profile, $twitter_options),
    'google_plus' => l($google_img, $google_profile, $google_options),
    'linkedin' => l($linkedin_img, $linkedin_profile, $linkedin_options),
    'github' => l($github_img, $github_profile, $github_options),
    'skype' => l($skype_img, 'skype:roskoliy_kirill', $skype_options),
    'email' => l($email_img, 'contact', $email_options),
    'rss' => l($rss_img, '/rss.xml', $rss_options),
  );

  $params = array('items' => $items, 'type' => 'ul');
  $vars['sm_links'] = theme('item_list', $params);
}
