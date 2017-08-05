#ifndef _WEATHERDATA_H
#define _WEARHERDATA_H

#include "Observers.h"
#include "Subject.h"
#include <vector>
#include <algorithm>
using namespace std;

class WeatherData : public Subject{
public:
    WeatherData();
    ~WeatherData();

    void registerObserver(Observers *o);
    void removeObserver(Observers *o);
    void notifyObserver();
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);

    float getTemperature();
    float getHumidity();
    float getPressure();

private:
    float temperature;
    float humidity;
    float pressure;
    vector<Observers*> observers;
};

#endif // _WEATHERDATA_H
