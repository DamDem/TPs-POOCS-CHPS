#ifndef IGRAPHCOLORING_H
#define IGRAPHCOLORING_H

#include <vector>
#include <iostream>
#include <string>

#include "../headers/IGraph.h"


#define NBCOLORS 1000

class IGraphColoring 
{
public:
    
    virtual void coloring(const IGraph &G) = 0;

    virtual int nbNodes() const = 0;
    virtual int getColor(int i) const = 0;

    virtual~IGraphColoring(){};

};

inline std::ostream& operator<<(std::ostream& out, const IGraphColoring& G)
{
    for (int i = 0; i < G.nbNodes(); i++){
        out << i << " : " << G.getColor(i) << std::endl;
    } 
    return out;  
}

#endif