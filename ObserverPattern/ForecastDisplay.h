#ifndef _FORECASTDISPLAY_H
#define _FORECASTDISPLAY_H


#include "Observers.h"
#include "DisplayElement.h"
#include "Subject.h"

class ForecastDisplay : public DisplayElement, public Observers{
public:
    ForecastDisplay();
    ~ForecastDisplay();
    ForecastDisplay(Subject *weatherData);

    void update(float temperature, float humidity, float pressure);

    void display();

private:
    float lastTemperature;
    float currentTemperature;
    Subject *weatherData;
};

#endif // _FORECASTDISPALY_H
