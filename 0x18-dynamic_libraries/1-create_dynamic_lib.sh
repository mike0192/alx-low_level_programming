#!/bin/bash
gcc -fpic *.c
gcc -shared *.o -o liball.so
