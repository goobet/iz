//
// Created by dmitriy on 12/22/15.
//

#include "IntegrationUtils.h"
#include "TrapezeIntegrator.h"

double TrapezeIntegrator::calculate(double a, double b){
    int n = (int)((b-a)/h);

    double sum = (f(a) + f(b))/2.0;
    for (int i = 1; i < n-1; ++i) {
    sum += f(a+i*h);
    }

    return h*sum;
}