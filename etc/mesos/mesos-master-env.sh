# This file contains environment variables that are passed to mesos-master.
# To get a description of all options run mesos-master --help; any option
# supported as a command-line option is also supported as an environment
# variable.

# Some options you're likely to want to set:
# export MESOS_log_dir=/var/log/mesos

export MESOS_ZK=zk://u3:2181,u4:2181,u5:2181/mesos

export MESOS_log_dir=/var/lib/mesos/log
export MESOS_work_dir=/var/lib/mesos/run
export MESOS_isolation=cgroups

export MESOS_quorum=1
export MESOS_cluster=HenryWu
export MESOS_roles=www-data

# --zzz=xxx 
# export MESOS_zzz=xxx


