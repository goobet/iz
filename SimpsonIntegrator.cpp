//
// Created by dmitriy on 12/22/15.
//

#include "IntegrationUtils.h"
#include "SimpsonIntegrator.h"

double SimpsonIntegrator::calculate(double a, double b) {
    int n = (int)((b-a)/h);

    double sum = f(a) + f(b);
    for (int i = 0; i < n; ++i) {
        sum += (i % 2 == 0) ? 2*f(a+i*h) : 4*f(a+i*h);
    }

    return h*sum/3.0;
}