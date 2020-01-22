#ifndef NAIVECOLORING_H
#define NAIVECOLORING_H

#include <vector>

#include "../headers/IGraphColoring.h"


    class NaiveColoring : public IGraphColoring
    {
    private:

        std::vector< int > color;

        int nbNodes() const;
        int getColor(int i) const;
        int chooseColor(int i, const IGraph &G); //choisi la couleur

    public:
        NaiveColoring();

        void coloring(const IGraph &G);
    };
    
#endif