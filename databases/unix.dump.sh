#!/bin/sh

cd /home/public_html/www/horki

drush sql-dump --gzip > databases/NEWEST-HORKI-DEV-`date '+%m-%d-%H-%M'`.sql.gz
