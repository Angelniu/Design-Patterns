#include "ConcreteComponent.h"

Espresso::Espresso(){
    description = "Expresso";
}

Espresso::~Espresso() {

}

double Espresso::cost() {
    return 1.99;
}

HouseBlend::HouseBlend() {
    description = "House Blend Coffee";
}

HouseBlend::~HouseBlend() {

}

double HouseBlend::cost() {
    return 0.89;
}
