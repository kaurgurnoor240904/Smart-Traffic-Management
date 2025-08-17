#include "graph.h"

// Implementation of Graph class methods
Graph::Graph(int vertices) {
    this->vertices = vertices;
    adjList.resize(vertices);
}

void Graph::addEdge(int src, int dest) {
    adjList[src].push_back(dest);
    adjList[dest].push_back(src); // For undirected graph
}

void Graph::displayGraph() {
    for (int i = 0; i < vertices; ++i) {
        std::cout << "Vertex " << i << ":";
        for (int j : adjList[i]) {
            std::cout << " -> " << j;
        }
        std::cout << std::endl;
    }
}
