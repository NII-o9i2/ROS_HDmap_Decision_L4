#!/usr/bin/env bash

###############################################################################
# Copyright 2019 The Zibet Authors. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
###############################################################################

# Fail on first error.
set -e

cd "$(dirname "${BASH_SOURCE[0]}")"

#apt-get install -y libblas-dev liblapack-dev gfortran
unzip Ipopt-3.12.8.zip
cp MUMPS_4.10.0.tar.gz Ipopt-3.12.8/ThirdParty/Mumps
pushd Ipopt-3.12.8
./configure
make
make install
cp -r include/coin /usr/local/include/ipopt 
cp lib/libipopt.so* /usr/local/lib/
popd
rm -rf Ipopt-3.12.8
