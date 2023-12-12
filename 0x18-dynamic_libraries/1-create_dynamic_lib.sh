#!/bin/bash
gcc *.c -fpic && gcc *o -shared -o liball.so
