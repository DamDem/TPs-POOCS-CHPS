#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <cmath>

#include "../headers/Hypothesis.h"

class Polynomial : public Hypothesis
{
private:

    std::vector<double> thetas;
    
public:

    Polynomial();
    Polynomial(std::vector<double> THETAS);

    int nb_parameters();
    double eval(double x);
    double deriv(double x, int indice); 

    ~Polynomial();
    
};

#endif