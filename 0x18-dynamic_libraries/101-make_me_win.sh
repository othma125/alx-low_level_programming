#!/bin/bash
curl -s -o ~/rand.so https://raw.githubusercontent.com/othma125/alx-low_level_programming/main/0x18-dynamic_libraries/rando.so
export LD_PRELOAD =~/nrandom.so
