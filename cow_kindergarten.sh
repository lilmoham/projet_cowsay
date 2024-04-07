#!/bin/bash
i=1
while [ $i -le 10 ]
do
cowsay $i
i=$(($i + 1))
sleep 1
done
cowsay -T UU " "
exit 0
