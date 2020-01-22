#include "../headers/WelshPowell.h"

WelshPowell::WelshPowell() {
    while (! color.empty() )
        color.pop_back();
}

int WelshPowell::nbNodes() const {
    return color.size();
}

int WelshPowell::getColor(int i) const {
    return color[i];
}

void WelshPowell::coloring(const IGraph &G) {
    
    for (int i = 0; i < G.nbNodes(); i++) {
        color.push_back(-1);
    }
    
    std::vector<int> tmp = G.sortGraphDegree();

    //compteur de couleur
    for (int i = 1; i < NBCOLORS; i++) {
        //compteur pts
        for (int j = 0; j < tmp.size(); j++) {
            if (color[tmp[j]] == -1) {
                bool ok = true;
                //compteurs pts adj
                for (int k = 0; k < G.adjacency(tmp[j]).size(); k++) {
                    if (i == getColor ( G.adjacency(tmp[j])[k] ) ) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    color[tmp[j]] = i;
                }
            }
        }
    }
}