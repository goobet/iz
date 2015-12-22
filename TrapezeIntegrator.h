//
// Created by dmitriy on 12/22/15.
//

#ifndef IZ_TRAPEZEINTEGRATOR_H
#define IZ_TRAPEZEINTEGRATOR_H

class TrapezeIntegrator: public Integrator {
public:
    TrapezeIntegrator(Function* function, double h): Integrator(function, h) {}

    double calculate(double a, double b);
};

#endif //IZ_TRAPEZEINTEGRATOR_H
