#!/bin/bash

for c_file in *.c; do
	o_file=${c_file%.c}.o
	gcc -std=gnu89 -c $c_file -o $o_file
done
ar rc liball.a *.o
