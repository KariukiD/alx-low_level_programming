#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ar -t liball.a
ranlib liball.a
gcc main.o -L -lmy -o quote_1

