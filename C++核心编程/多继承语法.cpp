#include <iostream>
using namespace std;

//��̳��﷨

class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_B = 200;
	}
	int m_B;
};
//������Ҫ�̳�Base1��Base2
//�﷨��class ����:�̳з�ʽ ����1,�̳з�ʽ ����2...
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test01()
{
	Son s;
	cout << "sizeof Son" << sizeof(Son) << endl;
	//�������г���ͬ����Ա����Ҫ��������Base1::
	//������ʹ�ö�̳�
	cout << s.m_A << endl;
}

int main()
{

	test01();


	system("pause");

	return 0;
}