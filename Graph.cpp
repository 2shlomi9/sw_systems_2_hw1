/*

Author : shlomi zecharia
ID : 315141242
Email : 2shlomiariel9@gmail.com

*/
#include "Graph.hpp"
#include <vector>
#include <stdexcept>
#include <iostream>

namespace ariel{

    // Implementation of the loadGraph function
    
    void Graph::loadGraph(const std::vector<std::vector<int>>& graph) {

        int n = graph.size();
        for (const auto& row : graph) {
            if (row.size() != n) {
                throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
            }
        }

        adjacencyMatrix = graph;
    }
    
    // Function that takes a constant reference to a vector of vectors of integers
    
    void Graph::printGraph() const {
        int n = adjacencyMatrix.size();
        int edges = 0;
        for (const auto& row : adjacencyMatrix) {
            for (int val : row) {
                if(val != 0){
                    edges ++;
                }
            }
        }
        std::cout << "Graph with " << n << " vertices and " << edges << " edges." << std::endl;
    }
    
}
    

