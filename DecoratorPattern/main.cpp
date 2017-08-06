#include <iostream>
//#include "Beverage.h"
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

using namespace std;

int main()
{
    Beverage *beverage = new Espresso();
    cout<< beverage->getDescription()<<" $"<<beverage->cost()<<endl;

    Beverage *beverage2 = new HouseBlend();
    //cout<<beverage2->getDescription() << " $" <<beverage2->cost()<<endl;
    beverage2 = new ConcreteDecorator(beverage2);

    beverage2 = new ConcreteDecorator(beverage2);
    cout<<beverage2->getDescription()<<" $"<<beverage2->cost()<<endl;

    //如果Beverage类中的description定义为not virtual，则需要下面的转化，即dynamic_cast真正的用武之地
    //使用基类对象的指针或者引用执行某个派生类操作并且该操作不是虚函数时。

    //ConcreteDecorator *tmp = dynamic_cast<ConcreteDecorator*>(beverage2);
    //cout<<tmp->getDescription() << " $" <<tmp->cost()<<endl;

    return 0;
}
