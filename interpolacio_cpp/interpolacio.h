#ifndef INTERPOLACIO_CPP_INTERPOLACIO_H
#define INTERPOLACIO_CPP_INTERPOLACIO_H

#include <cstdint>
class Interpolacio{
public:
    Interpolacio(float*, float*, float, uint16_t);
    virtual float szamit() = 0;
protected:
    float *x_m, *y_m;
    float xp_m;
    uint16_t n_m;
};


#endif //INTERPOLACIO_CPP_INTERPOLACIO_H
