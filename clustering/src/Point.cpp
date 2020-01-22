#include "../headers/Point.h"

Point::Point(){
    x=0;
    y=0;
    cluster = -1;
}

Point::Point(const Point &p){
    x=p.x;
    y=p.y;
    cluster = p.cluster;
}

Point::Point(const double &X, const double &Y){
    x=X;
    y=Y;
    cluster = -1;
}

Point::Point(const double &X, const double &Y, const int &clust){
    x=X;
    y=Y;
    cluster = clust;
}

Point::Point(const double &xmin, const double &xmax, const double &ymin, const double &ymax){
    x = rng(xmin, xmax);
    y = rng(ymin, ymax);
    cluster = -1;
}

double Point::distance(Point p) {
    double res = sqrt( pow ( ( x - p.get_x() ), 2) + pow ( (y - p.get_y() ) , 2 ) );
    return res;
}

double Point::get_x(){ return x; }

double Point::get_y(){ return y; }

int Point::get_cluster(){ return cluster; }

void Point::print(){
    std::cout << "x = " << x << " | y = " << y << std::endl;
}

Point::~Point(){}