/*

Author : shlomi zecharia
ID : 315141242
Email : 2shlomiariel9@gmail.com

*/

#include "doctest.h"
#include "Algorithms.hpp"
#include "Graph.hpp"

using namespace std;

// --------------- isConnected Test --------------------

TEST_CASE("Test isConnected")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isConnected(g) == false);

    vector<vector<int>> graph3 = {
        {0, 1, 0, 1, 0},
        {0, 0, 3, 0, 1},
        {0, 0, 0, -2, 0},
        {1, 0, 1, 0, -1},
        {0, 1, 2, 1, 0}
    };
    g.loadGraph(graph3); // Load the graph to the object.
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph4 = {
        {0, -2, 0, 0},
        {-2, 0, 3, 0},
        {0, 3, 0, 6},
        {0, 0, 6, 0}};
    g.loadGraph(graph4); // Load the graph to the object.
    CHECK(ariel::Algorithms::isConnected(g) == true);


}


// --------------- shortestPath Test --------------------


TEST_CASE("Test shortestPath")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "0->1->2");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 4) == "-1");

    vector<vector<int>> graph3 = {
        {0, 1, 0, 1, 0},
        {0, 0, 3, 0, 1},
        {0, 0, 0, -2, 0},
        {1, 0, 1, 0, -1},
        {0, 1, 2, 1, 0}
    };
    g.loadGraph(graph3); // Load the graph to the object.
    CHECK(ariel::Algorithms::shortestPath(g, 0, 4) == "No shortest path exists.");

    vector<vector<int>> graph4 = {
        {0, -2, 0, 0},
        {-2, 0, 3, 0},
        {0, 3, 0, 6},
        {0, 0, 6, 0}};
    g.loadGraph(graph4); // Load the graph to the object.
    CHECK(ariel::Algorithms::shortestPath(g, 0, 3) == "0->1->2->3");
}


// --------------- isContainsCycle Test --------------------


TEST_CASE("Test isContainsCycle")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(g) == "0");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isContainsCycle(g) == "The cycle is: 0 -> 1 -> 2 -> 0");

    vector<vector<int>> graph3 = {
        {0, 1, 0, 1, 0},
        {0, 0, 3, 0, 1},
        {0, 0, 0, -2, 0},
        {1, 0, 1, 0, -1},
        {0, 1, 2, 1, 0}
    };
    g.loadGraph(graph3); // Load the graph to the object.
    CHECK(ariel::Algorithms::isContainsCycle(g) == "The cycle is: 0 -> 1 -> 2 -> 3 -> 0");

    vector<vector<int>> graph4 = {
        {0, -2, 0, 0},
        {-2, 0, 3, 0},
        {0, 3, 0, 6},
        {0, 0, 6, 0}};
    g.loadGraph(graph4); // Load the graph to the object.
    CHECK(ariel::Algorithms::isContainsCycle(g) == "0");

}


// --------------- isBipartite Test --------------------


TEST_CASE("Test isBipartite")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isBipartite(g) == "A={0, 2} B={1}");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isBipartite(g) == "The graph is not bipartite (adjacent vertices have the same color).");

    vector<vector<int>> graph3 = {
        {0, 1, 2, 0, 0},
        {1, 0, 3, 0, 0},
        {2, 3, 0, 4, 0},
        {0, 0, 4, 0, 5},
        {0, 0, 0, 5, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::isBipartite(g) == "The graph is not bipartite (adjacent vertices have the same color).");

    vector<vector<int>> graph4 = {
        {0, -2, 0, 0},
        {-2, 0, 3, 0},
        {0, 3, 0, 6},
        {0, 0, 6, 0}};
    g.loadGraph(graph4); // Load the graph to the object.
    CHECK(ariel::Algorithms::isBipartite(g) == "A={0, 2} B={1, 3}");

}


// --------------- negativeCycle Test --------------------
TEST_CASE("Test Negative Cycle"){
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, -2, 0, 0},
        {-2, 0, 3, 0},
        {0, 3, 0, 6},
        {0, 0, 6, 0}};
    g.loadGraph(graph); // Load the graph to the object.
    CHECK(ariel::Algorithms::negativeCycle(g) == false);

    vector<vector<int>> graph2 = {
        {0, 1, 0, 1, 0},
        {0, 0, 3, 0, 1},
        {0, 0, 0, -2, 0},
        {1, 0, 1, 0, -1},
        {0, 1, 2, 1, 0}
    };
    g.loadGraph(graph2); // Load the graph to the object.
    CHECK(ariel::Algorithms::negativeCycle(g) == true);

    vector<vector<int>> graph3 = {
        {0, 0, 0, 0},
        {3, 0, 2, 0},
        {0, 0, 0, -3},
        {1, -1, 0, 0}};
    g.loadGraph(graph3); // Load the graph to the object.
    CHECK(ariel::Algorithms::negativeCycle(g) == true);

}


// --------------- Invaild graph Test --------------------

TEST_CASE("Test invalid graph")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 2, 0},
        {1, 0, 3, 0},
        {2, 3, 0, 4},
        {0, 0, 4, 0},
        {0, 0, 0, 5}};
    CHECK_THROWS(g.loadGraph(graph));
}
