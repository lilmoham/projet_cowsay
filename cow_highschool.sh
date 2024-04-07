#!/bin/bash
i=1
while [ $i -le $1 ]
do
cowsay $(($i * $i))
i=$(($i + 1))
sleep 1
done
exit 0