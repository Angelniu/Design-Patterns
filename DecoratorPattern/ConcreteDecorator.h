#ifndef _CONCRETEDECORATOR_H
#define _CONCRETEDECORATOR_H

#include "CondimentDecorator.h"

class ConcreteDecorator : public CondimentDecorator{
public:
    ConcreteDecorator();
    ConcreteDecorator(Beverage * beverage);
    ~ConcreteDecorator();

    double cost();
    std::string getDescription();

    Beverage *beverage;

};
#endif // _CONCRETEDECORATOR_H
