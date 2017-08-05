#include "ForecastDisplay.h"
#include <iostream>
using namespace std;

ForecastDisplay::ForecastDisplay():currentTemperature(80){

}

ForecastDisplay::~ForecastDisplay(){

}

ForecastDisplay::ForecastDisplay(Subject *weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure){
    this->lastTemperature = this->currentTemperature;
    this->currentTemperature = temperature;
    display();
}

void ForecastDisplay::display(){
    if(this->currentTemperature < this->lastTemperature) {
        cout << "Forecast: Watch out for cooler, rainy weather" << endl;
    }
    else if(this->currentTemperature > this->lastTemperature) {
        cout << "Forecast: Improving weather on the way!" << endl;
    }
    else {
        cout << "Forecast: More of the same" << endl;
    }
}
