#include <bits/stdc++.h>
using namespace std;

//ʹ������ģʽʱ��Singleton�ڳ����һ�ε��õ�ʱ��Ż��ʼ���Լ���
//ʹ�ø�ģʽʱ������if���Ĵ��ڣ���Ӱ����õ�Ч�ʡ�
//���ң��ڶ��̻߳�����ʹ��ʱ��Ϊ�˱�ֻ֤�ܳ�ʼ��һ��ʵ������Ҫ��������֤�̰߳�ȫ�ԣ�
//������������������ʱ�������Ϊ�������ܵ�ƿ����
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
