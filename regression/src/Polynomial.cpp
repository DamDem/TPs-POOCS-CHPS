#include "../headers/Polynomial.h"

Polynomial::Polynomial() {
    while (!thetas.empty())
        thetas.pop_back();
}

Polynomial::Polynomial(std::vector<double> THETAS) {
    thetas = THETAS;
}

int Polynomial::nb_parameters() {
    return thetas.size();
}

double Polynomial::eval (double x) {
    double res = 0.0;
    for (int i = 0; i<nb_parameters(); i++) {
        res += thetas[i] * pow(x, i);
    }
}

double Polynomial::deriv (double x, int indice) {
    if (indice == 0)
        return 1.0;
    else
        return pow (x, indice);    
}

Polynomial::~Polynomial() {}