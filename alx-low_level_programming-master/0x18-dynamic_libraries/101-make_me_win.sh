#!/bin/bash
wget -P /tmp https://github.com/rain-rapheal/alx/raw/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp?libgiga.so
