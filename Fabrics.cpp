//
// Created by dmitriy on 12/22/15.
//

#include "IntegrationUtils.h"
#include "Fabrics.h"
#include "SimpsonIntegrator.h"
#include "TrapezeIntegrator.h"

Integrator* TrapezeIntegratorFabric::createIntegrator(Function* f, double h) {
    return new TrapezeIntegrator(f,h);
}

Integrator* SimpsonIntegratorFabric::createIntegrator(Function* f, double h) {
    return new SimpsonIntegrator(f,h);
}
