<?php
/**
 * @file
 * kr_cv.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function kr_cv_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'CV',
  'log' => 'Some formatting.',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6ddba591-b105-423f-b862-68a860263ef4',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404296867,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ba2b16a2-9f03-4295-b789-d85f60833158',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h1 align="center">Kirill Roskoliy</h1>

<table border="0" cellpadding="1" cellspacing="1">
	<tbody>
		<tr>
			<td><a href="mailto:roskoliy.kirill@gmail.com">roskoliy.kirill@gmail.com</a></td>
			<td>Skype: roskoliy.kirill</td>
		</tr>
		<tr>
			<td>Cell: +380 50 19 19 021</td>
			<td><a href="http://drupal.org/user/325151">http://drupal.org/user/325151</a></td>
		</tr>
		<tr>
			<td>Ukraine, 86156, Makeevka, Zeleniy 6 263</td>
			<td><a href="http://ua.linkedin.com/in/roskoliykirill/">http://ua.linkedin.com/in/roskoliykirill/</a></td>
		</tr>
	</tbody>
</table>

<p>I\'m a Drupal backend developer. I can do basic theming, but my real passion is backend. I\'m in love with Drupal for 5 years. Interested in everything that relates to information technology. I\'m making contributions of patches to Drupal core and contrib modules, active local community member. Organized DrupalCamp Donetsk in 2011 and 2014. I have 6 years of PHP programming experience from which 5 years of Drupal development experience. Have experience in server administration with LAMP stack. Have work experience with Amazon Web Services and Aegir hosting system, administration and extension of functionality.</p>

<h2>Programming languages and related technologies</h2>

<ul>
	<li>
		<p>PHP, JavaScript, jQuery, AJAX.</p>
	</li>
	<li>
		<p>XML, XHTML, CSS, JSON.</p>
	</li>
	<li>
		<p>Drupal: 6.x, 7.x, 8.x - custom theme, module, profile and distribution development.</p>
	</li>
	<li>
		<p>Databases: MySQL, PostgreSQL, MongoDB.</p>
	</li>
	<li>
		<p>Version control systems: Git.</p>
	</li>
	<li>
		<p>Server administration: GNU/Linux(Debian-based and Rad Hat-based).</p>
	</li>
	<li>
		<p>Behavior driven development: Behat, Mink, Drupal extension.</p>
	</li>
	<li>
		<p>Agile: scrum, including scrum master role.</p>
	</li>
	<li>
		<p>Search engines: Apache SOLR.</p>
	</li>
	<li>
		<p>Other: Bash, Perl.</p>
	</li>
</ul>

<h2>Education</h2>

<ul>
	<li>
		<p>Dec 2013 – Jan 2014 - <a href="http://education.mongodb.com/downloads/certificates/f627a534debe49c6be6a303e859da9f3/Certificate.pdf">M102: MongoDB for DBAs</a>.</p>
	</li>
	<li>
		<p>Sep 2006 – Nov 2011 - Bachelor degree at Department of Computer Information Technologies and Automation at DonNTU.</p>
	</li>
</ul>

<h2>Work experience</h2>

<p><strong>Name of employer:</strong> Trellon, LLC<br>
	<strong>Dates of employment:</strong> Jan 2013 - now<br>
	<strong>Job title:</strong> Drupal Backend Developer<br>
	<strong>Role/Project description:</strong> Developer – implementation of new features, bug fixing, upgrade and modification of existing site functinality. Toked active participation in extending and improving of <a href="https://drupal.org/project/crm_core">CRM Core</a> and <a href="https://drupal.org/project/crm_core_profile">CRM Core Profile</a>. Created searchers with SOLR. Created external datasource import for Drupal - <a href="https://github.com/Stanford/CAP_drupal">Stanford CAP API</a>.<br>
	<strong>Tools/technologies:</strong> Project/issue management/documentation – Redmine, IDE – PHPStorm, DVCS – Git, Code hosting – GitHub/BitBucket/selfhosted, Drupal website management – Aegir, Database – MySQL, Project hosting – Amazon Web Services/selfhosted/Media Temple, Search engine – Apache SOLR.</p>

<p><strong>Name of employer:</strong> Shvets Group, Kiev<br>
	<strong>Dates of employment:</strong> Mar 2012 – Jan 2013<br>
	<strong>Job title:</strong> Drupal Backend Developer<br>
	<strong>Role/Project description:</strong> Developer – implementation of new features, bug fixing, upgrade and modification of development tools(self created and contributed like Aegir). The project itself is a Drupal distribution (based on Drupal 7) for American bankruptcy lawyers. It aims to simplify working with clients by providing appointment management tools, lead management tools(with custom workflow), phone systems integration(like Switchvox) to have ability to replay call records, commercial company tracking functionality, task management tools, reporting tools(call performance reports, campaign reports) and such.<br>
	<strong>Tools/technologies:</strong> Project/issue management – Jira + GreenHopper, documentation – Confluence, IDE – PHPStorm, DVCS – Git, Code hosting – GitHub/BitBucket, Drupal website management – Aegir, Database – MySQL, Project hosting – Amazon Web Services.</p>

<p><strong>Name of employer:</strong> Own projects<br>
	<strong>Dates of employment:</strong> 2006 - Mar 2012<br>
	<strong>Job title:</strong> Web developer<br>
	<strong>Project/Role description:</strong> Owner of small local web studio. Development, hosting and almost all aspects of work, except design, were my responsibilities.<br>
	<strong>Tools/technologies:</strong> IDE – Eclipse, DVCS – Git, Project/Issue/Documents management – Google Docs, Mavenlink.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h1 align="center">Kirill Roskoliy</h1>

<table border="0" cellpadding="1" cellspacing="1">
	<tbody>
		<tr>
			<td><a href="mailto:roskoliy.kirill@gmail.com">roskoliy.kirill@gmail.com</a></td>
			<td>Skype: roskoliy.kirill</td>
		</tr>
		<tr>
			<td>Cell: +380 50 19 19 021</td>
			<td><a href="http://drupal.org/user/325151">http://drupal.org/user/325151</a></td>
		</tr>
		<tr>
			<td>Ukraine, 86156, Makeevka, Zeleniy 6 263</td>
			<td><a href="http://ua.linkedin.com/in/roskoliykirill/">http://ua.linkedin.com/in/roskoliykirill/</a></td>
		</tr>
	</tbody>
</table>

<p>I\'m a Drupal backend developer. I can do basic theming, but my real passion is backend. I\'m in love with Drupal for 5 years. Interested in everything that relates to information technology. I\'m making contributions of patches to Drupal core and contrib modules, active local community member. Organized DrupalCamp Donetsk in 2011 and 2014. I have 6 years of PHP programming experience from which 5 years of Drupal development experience. Have experience in server administration with LAMP stack. Have work experience with Amazon Web Services and Aegir hosting system, administration and extension of functionality.</p>

<h2>Programming languages and related technologies</h2>

<ul>
	<li>
		<p>PHP, JavaScript, jQuery, AJAX.</p>
	</li>
	<li>
		<p>XML, XHTML, CSS, JSON.</p>
	</li>
	<li>
		<p>Drupal: 6.x, 7.x, 8.x - custom theme, module, profile and distribution development.</p>
	</li>
	<li>
		<p>Databases: MySQL, PostgreSQL, MongoDB.</p>
	</li>
	<li>
		<p>Version control systems: Git.</p>
	</li>
	<li>
		<p>Server administration: GNU/Linux(Debian-based and Rad Hat-based).</p>
	</li>
	<li>
		<p>Behavior driven development: Behat, Mink, Drupal extension.</p>
	</li>
	<li>
		<p>Agile: scrum, including scrum master role.</p>
	</li>
	<li>
		<p>Search engines: Apache SOLR.</p>
	</li>
	<li>
		<p>Other: Bash, Perl.</p>
	</li>
</ul>

<h2>Education</h2>

<ul>
	<li>
		<p>Dec 2013 – Jan 2014 - <a href="http://education.mongodb.com/downloads/certificates/f627a534debe49c6be6a303e859da9f3/Certificate.pdf">M102: MongoDB for DBAs</a>.</p>
	</li>
	<li>
		<p>Sep 2006 – Nov 2011 - Bachelor degree at Department of Computer Information Technologies and Automation at DonNTU.</p>
	</li>
</ul>

<h2>Work experience</h2>

<p><strong>Name of employer:</strong> Trellon, LLC<br>
	<strong>Dates of employment:</strong> Jan 2013 - now<br>
	<strong>Job title:</strong> Drupal Backend Developer<br>
	<strong>Role/Project description:</strong> Developer – implementation of new features, bug fixing, upgrade and modification of existing site functinality. Toked active participation in extending and improving of <a href="https://drupal.org/project/crm_core">CRM Core</a> and <a href="https://drupal.org/project/crm_core_profile">CRM Core Profile</a>. Created searchers with SOLR. Created external datasource import for Drupal - <a href="https://github.com/Stanford/CAP_drupal">Stanford CAP API</a>.<br>
	<strong>Tools/technologies:</strong> Project/issue management/documentation – Redmine, IDE – PHPStorm, DVCS – Git, Code hosting – GitHub/BitBucket/selfhosted, Drupal website management – Aegir, Database – MySQL, Project hosting – Amazon Web Services/selfhosted/Media Temple, Search engine – Apache SOLR.</p>

<p><strong>Name of employer:</strong> Shvets Group, Kiev<br>
	<strong>Dates of employment:</strong> Mar 2012 – Jan 2013<br>
	<strong>Job title:</strong> Drupal Backend Developer<br>
	<strong>Role/Project description:</strong> Developer – implementation of new features, bug fixing, upgrade and modification of development tools(self created and contributed like Aegir). The project itself is a Drupal distribution (based on Drupal 7) for American bankruptcy lawyers. It aims to simplify working with clients by providing appointment management tools, lead management tools(with custom workflow), phone systems integration(like Switchvox) to have ability to replay call records, commercial company tracking functionality, task management tools, reporting tools(call performance reports, campaign reports) and such.<br>
	<strong>Tools/technologies:</strong> Project/issue management – Jira + GreenHopper, documentation – Confluence, IDE – PHPStorm, DVCS – Git, Code hosting – GitHub/BitBucket, Drupal website management – Aegir, Database – MySQL, Project hosting – Amazon Web Services.</p>

<p><strong>Name of employer:</strong> Own projects<br>
	<strong>Dates of employment:</strong> 2006 - Mar 2012<br>
	<strong>Job title:</strong> Web developer<br>
	<strong>Project/Role description:</strong> Owner of small local web studio. Development, hosting and almost all aspects of work, except design, were my responsibilities.<br>
	<strong>Tools/technologies:</strong> IDE – Eclipse, DVCS – Git, Project/Issue/Documents management – Google Docs, Mavenlink.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'microdata' => array(
    '#attributes' => array(
      'itemscope' => '',
      'itemid' => 'http://kroskoliy.com/cv',
    ),
    'title' => array(
      '#attributes' => array(),
    ),
    'body' => array(
      '#attributes' => array(),
      'value' => array(
        '#attributes' => array(),
      ),
      'summary' => array(
        '#attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'kroskoliy',
  'picture' => 0,
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'print_html_display' => 1,
  'print_html_display_comment' => 0,
  'print_html_display_urllist' => 1,
  'print_mail_display' => 1,
  'print_mail_display_comment' => 0,
  'print_mail_display_urllist' => 0,
  'print_pdf_display' => 1,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 1,
  'print_pdf_size' => '',
  'print_pdf_orientation' => '',
  'date' => '2014-07-02 13:27:47 +0300',
);
  return $nodes;
}
