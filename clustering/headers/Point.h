#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

#include "../headers/Tools.h"

class Point
{
private:
   
    double x;
    double y;
    int cluster; //indice du cluster

public:

    Point();
    Point(const Point &p);
    Point(const double &X, const double &Y);
    Point(const double &X, const double &Y, const int &clust);
    Point(const double &xmin, const double &xmax, const double &ymin, const double &ymax);

    void print();

    double distance(Point p); //renvoie la distance avec le point p

    double get_x();
    double get_y();
    int get_cluster();

    ~Point();

    friend class Kmeans;
    friend class Blob; 
};

#endif