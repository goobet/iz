#include <iostream>
#include "IntegrationUtils.h"
#include "Fabrics.h"

using namespace std;

double a,b,c,d,h;

double F(double x, double y) {
    return x*x + y;
}

void inputParams(){
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;
    cout << "Enter d: ";
    cin >> d;

    cout << "Enter h: ";
    cin >> h;
}

void stubParams(){
    a = 1;
    b = 3;
    c = 6;
    d = 9;
    h = 0.0001;
    cout << "a: " << a << "\t";
    cout << "c: " << c << endl;
    cout << "b: " << b << "\t";
    cout << "d: " << d << endl;
    cout << "h: " << h << endl;
    cout << endl;
}

int main() {
    // inputParams();
    stubParams();
    double first = doubleIntegral(a,b,c,d,h,F,new SimpsonIntegratorFabric());
    double second = doubleIntegral(a,b,c,d,h,F,new TrapezeIntegratorFabric());

    cout << "Simpson: " << first << endl;
    cout << "Trapeze: " << second << endl;
    return 0;
}