#!/usr/bin/env bash

prefix=/opt/share/mesos_build
exec_prefix=${prefix}

DEPLOY_DIR=${prefix}/etc/mesos

# Pull in deploy specific options.
test -e ${DEPLOY_DIR}/mesos-deploy-env.sh && \
  . ${DEPLOY_DIR}/mesos-deploy-env.sh

usage() {
  echo "Usage: mesos-start-cluster.sh [-h] [-s]"
  echo " -h          display this message"
  echo " -s          use sudo to start mesos-master and mesos-agent"
  if test ${#} -gt 0; then
    echo
    echo "${@}"
  fi
  exit 1
}

while getopts "hs" opt
do
  case ${opt} in
    h) usage ;;
    s) export DEPLOY_WITH_SUDO=1 ;;
    *) usage "Invalid option: -${OPTARG}" ;;
  esac
done

${exec_prefix}/sbin/mesos-start-masters.sh && sleep 1 && ${exec_prefix}/sbin/mesos-start-agents.sh && {

  # TODO(benh): Check the health of the masters (and possibly agents)
  # and print the master's webui address (or just the leading master).

  echo "Everything's started!"
}
