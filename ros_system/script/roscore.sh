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

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

cd "${DIR}/.."

source "${DIR}/zibet_base.sh"

function start() {
    echo "Start roscore..."
    ROSCORELOG="${ZIBET_ROOT_DIR}/data/log/roscore.out"
    nohup roscore </dev/null >"${ROSCORELOG}" 2>&1 &
}

function stop() {
    pkill -SIGTERM -f roscore
    echo "roscore: stopped"
}

case $1 in
  start)
    start
    ;;
  stop)
    stop
    ;;
  *)
    start
    ;;
esac
