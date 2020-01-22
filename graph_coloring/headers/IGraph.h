#ifndef IGRAPH_H
#define IGRAPH_H

#include <vector>
#include <iostream>

class IGraph
{
public:

    virtual IGraph* copy() const = 0;

    virtual void addEdge(int i, int j) = 0;

    virtual int nbNodes() const = 0;
    virtual int nbEdges() const = 0;
    virtual int degree(int i) const = 0;
    virtual std::vector< int > adjacency(int i) const = 0;
    
    //renvoie un vecteur avec les indice triée par degré décroissant
    virtual std::vector<int> sortGraphDegree() const = 0;
    
    virtual ~IGraph(){};

};

inline std::ostream& operator<<(std::ostream& out, const IGraph& G)
{
    for (int i = 0; i < G.nbNodes(); i++) {
        out << i << " : ";
        for (int j = 0; j < G.degree(i); j++) {
            out << G.adjacency(i)[j] << ", ";
        } 
        out << std::endl;
    }
    return out;
}

#endif