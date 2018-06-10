# This file contains environment variables that are passed to mesos-agent.
# To get a description of all options run mesos-agent --help; any option
# supported as a command-line option is also supported as an environment
# variable.

# You must at least set MESOS_master.

# The mesos master URL to contact. Should be host:port for
# non-ZooKeeper based masters, otherwise a zk:// or file:// URL.
export MESOS_master=u3:5050

# Other options you're likely to want to set:
export MESOS_log_dir=/var/lib/mesos/log
export MESOS_work_dir=/var/lib/mesos/run
export MESOS_isolation=cgroups
