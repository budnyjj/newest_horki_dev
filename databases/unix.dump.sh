#!/bin/sh

drush sql-dump --gzip > ./NEWEST-HORKI-DEV-`date '+%m-%d-%H-%M'`.sql.gz

