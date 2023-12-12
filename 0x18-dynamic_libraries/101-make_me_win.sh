#!/bin/bash
wget -P .. https://raw.githubusercontent.com/highrate01/alx-low_level_programming/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="PWD/../libhack.so"
