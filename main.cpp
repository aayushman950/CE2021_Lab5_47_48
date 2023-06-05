#include <iostream>
#include "graph.h"

int main()
{
    Graph graph(false);

    std::cout << "isEmpty(): " << graph.isEmpty() << std::endl;

    // Add vertices to the graph
    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    std::cout << "Added vertices: 0, 1, 2, 3" << std::endl;

    // Add edges to the graph
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);
    std::cout << "Added edges: (0,1)  (1,2)  (2,3)  (3,0)" << std::endl;

    // Get the number of vertices and edges in the graph
    std::cout << "Number of vertices: " << graph.NumVertices() << std::endl;
    std::cout << "Number of edges: " << graph.numEdges() << std::endl;

    // Check if the graph is empty
    std::cout << "isEmpty(): " << graph.isEmpty() << std::endl;

    // Get the indegree, outdegree, and degree of specific vertices
    std::cout << "Indegree of vertex 1: " << graph.indegree(1) << std::endl;
    std::cout << "Outdegree of vertex 2: " << graph.outdegree(2) << std::endl;
    std::cout << "Degree of vertex 3: " << graph.degree(3) << std::endl;

    // Check if a vertex is a neighbor of another vertex
    std::cout << "Is vertex 3 a neighbor of vertex 1? " << (graph.neighbor(1, 3) ? "Yes" : "No") << std::endl;

    return 0;
}
