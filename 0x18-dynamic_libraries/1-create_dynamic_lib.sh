#!/bin/bash
gcc -fPIC -c *.c
gcc  ld -o liball.so *.o -shared 
