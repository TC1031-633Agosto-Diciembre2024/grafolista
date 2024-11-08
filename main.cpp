#include <iostream>
#include "Graph.h"
using namespace std;
int main() {
    int vertices=5;
    Graph<string> graph(vertices);

    graph.addEdge(0,1,"A","B");
    graph.addEdge(0,4, "A","E");
    graph.addEdge(1,2,"B","C");
    graph.addEdge(1,3,"B","D");
    graph.addEdge(1,4, "B","E");
    graph.addEdge(2,3,"C","D");
    graph.addEdge(3,4,"D","E");


    graph.displayGraph();
    return 0;
}
