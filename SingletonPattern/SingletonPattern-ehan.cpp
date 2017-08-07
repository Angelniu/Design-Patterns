#include <bits/stdc++.h>
using namespace std;

//����ģʽ�Ƚ������ڳ����������й����ж���Ҫ���ʡ��ᱻƵ�����ʻ�����Ҫ�����̷߳��ʵ������

//����ģʽ������Singleton��Ƶ�����ã���������Ԥ�ȼ�����ʵ��������ʵ��ʱû��if��䣬Ч�ʸ��ߡ�
//���ǣ����Singleton�ĳ�Ա�Ƚ��Ӵ󣬸��ӣ�ʵ����Singleton�ỨһЩʱ�䣬�����ʵ��һֱռ���Ŵ����ڴ档��ʹ��ʱҪע���ⲿ�ֵĿ�����
//ʹ�ö���ģʽ���ڶ��̱߳���У������̷߳���֮ǰ��ʵ���Ѿ����ڣ��Ͳ���Ҫ������ģʽ �м�������
//��� ����ģʽ��֤�˶��̰߳�ȫ��
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

