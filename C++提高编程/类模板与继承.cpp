#include <iostream>
using namespace std;

//*������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//* �����ָ�����������޷�����������ڴ�


template<class T>
class Base
{
	T m;
};

class Son : public Base<int>//����֪��������T���Ͳ��ܼ̳и�����
{

};




void test01()
{
	Son s1;
}

//* ��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		//�鿴��������
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;

	}
	T1 obj;
};

void test02()
{
	Son2<int, char> s2;
}


int main()
{
	test02();



	system("pause");

	return 0;
}