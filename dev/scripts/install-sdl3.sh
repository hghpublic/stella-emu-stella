#!/bin/sh

set -e

VERSION=3.2.28
if [ -d temp ]; then
    rm -rf temp
fi
mkdir temp
cd temp
curl -LO https://github.com/libsdl-org/SDL/releases/download/release-${VERSION}/SDL3-${VERSION}.zip
unzip SDL3-${VERSION}.zip
cd SDL3-${VERSION}
cmake -S . -B build
cmake --build build
sudo cmake --install build --prefix /usr/local
cd -
cd -
