#ifndef _BEVERAGE_H
#define _BEVERAGE_H

#include <string>
#include <algorithm>

class Beverage{
public:
    Beverage();
    virtual ~Beverage();
    virtual std::string getDescription();

    virtual double cost() = 0;
    std::string description;
};

#endif // _BEVERAGE_H
