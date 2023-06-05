#include <iostream>
#include "graph.h"

int main() {
    Graph graph(false);

    std::cout << "isEmpty(): " << graph.isEmpty() << std::endl;

    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    std::cout << "Added vertices: 0, 1, 2, 3" << std::endl;

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);
    std::cout << "Added edges: (0,1)  (1,2)  (2,3)  (3,0)" << std::endl;

    std::cout << "Number of vertices: " << graph.NumVertices() << std::endl;
    std::cout << "Number of edges: " << graph.numEdges() << std::endl;

    std::cout << "isEmpty(): " << graph.isEmpty() << std::endl;

    return 0;
}
