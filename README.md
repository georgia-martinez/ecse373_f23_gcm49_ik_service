# ECSE 373 Laboratory # 6

## About

This repository contains the code for a ROS service that will return solutions to inverse kinematic queries. It relies on the ARIAC 2019 environment which you can read more about [here](https://bitbucket.org/osrf/ariac/wiki2019/Home).

## Set up

1. You should be using ROS noetic
2. clone this repo: `https://github.com/cwru-eecs-373/cwru_ariac_2019.git`
3. clone this repo (separate workspace): `https://github.com/cwru-eecs-373/ecse_373_ariac.git`

## Running

Run this command:

```
roslaunch ik_service ik_service.launch
```

When the node has been launched, open a new tab and run this command:

```
rosrun ik_service ik_client
```

The service should output a message saying it has been called. On the client side, the number of solutions and one of the solutions should be outputted.
