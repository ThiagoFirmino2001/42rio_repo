#!/bin/sh
A="$(echo "$FT_NBR1" | tr ''\''\\\"?!' '01234')" && B="$(echo "$FT_NBR2" | tr 'mrdoc' '01234')" && SOMA="$((A+B))" && echo "obase=13;ibase=5; $((SOMA))" | bc | tr '0123456789ABC' 'gtaio luSnemf' 