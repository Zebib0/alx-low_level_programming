#!/bin/bash
wget -P /tmp https://github.com/Zebib0/alx-low_level_programming/blob/master/0x18-dynamic_libraries/0x18.c/libfunction2.so
export LD_PRELOAD=/tem/libfunction2.so
