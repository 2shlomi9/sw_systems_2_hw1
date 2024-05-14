# System Programming 2 Course Assignment 1
### For Computer Science B.Sc. Ariel University

**By Shlomi Zecharia**

## Description

This project is part of the System Programming 2 course assignment at Ariel University. The task involves implementing various graph algorithms and data structures.

### Files Included

* **Graph.hpp**: Header file containing the implementation of the Graph class, which represents a graph using an adjacency matrix.

* **Algorithms.hpp**: Header file containing the declaration of the Algorithms class, which provides implementations of various graph algorithms.

* **Graph.cpp**: Source file containing the implementation of the Graph class member functions.

* **Algorithms.cpp**: Source file containing the implementation of the Algorithms class member functions.

## Explanation 

### Algorithm Implementations

#### isConnected
This function checks whether a given graph is connected or not. It uses Depth First Search (DFS) to traverse the graph and check if all vertices are reachable from each other. If any vertex is unreachable, the graph is considered disconnected.

#### shortestPath
This function finds the shortest path between two vertices in the graph using the Bellman-Ford algorithm. It handles both directed and undirected graphs and returns the shortest path as a string.

#### isContainsCycle
This function checks whether the graph contains a cycle or not. It uses Depth First Search (DFS) to traverse the graph and detect cycles. If a cycle is found, it returns the cycle as a string.

#### isBipartite
This function checks whether the graph is bipartite or not. It uses Breadth First Search (BFS) to color the vertices of the graph in two different colors, making sure that adjacent vertices have different colors. If the coloring is possible, the graph is bipartite.

#### negativeCycle
This function checks whether the graph contains a negative cycle. It uses the Floyd-Warshall algorithm to detect negative cycles in both directed and undirected graphs.

### How Algorithms were Implemented

The algorithms were implemented using various graph traversal and path-finding techniques such as Depth First Search (DFS), Breadth First Search (BFS), and the Bellman-Ford algorithm. Each algorithm was carefully designed to efficiently solve the specific problem it addresses.

## Requirements

* Linux machine (Ubuntu 22.04.1 LTS preferable)
* GNU cpp (g++ Compiler)
* Make

## Building

```bash
# Cloning the repo to local machine.
git clone https://github.com/2shlomi9/sw_systems_2_hw1

# Install g++ compiler 
sudo apt-get install g++

# Building all the necessary files & the main programs.
make demo
make test
```
## Running:


##### Run Demo:
./demo

##### Run Tests:
./test

```
`
