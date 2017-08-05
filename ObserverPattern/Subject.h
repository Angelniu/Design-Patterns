#ifndef _SUBJECT_H
#define _SUBJECT_H
#include "Observers.h"

class Subject{
public:
    Subject();
    virtual ~Subject();

    virtual void registerObserver(Observers *o) = 0;
    virtual void removeObserver(Observers *o) = 0;
    virtual void notifyObserver() = 0;
};
#endif // _SUBJECT_H
