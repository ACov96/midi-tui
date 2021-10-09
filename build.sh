#!/bin/bash

set -e 

[ ! -d ./out ] && mkdir out

pushd out

cmake ..

cmake --build .

popd

exit 0