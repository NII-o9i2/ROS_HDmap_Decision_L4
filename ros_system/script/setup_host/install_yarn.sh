#!/usr/bin/env bash

###############################################################################
# Copyright 2018 The Zibet Authors. All Rights Reserved.
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

curl -sS https://dl.yarnpkg.com/debian/pubkey.gpg | sudo apt-key add -
echo "deb https://dl.yarnpkg.com/debian/ stable main" | sudo tee /etc/apt/sources.list.d/yarn.list
apt-get update -y
apt-get install -y yarn

# Clean up.
apt-get clean && rm -rf /var/lib/apt/lists/*
rm -fr /etc/apt/sources.list.d/yarn.list

# install nodejs
wget https://github.com/tj/n/archive/v2.1.0.tar.gz
tar xzf v2.1.0.tar.gz
pushd n-2.1.0
make install
n 8.0.0
popd

# Clean up.
rm -fr v2.1.0.tar.gz n-2.1.0
