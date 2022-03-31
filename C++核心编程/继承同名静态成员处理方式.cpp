#include <iostream>
using namespace std;

//继承中的同名静态成员处理
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base下的静态成员函数" << endl;
	}
};
//静态成员类外需要初始化
int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son下的静态成员函数" << endl;
	}
};
//初始化需要在类下面
int Son::m_A = 200;

//同名静态成员属性
void test01()
{
	//通过对象来访问数据
	Son s;
	cout << s.m_A << endl;//Son下的m_A
	cout << s.Base::m_A << endl;//Base下的m_A
	//通过类名访问数据Base下需要加作用域
	cout << "通过类名访问：" << endl;
	//第一个::代表通过类名方式访问，第二个::代表访问父类的作用域下
	cout << "Son下的m_A" << Son::m_A << endl;
	cout << "Base下的m_A" << Son::Base::m_A << endl;
}

//同名静态成员函数 还是加作用域Base::
void test02()
{
	//通过对象访问
	Son s;
	s.func();
	s.Base::func();
	//通过类名方式访问
	Son::func();
	Son::Base::func();

}
int main()
{
	test01();
	test02();



	system("pause");

	return 0;
}