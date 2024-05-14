/*

Author : shlomi zecharia
ID : 315141242
Email : 2shlomiariel9@gmail.com

*/

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <stdexcept>
#include <iostream>

namespace ariel {

    class Graph {

        private:

            std::vector<std::vector<int>> adjacencyMatrix;

        public:

            Graph() = default;

            void loadGraph(const std::vector<std::vector<int>>& graph);

            void printGraph() const;

            const std::vector<std::vector<int>>& getAdjacencyMatrix() const {
                return adjacencyMatrix;
            }

    };

} 

#endif // GRAPH_HPP

