from fabric.api import env, task,run,cd
from fabric.colors import green

env.use_ssh_config = True

@task
def deploy(path, default=True):
    make_writable(path)
    with cd(path):
        git_pull()
        drush_updb()
        drush_fra()
        secure_fs()
        drush_fl

@task()
def git_pull():
    print(green("===> Updating code base..."))
    run('git pull')

@task()
def make_writable(path):
    print(green("===> Making Drupal root writable..."))
    run('chmod u=rwX -R %s' % path)

@task()
def drush_updb():
    print(green("===> Running database updates..."))
    run('drush updb -y')

@task()
def drush_fra():
    print(green("===> Reverting features..."))
    run('drush fra -y')

@task()
def secure_fs():
    print(green("===> Making file system secure:"))
    print(green("==> No write access for anyone."))
    run('chmod ug=rX,o-rwx -R ./')
    print(green("==> Files should still be writable."))
    run('chmod u+w -R sites/default/files/')
    print(green("==> But not .htaccess."))
    run('chmod a-w -R sites/default/files/.htaccess')
    print(green("==> MPDF requires additional cache for work."))
    run('chmod u+w -R sites/all/libraries/MPDF57/graph_cache')

@task()
def drush_fl():
    print(green("===> Feature list..."))
    run('drush fl')
