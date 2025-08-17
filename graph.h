#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>

class Graph {
public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void displayGraph();

private:
    int vertices;
    std::vector<std::vector<int>> adjList;
};

#endif // GRAPH_H