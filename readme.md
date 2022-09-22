# Tower of Hanoi
<p align="justify"><a href="https://en.wikipedia.org/wiki/Tower_of_Hanoi">The Hanoi tower</a> is a mathematical game or puzzle consisting of three rods and a number of disks of various diameters, which can slide onto any rod. The puzzle begins with disks arranged on one rod in descending order, the smallest at the top. The goal of the puzzle is to move the entire stack to the last rod, respecting the following rules.</p>

1. The user may move only one disk at a time
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or an empty rod
3. The user may place no disk on top of a disk that is smaller than it

## Simulation

<p align="center">
  <img src="animation.gif" alt="animated" />
</p>

<p align="center">
  <a href="https://upload.wikimedia.org/wikipedia/commons/8/8d/Iterative_algorithm_solving_a_6_disks_Tower_of_Hanoi.gif">link to the source</a>
</p>

## About
<p align="justify">This program is written solely to remember how to write in the C++ language, run files, and for the purpose of configuration a new environment.</p>

## How to Run

```sh
> gcc main.cpp -o main.exe
> main.exe
```

## Dependiencies

```cpp
#include <iostream>
#include <cmath>
```