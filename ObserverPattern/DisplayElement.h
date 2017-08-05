#ifndef _DISPLAYELEMENT_H
#define _DISPLAYELEMENT_H

class DisplayElement{
public:
    DisplayElement();
    virtual ~DisplayElement();

    virtual void display() = 0;
};

#endif // _DISPLAYELEMENT_H
