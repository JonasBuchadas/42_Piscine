#!/bin/sh
cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | cut -d":" -f1 | rev | sort -r | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'length($0)>= FT_LINE1 && length($0) <= FT_LINE2' | xargs | sed 's/ /, /g' | sed 's/$/./' | tr -d "\n"
