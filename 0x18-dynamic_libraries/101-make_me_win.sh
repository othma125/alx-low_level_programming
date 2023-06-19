#!/bin/bash
curl -s -o ~/nrandom.so https://raw.githubusercontent.com/othma125/alx-low_level_programming/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD =~/nrandom.so
