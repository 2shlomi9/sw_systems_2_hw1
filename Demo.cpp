/*

Author : shlomi zecharia
ID : 315141242
Email : 2shlomiariel9@gmail.com

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

    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Undirected graph with 3 vertices and 2 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 2) << endl; // Should print: "0->1->2"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "No cycle found in the graph"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2}, B={1}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    cout<< "\ngraph number 2 :\n";

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};

    g.loadGraph(graph2); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Undirected graph with 5 vertices and 4 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "0"
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "No path exists between 0 and 4"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 0 -> 1 -> 2 -> 0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    cout<< "\ngraph number 3 :\n";

    vector<vector<int>> graph3 = {
        {0, 1, 2, 0, 0},
        {1, 0, 3, 0, 0},
        {2, 3, 0, 4, 0},
        {0, 0, 4, 0, 5},
        {0, 0, 0, 5, 0}};
    g.loadGraph(graph3); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Undirected graph with 5 vertices and 5 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 2, 0) << endl; // Should print: "2->0"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 0 -> 1 -> 2 -> 0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    cout<< "\ngraph number 4 :\n";

    vector<vector<int>> graph4 = {
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, -1, 0},
        {0, 0, 0, 0, -2},
        {0, 0, 1, 0, 0}};
    g.loadGraph(graph4); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Directed graph with 5 vertices and 5 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "0"
    cout << Algorithms::shortestPath(g, 1, 3) << endl; // Should print: "Detect negative cycle, no shortest path"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 2 -> 3 -> 4 -> 2"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "1"
    
    
    cout<< "\ngraph number 5 :\n";

    vector<vector<int>> graph5 = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}};
    g.loadGraph(graph5); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Directed graph with 4 vertices and 4 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "Invalid end vertex index: 4"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 0 -> 1 -> 2 -> 3 -> 0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2} B={1, 3}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    
    cout<< "\ngraph number 6 :\n";

    vector<vector<int>> graph6 = {
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1},
        {0, 0, 1, 0, 0}};
    g.loadGraph(graph6); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Directed graph with 5 vertices and 5 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "0"
    cout << Algorithms::shortestPath(g, 1, 3) << endl; // Should print: "1->2->3"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 2 -> 3 -> 4 -> 2"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"
    
    cout<< "\ngraph number 7 :\n";

    vector<vector<int>> graph7 = {
        {0, -2, 0, 0},
        {-2, 0, 3, 0},
        {0, 3, 0, 6},
        {0, 0, 6, 0}};
    g.loadGraph(graph7); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Undirected graph with 4 vertices and 3 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 3) << endl; // Should print: "0->1->2->3"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "No cycle found in the graph"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2} B={1, 3}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"


    cout<< "\ngraph number 8 :\n";

    
    vector<vector<int>> graph8 = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 0},
        {1, 0, 0, 0}};
    g.loadGraph(graph8); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Undirected graph with 4 vertices and 3 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "Invalid end vertex index: 4"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "No cycle found in the graph"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2} B={1, 3}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"
    
    vector<vector<int>> graph9 = {
        {0, 3, 5, 0, 11},
        {3, 0, 0, 2, 0},
        {5, 0, 0, 0, 9},
        {0, 2, 0, 0, 1},
        {11, 0, 9, 1, 0}};
    g.loadGraph(graph9); // Load the graph to the object.

    cout<< "\ngraph number 9 :\n";

    g.printGraph();                                    // Should print: "Undirected graph with 5 vertices and 6 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 4) << endl; // Should print: "0->1->3->4"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 0 -> 1 -> 3 -> 4 -> 0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"


    vector<vector<int>> graph10 = {
        {0, -2, 0, 4, 0},
        {-2, 0, -1, 0, 0},
        {0, -1, 0, 3, 2},
        {4, 0, 3, 0, 0},
        {0, 0, 2, 0 ,0}};
    g.loadGraph(graph10); // Load the graph to the object.

    cout<< "\ngraph number 10 :\n";

    g.printGraph();                                    // Should print: "Undirected graph with 5 vertices and 5 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 2, 3) << endl; // Should print: "2->1->0->3"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 0 -> 1 -> 2 -> 3 -> 0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "A={0, 2} B={1, 3, 4}"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "0"

    cout<< "\ngraph number 11 :\n";

    vector<vector<int>> graph11 = {
        {0, 1, 0, 1, 0},
        {0, 0, 3, 0, 1},
        {0, 0, 0, -2, 0},
        {1, 0, 1, 0, -1},
        {0, 1, 2, 1, 0}};
    g.loadGraph(graph11); // Load the graph to the object.

    g.printGraph();                                    // Should print: "Directed graph with 5 vertices and 11 edges"
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" 
    cout << Algorithms::shortestPath(g, 0, 2) << endl; // Should print: "Detect negative cycle, no shortest path"
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 0 -> 1 -> 2 -> 3 -> 0"
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is not bipartite (adjacent vertices have the same color)"
    cout << Algorithms::negativeCycle(g) << endl;      // Should print: "1"

    cout<< "\ngraph number 12 :\n";
    // 5x4 matrix that reprsents invalid graph.
    vector<vector<int>> graph12 = {
        {0, 1, 2, 0},
        {1, 0, 3, 0},
        {2, 3, 0, 4},
        {0, 0, 4, 0},
        {0, 0, 0, 5}};
    try
    {
        g.loadGraph(graph12); // Load the graph to the object.
    }
    catch (const std::invalid_argument &e)
    {
        cout << e.what() << endl; // Should print: "Invalid graph: The graph is not a square matrix"
    }
}
