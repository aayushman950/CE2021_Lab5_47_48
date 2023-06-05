#include <iostream>
#include "graph.h"

int main() {
    Graph graph(false);

    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);

    std::cout << "Number of vertices: " << graph.NumVertices() << std::endl;
    std::cout << "Number of edges: " << graph.numEdges() << std::endl;

    return 0;
}
