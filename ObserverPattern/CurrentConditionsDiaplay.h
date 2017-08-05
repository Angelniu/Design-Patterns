#ifndef _CURRENTCONDITIONDISPALY_H
#define _CURRENTCONDITIONDISPALY_H

#include "Observers.h"
#include "DisplayElement.h"
#include "Subject.h"

class CurrentConditionsDisplay: public Observers, public DisplayElement{
public:
    CurrentConditionsDisplay();
    CurrentConditionsDisplay(Subject *weatherData);
    ~CurrentConditionsDisplay();

    void update(float temperature, float humidity, float pressure);

    void display();

private:
    float temperature;
    float humidity;
    Subject *weatherData;
};

#endif // _CURRENTCONDITIONDISPALY_H
