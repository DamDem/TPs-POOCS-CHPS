#include <random>

#include "../headers/Tools.h"

double rng(double val_min, double val_max) {
    
    std::random_device r;
    std::default_random_engine e(r());
    std::uniform_real_distribution<double> uniform_dist(val_min, val_max);
    
    return uniform_dist(e);

}

double rng_normal(double center, double sigma) {
    
    std::random_device r;
    std::default_random_engine e(r());
    std::normal_distribution<double> distribution(center, sigma);

    return distribution(e);
}
