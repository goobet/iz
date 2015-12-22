//
// Created by dmitriy on 12/22/15.
//

#ifndef IZ_FABRICS_H
#define IZ_FABRICS_H

class TrapezeIntegratorFabric: public IntegratorFabric {
    Integrator* createIntegrator(Function* f, double h);
};

class SimpsonIntegratorFabric: public IntegratorFabric {
    Integrator* createIntegrator(Function* f, double h);
};

#endif //IZ_FABRICS_H
