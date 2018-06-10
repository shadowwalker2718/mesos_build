#!/usr/bin/env bash

prefix=/opt/share/mesos_build

DEPLOY_DIR=${prefix}/etc/mesos

# Pull in deploy specific options.
test -e ${DEPLOY_DIR}/mesos-deploy-env.sh && \
  . ${DEPLOY_DIR}/mesos-deploy-env.sh

# Find the list of masters.
MASTERS_FILE="${DEPLOY_DIR}/masters"
if test ! -e ${MASTERS_FILE}; then
  echo "Failed to find ${MASTERS_FILE}"
  exit 1
fi

# The expected format of the MASTERS_FILE is one IP/host per line.
# Additionally, you can temporarily comment out a host or IP by placing a hash
# character '#' as the first character of the line.  As an example, changing
# this MASTERS_FILE:
#
# 10.1.1.1
# 10.1.1.2
#
# to this one:
#
# 10.1.1.1
# #10.1.1.2
#
# removes the 10.1.1.2 IP address from being used.  Note that this does NOT
# support comments through the end of line, like this:
#
# 10.1.1.1  # my first IP
# 10.1.1.2  # my second IP
#
MASTERS=`cat ${MASTERS_FILE} | grep -v '^#'`

killall="killall"

# Add sudo if requested.
if test "x${DEPLOY_WITH_SUDO}" = "x1"; then
  killall="sudo ${killall}"
fi

for master in ${MASTERS}; do
  echo "Stopping mesos-master on ${master}"
  ssh ${SSH_OPTS} ${master} "${killall} mesos-master" &
  sleep 0.1
done

wait # Wait for all the ssh's to finish.
