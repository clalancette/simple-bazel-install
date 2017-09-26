# Simple bazel example program for use with ament

This is a simple project to show the requirements for a bazel project that wants to be compatible with ament.

# Steps for use.

1.  Install dependencies:

    ```
    $ sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
    $ sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net:80 --recv-key 421C365BD9FF1F717815A3895523BAEEB01FA116
    $ sudo apt-get update
    $ sudo apt-get install python3-vcstools
    ```

1.  Install bazel:

    ```
    $ wget -O /tmp/bazel_0.5.2-linux-x86_64.deb https://github.com/bazelbuild/bazel/releases/download/0.5.2/bazel_0.5.2-linux-x86_64.deb
    $ sudo dpkg -i /tmp/bazel_0.5.2-linux-x86_64.deb
    ```

1.  Build a workspace:

    ```
    $ mkdir simple_ws
    $ cd simple_ws
    $ wget https://github.com/clalancette/simple-bazel-install/simplebazel.repos
    $ vcs import src < simplebazel.repos
    ```

1.  Build using ament:

    ```
    $ ./src/ament/ament_tools/scripts/ament.py build --isolated
    ```

1.  Test using ament:

    ```
    $ ./src/ament/ament_tools/scripts/ament.py test
    ```
