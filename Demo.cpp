/*
 * Demo program for Exercise 2.
 * Author: Benjamin Saldman.
 */

#include "Graph.hpp"
#include "Algorithms.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

using ariel::Algorithms;


int main()
{
    ariel::Graph g;
    cout<< "graph number 1 :\n";
    // 3x3 matrix that represents a connected graph.
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Graph with 3 vertices and 4 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 2) << endl; // Should print: 0->1->2
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2}, B={1}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    cout<< "graph number 2 :\n";
    // 5x5 matrix that represents a non-connected graph with a cycle.
    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};

    g.loadGraph(graph2); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Graph with 5 vertices and 8 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "0"
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "-1"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)."
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    cout<< "graph number 3 :\n";

    // 5x5 matrix that reprsents a connected weighted graph.
    vector<vector<int>> graph3 = {
        {0, 1, 2, 0, 0},
        {1, 0, 3, 0, 0},
        {2, 3, 0, 4, 0},
        {0, 0, 4, 0, 5},
        {0, 0, 0, 5, 0}};
    g.loadGraph(graph3); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Graph with 5 vertices and 10 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: 0->2->3->4.
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: The cycle is: 0 -> 1 -> 2 -> 0
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)."
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"


    
    cout<< "\ngraph number 5 :\n";
    // 4x4 matrix that reprsents a connected weighted graph.
    vector<vector<int>> graph5 = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}};
    g.loadGraph(graph5); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Graph with 4 vertices and 4 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: Invalid end vertex index: 4
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: The cycle is: 0 -> 1 -> 2 -> 3 -> 0
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)."
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    cout<< "\ngraph number 6 :\n";

    vector<vector<int>> graph6 = {
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1},
        {0, 0, 1, 0, 0}};
    g.loadGraph(graph6); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Graph with 5 vertices and 5 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "0"
    cout << Algorithms::shortestPath(g, 1, 3) << endl; // Should print: 1->2->3
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: The cycle is: 2 -> 3 -> 4 -> 2
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)."
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"
    
    cout<< "\ngraph number 7 :\n";

    vector<vector<int>> graph7 = {
        {0, -2, 0, 0},
        {-2, 0, 3, 0},
        {0, 3, 0, 6},
        {0, 0, 6, 0}};
    g.loadGraph(graph7); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Graph with 4 vertices and 6 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 3) << endl; // Should print: No shortest path exists.
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2} B={1, 3}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"


    cout<< "\ngraph number 8 :\n";

    
    vector<vector<int>> graph8 = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 0},
        {1, 0, 0, 0}};
    g.loadGraph(graph8); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Graph with 4 vertices and 6 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "Invalid end vertex index: 4"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2} B={1, 3}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"
    
    vector<vector<int>> graph9 = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0}
    };
    g.loadGraph(graph9); // Load the graph to the object.

    cout<< "\ngraph number 9 :\n";

    g.printGraph();                                    // Should print: "Graph with 5 vertices and 12 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "0->1->4"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: The cycle is: 0 -> 1 -> 2 -> 3 -> 0
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2, 4} B={1, 3}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"


    vector<vector<int>> graph10 = {
        {0, 1, 0, 1, 0},
        {0, 0, 3, 0, 1},
        {0, 0, 0, -2, 0},
        {1, 0, 1, 0, -1},
        {0, 1, 2, 1, 0}
    };
    g.loadGraph(graph10); // Load the graph to the object.

    cout<< "\ngraph number 10 :\n";

    g.printGraph();                                    // Should print: "Graph with 5 vertices and 12 edges."
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "0->1->4"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: The cycle is: 0 -> 1 -> 2 -> 3 -> 0 
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2, 4} B={1, 3}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "1"

    // 5x4 matrix that reprsents invalid graph.
    vector<vector<int>> graph11 = {
        {0, 1, 2, 0},
        {1, 0, 3, 0},
        {2, 3, 0, 4},
        {0, 0, 4, 0},
        {0, 0, 0, 5}};
    try
    {
        g.loadGraph(graph11); // Load the graph to the object.
    }
    catch (const std::invalid_argument &e)
    {
        cout << e.what() << endl; // Should print: "Invalid graph: The graph is not a square matrix."
    }
}
