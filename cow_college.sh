#!/bin/bash
i=2
n1=1
n2=0
if [ $1 -ge 1 ]
then 
cowsay $n1
sleep 1
fi
while [ $i -le $1 ]
do
cowsay $(($n1 + $n2))
i=$(($i + 1))
t=$n2
n2=$n1
n1=$(($n1 + $t))
sleep 1
done
exit 0