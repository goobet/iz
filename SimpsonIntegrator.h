//
// Created by dmitriy on 12/22/15.
//

#ifndef IZ_SIMPSONINTEGRATOR_H
#define IZ_SIMPSONINTEGRATOR_H

class SimpsonIntegrator: public Integrator {
public:
    SimpsonIntegrator(Function* function, double h): Integrator(function, h) {}

    double calculate(double a, double b);
};

#endif //IZ_SIMPSONINTEGRATOR_H
