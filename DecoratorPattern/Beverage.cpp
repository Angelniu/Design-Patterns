#include "Beverage.h"

Beverage::Beverage():description("Unknown Beverage"){

}

Beverage::~Beverage(){

}

std::string Beverage::getDescription(){
    return description;
}
