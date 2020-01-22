#ifndef GRAPHVEC_H
#define GRAPHVEC_H

#include "../headers/IGraph.h"

#define max(a,b) (a>=b?a:b)

class GraphVec : public IGraph
{
private:

    std::vector< std::vector< int > > adj; //tableau d'adjacence  

public:

    GraphVec( int nbNodes );
    GraphVec( std::vector< std::vector< int > > ADJ );

    GraphVec* copy() const;

    int nbNodes() const;
    int nbEdges() const;
    int degree(int i) const;
    std::vector< int > adjacency(int i) const;
    std::vector< int > sortGraphDegree() const; //tri graph par degré d'adjacence décroissant

    void addEdge(int i, int j);

};

#endif