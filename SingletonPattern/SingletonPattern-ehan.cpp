#include <bits/stdc++.h>
using namespace std;

//饿汉模式比较适用于程序整个运行过程中都需要访问、会被频繁访问或者需要被多线程访问的情况。

//饿汉模式适用于Singleton被频繁调用，这样由于预先加载了实例，访问实例时没有if语句，效率更高。
//但是，如果Singleton的成员比较庞大，复杂，实例化Singleton会花一些时间，且这个实例一直占用着大量内存。在使用时要注意这部分的开销。
//使用饿汉模式用于多线程编程中，由于线程访问之前，实例已经存在，就不需要像懒汉模式 中加入锁。
//因此 饿汉模式保证了多线程安全。
class Singleton{
public:
    ~Singleton(){}
    static Singleton* getInstance() {
        return uniqueInstance;
    }

private:
    Singleton(){}
    static Singleton *uniqueInstance;
};

Singleton* Singleton::uniqueInstance = new Singleton();
int main() {

    Singleton *instance1 = Singleton::getInstance();
    Singleton *instance2 = Singleton::getInstance();
    if(instance1 == instance2) {
        cout<<"There is only one instance!"<<endl;
    }
    else {
        cout<<"Something is wrong!" <<endl;
    }
    return 0;
}

