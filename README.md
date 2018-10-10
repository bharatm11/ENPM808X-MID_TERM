# ENPM808X-MID_TERM

[![Build Status](https://travis-ci.org/bharatm11/ENPM808X-MID_TERM.svg?branch=master)](https://travis-ci.org/bharatm11/ENPM808X-MID_TERM)
[![Coverage Status](https://coveralls.io/repos/github/bharatm11/ENPM808X-MID_TERM/badge.svg?branch=master)](https://coveralls.io/github/bharatm11/ENPM808X-MID_TERM?branch=master)
---

## Overview and purpose of the project 

Our team will be developing a 2D A* path planning module. The module will accept
as its input a binary map, current position and destination. It will then return a path
plan to be executed by other Acme modules. A* provides an efficient and effective
approach for discovering path plans that are free of obstacles in a given map. This
module would be very important for any robot designated to preform navigation
indoors or outdoors. 

The A* algorithm provides a technique for discovering an optimal path that
circumvents obstacles on a given map. It works by discretizing the map and
breaking it into cells. Nodes are assigned to these cells, and described by the
Manhattan distance, the cost of travel, the sum of those two costs and the parent of
that node. The algorithm cycles through the neighboring cells, which are part of a
list (open list), and selects the cell with minimum cost to become the next node.
When a new cell is selected to become the current node, it is moved from the open
list into a closed list. These two lists are used to maintain the process of discovery 
and are used at the end to trace back, through the parent’s data, the final optimal
path.
The implementation of this algorithm would require a class that has a struct holding
the parent and travel cost parameters. in addition, two lists of this struct type are
required to track the path. Several methods will also be needed to set and get
parameters, calculate distances, maintain the open and close lists ( add, remove,
sort) and finally a main loop that implements all the calls of the algorithm and loops
until the goal node has been reached.

## Standard install via command-line
```
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/dpiet/cpp-boilerplate
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of cpp-boilerplate

```
cd ~/workspace
mkdir -p boilerplate-eclipse
cd boilerplate-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../cpp-boilerplate/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "boilerplate-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold boilerplate-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the boilerplate-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)


## Debug


1. Set breakpoint in source file (i.e. double click in the left margin on the line you want 
the program to break).

2. In Eclipse, right click on the boilerplate-eclipse in Project Explorer, select Debug As -> 
Local C/C++ Application, choose the binaries to run (e.g. shell-app).

3. If prompt to "Confirm Perspective Switch", select yes.

4. Program will break at the breakpoint you set.

5. Press Step Into (F5), Step Over (F6), Step Return (F7) to step/debug your program.

6. Right click on the variable in editor to add watch expression to watch the variable in 
debugger window.

7. Press Terminate icon to terminate debugging and press C/C++ icon to switch back to C/C++ 
perspetive view (or Windows->Perspective->Open Perspective->C/C++).


## Plugins

- CppChEclipse

    To install and run cppcheck in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> cppcheclipse.
    Set cppcheck binary path to "/usr/bin/cppcheck".

    2. To run CPPCheck on a project, right click on the project name in the Project Explorer 
    and choose cppcheck -> Run cppcheck.


- Google C++ Sytle

    To include and use Google C++ Style formatter in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> Code Style -> Formatter. 
    Import [eclipse-cpp-google-style][reference-id-for-eclipse-cpp-google-style] and apply.

    2. To use Google C++ style formatter, right click on the source code or folder in 
    Project Explorer and choose Source -> Format

[reference-id-for-eclipse-cpp-google-style]: https://raw.githubusercontent.com/google/styleguide/gh-pages/eclipse-cpp-google-style.xml

- Git

    It is possible to manage version control through Eclipse and the git plugin, but it typically requires creating another project. If you're interested in this, try it out yourself and contact me on Canvas.

