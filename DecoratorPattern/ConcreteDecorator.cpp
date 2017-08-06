#include "ConcreteDecorator.h"
#include <iostream>
using namespace std;
ConcreteDecorator::ConcreteDecorator(){

}

ConcreteDecorator::ConcreteDecorator(Beverage *beverage){
    this->beverage = beverage;
    //cout<<this->beverage->getDescription()<<endl;
}

ConcreteDecorator::~ConcreteDecorator() {

}

double ConcreteDecorator::cost() {
    return beverage->cost() + 0.20;  // Mocha
}

std::string ConcreteDecorator::getDescription() {
    //cout<<"GetDes:"<<this->beverage->getDescription()<<endl;
    return static_cast<std::string>(beverage->getDescription() + ", Mocha");
}

