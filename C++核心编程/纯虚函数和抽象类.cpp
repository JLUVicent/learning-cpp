#include <iostream>
using namespace std;

//���麯���ͳ�����
class Base
{
public:
	//���麯��
	//ֻҪ�������һ�����麯�������Ϊ������
	//�������ص㣺
	//1.�޷�ʵ��������
	//2.����������������д�����еĴ��麯��������Ҳ���ڳ�����
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func�����ĵ���" << endl;
	}
};
void test01()
{
	//Base b;//�������޷�ʵ��������
	//Base* base = new Son;
	//base->func();
	Son s;
	s.func();
}

int main()
{
	test01();



	system("pause");

	return 0;
}