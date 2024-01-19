#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Karima-mtq/alx-low_level_programming/master/0x18-dynamic_libraries/libtst.so
export LD_PRELOAD="$PWD/../libtst.so"
