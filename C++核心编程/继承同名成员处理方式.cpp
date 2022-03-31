#include <iostream>
using namespace std;

//继承中同名成员处理方式

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
		cout << "Base下的func()的调用" << endl;
	}
	void func(int a)
	{
		cout << "Base下的func(int a)的调用" << endl;
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
		cout << "Son下的func()的调用" << endl;
	}
	int m_A;
};

//同名成员属性处理方式
void test01()
{
	Son s1;
	cout << s1.m_A << endl;//输出子类中的成员
	//需要加作用域
	cout << s1.Base::m_A << endl;//输出父类中同名成员
}
//同名成员函数处理方式
void test02()
{
	Son s;
	s.func();//直接调用子类中的成员函数
	s.Base::func();//调用父类中的同名成员函数
	//如果子类中出现了同名成员函数，则会直接隐藏父类中同名成员函数
	//如果想访问需要加作用于
	s.Base::func(100);
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}