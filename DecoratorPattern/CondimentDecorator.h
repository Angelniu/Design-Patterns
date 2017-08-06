#ifndef _CONDIMENTDECORATOR_H
#define _CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator : public Beverage{
public:
    CondimentDecorator();
    virtual ~CondimentDecorator();
   // virtual double cost() = 0;
    virtual std::string getDescription() = 0;

};

#endif // _CONDIMENTDECORATOR_H
