#include <iostream>
using namespace std;


//成员变量和成员函数是分开存储
class Person
{
	int m_A;//非静态成员变量 属于类的对象上数据四个字节
	static int m_B;//静态成员变量 不属于类的对象上

	void func()
	{
		//非静态成员函数 不属于类的对象上
	}
	static void func2(){}//静态成员函数，不属于类的对象上
};

void test01()
{
	Person p;
	//空对象占用的内存空间 1
	//C++编译器会给每个空对象分配一个字节空间为了区分空对象占内存的位置
	//每个空对象应该有一个独一无二的内存地址
	//每个空对象应该有一个独一无二的内存地址
	//
	cout << "size of p=" << sizeof(p) << endl;
}

int Person::m_B = 0;

void test02()
{

}
int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}