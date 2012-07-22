README
==

<pre>
__        __   _     _                ____
\ \      / /__| | __| | ___  _ __    / ___|___   ___  _ __   ___ _ __
 \ \ /\ / / _ \ |/ _` |/ _ \| '_ \  | |   / _ \ / _ \| '_ \ / _ \ '__|
  \ V  V /  __/ | (_| | (_) | | | | | |__| (_) | (_) | |_) |  __/ |
   \_/\_/ \___|_|\__,_|\___/|_| |_|  \____\___/ \___/| .__/ \___|_|
                                                     |_|
 ____
/ ___| _   _ _ ____   _____ _   _ ___
\___ \| | | | '__\ \ / / _ \ | | / __|
 ___) | |_| | |   \ V /  __/ |_| \__ \
|____/ \__,_|_|    \_/ \___|\__, |___/
                            |___/
</pre>

What is it?
-----------
A Drupal-based survey and results reporting engine.

How to make
-----------
1. Checkout the makefile and install profile from github:
    `git clone git@github.com:scottrigby/wc.git`

2.  Make sure to run Drush5. Either:
    * Use the 7.x-5.4 tag
    * Or check out git master (`master` is Drush5):

        `git clone --recursive --branch master http://git.drupal.org/project/drush.git`

3.  Run `drush make [-options] [filename.make] [build path]` on the make file (see drush/docs/make.txt for options):
    * To build Drupal core along with the wc install profile, run wc.make:

        `drush make wc.make --working-copy`
