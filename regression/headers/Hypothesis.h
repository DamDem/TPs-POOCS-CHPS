#ifndef HYPOTHESIS_H
#define HYPOTHESIS_H

class Hypothesis
{
private:

public:

    Hypothesis();

    virtual int nb_parameters();
    virtual double eval(double x);
    virtual double deriv(double x, int indice);    

    ~Hypothesis();
    
};

#endif