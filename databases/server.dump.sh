#!/bin/sh

mysqldump -uhorkiinf -p horkiinf_new > ./NEWEST-HORKI-DEV-`date '+%m-%d-%H-%M'`.sql

gzip NEWEST-HORKI-DEV-`date '+%m-%d-%H-%M'`.sql
