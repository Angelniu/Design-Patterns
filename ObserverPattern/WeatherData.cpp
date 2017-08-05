#include "WeatherData.h"

WeatherData::WeatherData(){
    observers.clear();
   // cout<<1<<endl;
}

WeatherData::~WeatherData(){

}

void WeatherData::registerObserver(Observers *o){
    observers.push_back(o);
}

void WeatherData::removeObserver(Observers *o){
    for(int i = 0; i < observers.size(); ++i) {
        if(observers[i] == o)  {
            observers.erase(observers.begin() + i);
            break;
        }
    }
}

void WeatherData::notifyObserver(){
    int n = observers.size();
    for(int i = 0; i < n; ++i) {
        observers[i]->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged(){
    notifyObserver();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure){
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;

    measurementsChanged();
}
