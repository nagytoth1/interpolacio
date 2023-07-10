#ifndef INTERPOLACIO_CPP_LAGRANGE_H
#define INTERPOLACIO_CPP_LAGRANGE_H
#include "interpolacio.h"

class LagrangeInterpolacio : public Interpolacio{
public:
    float szamit() override;
    explicit LagrangeInterpolacio(float*, float*, float, uint16_t);
};


#endif //INTERPOLACIO_CPP_LAGRANGE_H
