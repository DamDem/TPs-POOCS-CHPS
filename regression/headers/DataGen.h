#ifndef DATAGEN_H
#define DATAGEN_H

#include <vector>
#include <utility>
#include <iostream>
#include <cmath>

#include "matplotlibcpp.h"

#include "../headers/Tools.h"

namespace plt = matplotlibcpp;

class DataGen {

private :

    std::vector< std::pair<double, double> > pts; //vecteur de points
    const double noise_x;
    const double noise_y; 
    const double step;
    const double x_min;
    const double x_max;
             
public :

    DataGen();
    DataGen(    std::vector< std::pair<double, double> > PTS,
                double NOISE_X, double NOISE_Y, double STEP,
                double X_MIN, double X_MAX );
    DataGen(    double NOISE_X, double NOISE_Y, double STEP, 
                double X_MIN, double X_MAX );

    void gen_linear(double a, double b); //genere fonction type y = ax + b
    void gen_poly_2(double a, double b, double c); // y = a + bx + cx²
    void gen_poly(std::vector<double> theta); //genere polynome de degres = taille vec

    void print();
    void draw();
    
    ~DataGen();

};

#endif