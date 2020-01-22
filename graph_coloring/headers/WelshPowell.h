#ifndef WELSHPOWELL_H
#define WELSHPOWELL_H

#include <vector>

#include "../headers/IGraphColoring.h"

class WelshPowell : public IGraphColoring
{
private:

    std::vector<int> color;

    int nbNodes() const;
    int getColor(int i) const;

public:

    WelshPowell();

    void coloring(const IGraph &G);

};

#endif