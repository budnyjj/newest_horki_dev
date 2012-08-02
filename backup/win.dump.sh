#!/bin/sh

cd /c/xampp/htdocs/temp

drush sql-dump --gzip > backup/NEWEST-HORKI-DEV-`date '+%m-%d-%H-%M'`.sql.gz
