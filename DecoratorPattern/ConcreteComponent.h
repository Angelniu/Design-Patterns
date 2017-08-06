#ifndef _CONCRETECOMPONENT_H
#define _CONCRETECOMPONENT_H

#include "Beverage.h"

class Espresso : public Beverage{
public:
    Espresso();
    ~Espresso();
    double cost();
};


class HouseBlend : public Beverage{
public:
    HouseBlend();
    ~HouseBlend();
    double cost();
};
#endif // _CONCRETECOMPONENT_H
