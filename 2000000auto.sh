#!/bin/bash
for i in {0..2000000}
do
    if [ $i -lt 100000 ]; then
        ./a.out >> a1.log;
    elif [ $i -lt 200000 ]; then
        ./a.out >> a2.log;
    elif [ $i -lt 300000 ]; then
        ./a.out >> a3.log;
    elif [ $i -lt 400000 ]; then
        ./a.out >> a4.log;
    elif [ $i -lt 500000 ]; then
        ./a.out >> a5.log;
    elif [ $i -lt 600000 ]; then
        ./a.out >> a6.log;
    elif [ $i -lt 700000 ]; then
        ./a.out >> a7.log;
    elif [ $i -lt 800000 ]; then
        ./a.out >> a8.log;
    elif [ $i -lt 900000 ]; then
        ./a.out >> a9.log;
    elif [ $i -lt 1000000 ]; then
        ./a.out >> aa.log;
    elif [ $i -lt 1100000 ]; then
        ./a.out >> ab.log;
    elif [ $i -lt 1200000 ]; then
        ./a.out >> ac.log;
    elif [ $i -lt 1300000 ]; then
        ./a.out >> ad.log;
    elif [ $i -lt 1400000 ]; then
        ./a.out >> ae.log;
    elif [ $i -lt 1500000 ]; then
        ./a.out >> af.log;
    elif [ $i -lt 1600000 ]; then
        ./a.out >> ag.log;
    elif [ $i -lt 1700000 ]; then
        ./a.out >> ah.log;
    elif [ $i -lt 1800000 ]; then
        ./a.out >> ai.log;
    elif [ $i -lt 1900000 ]; then
        ./a.out >> aj.log;
    elif [ $i -lt 2000000 ]; then
        ./a.out >> ak.log;
    fi
    value=$(($i % 100));
    if [ $value -eq 0 ]; then
        echo $i;
    fi
done
