#!/bin/bash
cowsay -e $(($(($1)) / 10 ))$(($(($1)) % 10 ))  $1
exit 0