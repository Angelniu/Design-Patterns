#ifndef _OBSERVERS_H
#define _OBSERVERS_H

class Observers{
public:
    Observers();
    virtual ~Observers();

    virtual void update(float temperature, float humidity, float pressure) = 0;

};

#endif // _OBSERVERS_H
