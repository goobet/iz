//
// Created by dmitriy on 12/22/15.
//

#include "IntegrationUtils.h"

class FunctionToSingleArg: public Function {
public:
    double (*f)(double x, double y);
    double y;
    FunctionToSingleArg( double (*g)(double x, double y)) {
        this->f = g;
    }

    double getValue(double x) {
        return f(x,y);
    }
};

class IntegralFunction: public Function {
public:
    Integrator* integrator = 0;
    FunctionToSingleArg f  = 0;
    double a;
    double b;

    IntegralFunction(double a, double b, double h, FunctionToSingleArg f, IntegratorFabric* fabric) {
        this->a = a;
        this->b = b;
        this->f = f;
        this->integrator = fabric->createIntegrator(&f,h);
    }

    double getValue(double x) {
        f.y = x;
        return integrator->calculate(a,b);
    }
};

double doubleIntegral(double a, double b, double c, double d, double h, double (*f)(double, double), IntegratorFabric* fabric) {
    Function* i_f = new IntegralFunction(c, d, h, FunctionToSingleArg(f), fabric);
    Integrator* integrator = fabric->createIntegrator(i_f, h);
    return integrator->calculate(a, b);
}