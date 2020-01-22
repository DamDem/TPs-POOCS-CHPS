#ifndef BLOB_H
#define BLOB_H

#include <vector>
#include <cmath>
#include <iostream>
#include <random>
#include "matplotlibcpp.h"

#include "../headers/Point.h"
#include "../headers/Tools.h"

namespace plt = matplotlibcpp;

class Blob {
private :

    Point center; //Point désignant le centre du blob
    //std::vector<Point> pts; //vecteur comptenant les différents points du blob
    
    //valeur max et min en y et x pour les points du blob
    double x_min;
    double x_max;
    double y_min;
    double y_max;


public :

    std::vector<Point> pts; //vecteur comptenant les différents points du blob

    //constructeurs
    Blob();
    Blob(double center_x, double center_y, double min_x, double max_x, double min_y, double max_y);
    Blob(double min_x, double max_x, double min_y, double max_y);
    Blob(double center_x, double center_y);

    //génère un blob par rapport à la loi normale
    void make_blob_normal(double ecart, int nb_point);

    //affiche textuellement le blob
    void print();
    void draw();

    ~Blob();

};

#endif