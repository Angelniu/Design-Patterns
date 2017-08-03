#include<bits/stdc++.h>
using namespace std;

class FlyBehavior{
public:
    FlyBehavior(){}
    virtual ~FlyBehavior(){}
    virtual void fly() = 0;
};

class QuackBehavior{
public:
    QuackBehavior(){}
    virtual ~QuackBehavior(){}
    virtual void quack() = 0;
};



class Duck{
public:
    Dock(){}
    virtual ~Duck(){}
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

    virtual void display(){}
    void performFly() {
        flyBehavior->fly();
    }
    void performQuack() {
        quackBehavior->quack();
    }

    void setFlyBehavior(FlyBehavior *fb) {
        flyBehavior = fb;
    }

    void setQuackBehavior(QuackBehavior *qb) {
        quackBehavior = qb;
    }

    void swim() {
        cout<< "All ducks float, even decoys!"<<endl;
    }
};

class FlyWithSwings : public FlyBehavior{
public:
    void fly() {
        cout<<"I can fly! Hahaha¡­¡­"<<endl;
    }
};

class FlyNoWay : public FlyBehavior{
public:
    void fly() {
        cout<< "I can't fly, and I'm so foolish!"<<endl;
    }
};

class FlyRocketPowered : public FlyBehavior{
public:
    FlyRocketPowered(){}
    ~FlyRocketPowered(){}

    void fly() {
        cout<<"I'm flying with a rocket!"<<endl;
    }
} ;

class Quack : public QuackBehavior{
public:
    void quack() {
        cout<<"Quack, Gua, Gua, Gua!"<<endl;
    }
};

class MeteQuack : public QuackBehavior{
public:
    void quack() {
        cout<<"<Silence!>"<<endl;
    }
};

class Squeak : public QuackBehavior {
public:
    void quack() {
        cout<<"Squeak, Squeak!"<<endl;
    }
};


class MallardDuck : public Duck{
public:
    MallardDuck() {
        quackBehavior = new Quack();
        flyBehavior = new FlyWithSwings();
    }

   ~MallardDuck(){}

    void display() {
        cout<<"I'm a real Mallard duck"<<endl;
    }
};

class RubberDuck : public Duck{
public:
    RubberDuck() {
        flyBehavior = new FlyNoWay();
        quackBehavior = new Squeak();
    }
    ~RubberDuck () {}
    void display() {
        cout<<"I'm a RubberDuck!"<<endl;
    }
};



//duckcall
class DuckCall : public QuackBehavior{
public:
    DuckCall(){}
    ~DuckCall(){}

    QuackBehavior *quackBehavior;

    void SetQuackBehavior(QuackBehavior *qb) {
        quackBehavior = qb;
    }
    void quack() {
        quackBehavior->quack();
    }
};

int main() {
    Duck *duck = new MallardDuck();
    duck->display();
    duck->performFly();
    duck->performQuack();
    delete duck;
    duck = nullptr;

    duck = new RubberDuck();
    duck->display();
    duck->performQuack();
    duck->performFly();
    duck->setFlyBehavior(new FlyRocketPowered());
    duck->performFly();
    delete duck;
    duck = nullptr;


    DuckCall *duckCall = new DuckCall();
    duckCall->SetQuackBehavior(new Quack());
    duckCall->quack();
    return 0;
}
