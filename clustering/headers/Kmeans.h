#ifndef KMEANS_H
#define KMEANS_H

#include <vector>
#include <iostream>
#include <cmath>
#include "matplotlibcpp.h"

#include "../headers/Point.h"
#include "../headers/Tools.h"

namespace plt = matplotlibcpp;

class Kmeans
{
private:
    
    std::vector<Point> centroid; //vecteur contenant les centres
    std::vector<Point> pts; //vecteur comptenant les points à traiter

public:

    Kmeans();
    Kmeans(std::vector<Point> PTS);

    void clustering(); //affecte un cluster à chaque point
    void center_centroids(); //recentre les centres de chaque cluster
    void run(int nb_centers); //execute l'algorithme de Kmeans

    void draw_pts_vec(); //dessine le vecteur pts sur matplotlib

    ~Kmeans();
};

#endif