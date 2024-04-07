#!/bin/bash
i=1
while [ $i -le $1 ]
do
k=0
if [ $i -lt 4 ]
then 
cowsay $i
sleep 1
else
e=$(($i / 2))
for u in $(seq 2 $e)
do
if [ $(($i % $u)) -eq 0 ]
then
k=1
fi
done
if [ $k -eq 0 ]
then
cowsay $i
sleep 1
fi
fi
i=$(($i + 1))
done
exit 0


