#include "../headers/NaiveColoring.h"

NaiveColoring::NaiveColoring() {
    while (! color.empty() )
        color.pop_back();
}

int NaiveColoring::nbNodes() const {
    return color.size();
}

int NaiveColoring::getColor(int i) const {
    return color[i];
}

int NaiveColoring::chooseColor(int I, const IGraph &G){

    if (G.adjacency(I).size() == 0) //si pas de voisins
        return 1;
    
    std::vector<int> nearColor{}; //couleurs des pts à coté 

    //init nearColor
    for (int j = 0; j < G.adjacency(I).size(); j++) { 
        if ( G.adjacency(I)[j] != I)
            nearColor.push_back( color [ G.adjacency(I)[j] ] );
    }

    //recherche plus petite couleur dispo
    for (int i = 1; i < NBCOLORS; i++) {
        bool ok = true;
        for(int j = 0; j < nearColor.size(); j++) {
            if (nearColor[j] == i) {
                ok = false;
                break;
            }
        }
        if(ok)
            return i;
    }

}

void NaiveColoring::coloring(const IGraph &G) {

    //init colors
    for (int i = 0; i < G.nbNodes(); i++) {
        color.push_back(-1);
    }

    //colre chaque pts
    for (int i = 0; i < G.nbNodes(); i++) {        
        color[i] = chooseColor(i, G);
    }

}