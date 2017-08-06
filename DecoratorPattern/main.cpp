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

    //���Beverage���е�description����Ϊnot virtual������Ҫ�����ת������dynamic_cast����������֮��
    //ʹ�û�������ָ���������ִ��ĳ��������������Ҹò��������麯��ʱ��

    //ConcreteDecorator *tmp = dynamic_cast<ConcreteDecorator*>(beverage2);
    //cout<<tmp->getDescription() << " $" <<tmp->cost()<<endl;

    return 0;
}
