#include "lagrange.h"
#include <iostream>
using namespace std;
float LagrangeInterpolacio::szamit() {
    int i,j;
    float prod, yp = 0;
    for (i = 0; i < n_m; ++i) {
        prod = 1;
        for (j = 0; j < i; ++j) {
                prod = prod * (xp_m - x_m[j]) / (x_m[i] - x_m[j]);
                cout << "prod * ( " <<  xp_m << " - " << x_m[j] << " ) / ( " << x_m[i] << " - " << x_m[j] << " )" << endl;
        }
        for (j = i+1; j < n_m; ++j) {
                prod = prod * (xp_m - x_m[j]) / (x_m[i] - x_m[j]);
                cout << "prod * ( " <<  xp_m << " - " << x_m[j] << " ) / ( " << x_m[i] << " - " << x_m[j] << " )" << endl;
        }
        yp += prod * y_m[i];
    }
    cout << "Lagrange interpoláció eredménye " << xp_m << " helyen: " << yp << endl;
    return yp;
}

LagrangeInterpolacio::LagrangeInterpolacio(float* x, float* y, float xp, uint16_t n) : Interpolacio(x,y, xp, n) {}
