#!/bin/sh

cd /home/budnyjj/public_html/horki.dev/new

drush sql-dump --gzip > backup/NEWEST-HORKI-DEV-`date '+%m-%d-%H-%M'`.sql.gz
