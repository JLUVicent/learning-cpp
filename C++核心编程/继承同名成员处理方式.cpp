#include <iostream>
using namespace std;

//�̳���ͬ����Ա����ʽ

class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	int m_A;
	void func()
	{
		cout << "Base�µ�func()�ĵ���" << endl;
	}
	void func(int a)
	{
		cout << "Base�µ�func(int a)�ĵ���" << endl;
	}

};

class Son :public Base
{
public:
	Son()
	{
		m_A = 300;
	}
	void func()
	{
		cout << "Son�µ�func()�ĵ���" << endl;
	}
	int m_A;
};

//ͬ����Ա���Դ���ʽ
void test01()
{
	Son s1;
	cout << s1.m_A << endl;//��������еĳ�Ա
	//��Ҫ��������
	cout << s1.Base::m_A << endl;//���������ͬ����Ա
}
//ͬ����Ա��������ʽ
void test02()
{
	Son s;
	s.func();//ֱ�ӵ��������еĳ�Ա����
	s.Base::func();//���ø����е�ͬ����Ա����
	//��������г�����ͬ����Ա���������ֱ�����ظ�����ͬ����Ա����
	//����������Ҫ��������
	s.Base::func(100);
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}