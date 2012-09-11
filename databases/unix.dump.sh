#!/bin/sh

cd /home/budnyjj/public_html/horki.dev/new

drush sql-dump --gzip > databases/NEWEST-HORKI-DEV-`date '+%m-%d-%H-%M'`.sql.gz
