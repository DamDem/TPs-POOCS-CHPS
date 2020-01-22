#include <vector>
#include <iostream>

#include "../headers/GraphVec.h"
#include "../headers/NaiveColoring.h"
#include "../headers/WelshPowell.h"

int main(int argc, char const *argv[]) {

    //création du graph
    GraphVec g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    std::cout << "Graph : " << std::endl << g << std::endl;

    //test coloration naive sur g
    NaiveColoring c;
    c.coloring(g);
    std::cout << "NaiveColoring : " << std::endl << c << std::endl;

    //test WelshPowell sur g
    WelshPowell w;
    w.coloring(g);
    std::cout << "Welsh Powell : " << std::endl << w << std::endl;

    return 0;
}
