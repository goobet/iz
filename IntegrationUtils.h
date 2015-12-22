//
// Created by dmitriy on 12/22/15.
//

#ifndef IZ_SOME_H
#define IZ_SOME_H
class Function {
public:
    virtual double getValue(double x) = 0;
};

class Integrator {
public:
    Function* function;
    double   h;
    Integrator(Function* function, double h) {
        this->function = function;
        this->h = h;
    }

    virtual double calculate(double a, double b) = 0;
protected:
    double f(double x) {
        return function->getValue(x);
    }
};

class IntegratorFabric {
public:
    virtual Integrator* createIntegrator(Function* f, double h) = 0;
};

class FunctionToSingleArg;
class IntegralFunction;

double doubleIntegral(double a, double b, double c, double d, double h, double (*f)(double, double),
                      IntegratorFabric* fabric);

#endif //IZ_SOME_H
