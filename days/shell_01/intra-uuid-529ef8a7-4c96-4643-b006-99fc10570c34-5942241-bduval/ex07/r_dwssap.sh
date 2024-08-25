#!/bin/zsh

cat /etc/passwd |sed -n '1~2p' | awk -F: '{print $1}'| rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g'| sed 's/, $/\./g' | tr -d '\n'
