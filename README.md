# ENPM808X-MID_TERM

[![Build Status](https://travis-ci.org/bharatm11/ENPM808X-MID_TERM.svg?branch=master)](https://travis-ci.org/bharatm11/ENPM808X-MID_TERM)
[![Coverage Status](https://coveralls.io/repos/github/bharatm11/ENPM808X-MID_TERM/badge.svg?branch=master)](https://coveralls.io/github/bharatm11/ENPM808X-MID_TERM?branch=master)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
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

## TODO
1. Return an optimal path plan between 2 points using the A* algorithm.

  Due to limited time, the implementation was not finished.

## SIP process link:

https://docs.google.com/spreadsheets/d/15y1zCEGfbNPBTr2xY7Hjac2PuRlEzobuQ20Mx1qXSsk/edit#gid=0

## License 

Doxygen license: Copyright © 1997-2016 by Dimitri van Heesch. 

Googletest license: Copyright 2008, Google Inc.

MIT License

Copyright (c) 2018 Bharat Mathur, Royneal Rayess

```
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
```



## Standard install via command-line
```
git clone --recursive https://github.com/bharatm11/ENPM808X-MID_TERM.git
cd <path to repository>
mkdir build
cd build
cmake ..
make

```
## Run demo

After completing installation, type:
```
./app/shell-app
```
## Run tests

After completing installation, type:
```
./test/cpp-test
```

## Doxygen Documentation
```
sudo apt install doxygen
cd <path to repository>
mkdir docs
doxygen -g config
```
Open the Doxygen congiguration file "config" and update the following parameters:

PROJECT_NAME           = "ENPM808X-MID_TERM"

INPUT                  = app/ include/ test/

OUTPUT_DIRECTORY       = docs

In terminal, type:
```
doxygen config
```


