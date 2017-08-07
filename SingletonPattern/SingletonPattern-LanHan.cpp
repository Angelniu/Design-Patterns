#include <bits/stdc++.h>
using namespace std;

//使用懒汉模式时，Singleton在程序第一次调用的时候才会初始化自己。
//使用该模式时，由于if语句的存在，会影响调用的效率。
//而且，在多线程环境下使用时，为了保证只能初始化一个实例，需要用锁来保证线程安全性，
//如果遇到处理大量数据时，锁会成为整个性能的瓶颈。
class Singleton{
public:

    ~Singleton(){}
    static Singleton* getInstance() {
        if(uniqueInstance == NULL) {
            uniqueInstance = new Singleton();
        }
        return uniqueInstance;
    }

private:
    Singleton(){}
    //Singleton(const Singleton&);
    //Singleton& operator =(const Singleton &);
    static Singleton *uniqueInstance;
};

Singleton* Singleton::uniqueInstance = NULL;
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
