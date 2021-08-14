#!/bin/bash

gcc main.c libasm.a -o test
./test
rm -rf test
rm -rf main.o
