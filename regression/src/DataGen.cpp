#include "../headers/DataGen.h"

DataGen::DataGen() 
    : pts()
    , noise_x(0)
    , noise_y(0)
    , step(1)
    , x_min(0)
    , x_max(10) 
{} 

DataGen::DataGen(   std::vector< std::pair<double, double> > PTS,
                    double NOISE_X, double NOISE_Y, double STEP,
                    double X_MIN, double X_MAX ) 
    : pts(PTS)
    , noise_x ( NOISE_X )
    , noise_y ( NOISE_Y )
    , step ( STEP )
    , x_min ( X_MIN )
    , x_max ( X_MAX ) 
{}

DataGen::DataGen(   double NOISE_X, double NOISE_Y, double STEP, 
                    double X_MIN, double X_MAX )
    : pts()
    , noise_x ( NOISE_X )
    , noise_y ( NOISE_Y )
    , step ( STEP ) 
    , x_min ( X_MIN )
    , x_max ( X_MAX )
{}

void DataGen::gen_linear( double a, double b) {
    for (double x = x_min; x < x_max; x += step) {
        double tmp_x = rng(-noise_x, noise_x);
        double tmp_y = rng(-noise_y, noise_y);
        double my_y = a * x + b + tmp_y;
        double my_x = x + tmp_x;
        pts.push_back( std::pair<double,double>(my_x, my_y) );
    }
}

void DataGen::gen_poly_2( double a, double b, double c) {
    for (double x = x_min; x < x_max; x += step) {
        double tmp_x = rng(-noise_x, noise_x);
        double tmp_y = rng(-noise_y, noise_y);
        double my_y = a + b * x + c * pow(x,2) + tmp_y;
        double my_x = x + tmp_x;
        pts.push_back( std::pair<double,double>(my_x, my_y) );
    }
}

void DataGen::gen_poly(std::vector<double> theta) {
    
    for (double x = x_min; x < x_max; x += step) {
        double res = 0.0;
        for (int i = 0; i<theta.size(); i++) {
            res +=  theta[i] * pow(x, i);
        }
        double tmp_x = rng(-noise_x, noise_x);
        double tmp_y = rng(-noise_y, noise_y);
        double my_x = x + tmp_x;
        double my_y = res + tmp_y;
        pts.push_back( std::pair<double,double>(my_x, my_y) );
    }
}

void DataGen::print() {
    if (pts.size() != 0)
    for (int i = 0; i < pts.size(); i++) {
        std::cout << i << " : x = " << pts[i].first << " | y = " 
        << pts[i].second << std::endl;
    }
    else std::cout << "vecteur null" << std::endl;
}

void DataGen::draw() {
    
    std::vector<double> x;
    std::vector<double> y;
    
    for (int i=0; i<pts.size(); i++) {
        x.push_back(pts[i].first);
        y.push_back(pts[i].second);
    }

    plt::scatter(x,y);
    plt::show();
}

DataGen::~DataGen() {}