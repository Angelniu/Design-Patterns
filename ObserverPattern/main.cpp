#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDiaplay.h"
#include "ForecastDisplay.h"
using namespace std;

int main()
{
    WeatherData *weatherData = new WeatherData();

    CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherData);
    ForecastDisplay *forecastDisplay = new ForecastDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4);
    weatherData->setMeasurements(82, 70, 29.2);
    weatherData->setMeasurements(78, 90, 29.2);
    return 0;
}
