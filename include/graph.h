#ifndef GRAPH_H
#define GRAPH_H
#include <list>

#include <vector>

class Graph
{
private:
    std::vector<std::vector<bool>> adjacencyMatrix;
    int numVertices;
    bool directed;

public:
    Graph(bool isDirected = false);

    bool isEmpty();
    bool isDirected();
    void addVertex(int newVertex);
    void addEdge(int vertex1, int vertex2);
    void removeVertex(int vertexToRemove);
    void removeEdge(int vertex1, int vertex2);
    int NumVertices();
    int numEdges();
    int indegree(int vertex);
    int outdegree(int vertex);
    int degree(int vertex);
    std::list<int> neighbors(int vertex);
    bool neighbor(int vertex1, int vertex2);
};

#endif // GRAPH_H