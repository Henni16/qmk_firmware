#!/bin/bash

# Run the Docker build script
if qmk compile -kb splitkb/aurora/sofle_v2 -km Henni16; then
    open .
fi