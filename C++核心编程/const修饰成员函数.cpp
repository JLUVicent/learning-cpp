#include <iostream>
using namespace std;

//常函数 
class Person
{
public:
	//this指针的本质 指针常量 指针的指向是不可以修改的
	//const Person *const this;此使指向的值就不能更改了，也就是下面的
	//在成员函数后面加const 修饰的是this指针，其指向的值也不能修改了
	void showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL; this的指针是不可以修改指针的指向，但是可以修改指针指向的变量
	}
	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中也可以修改这个值,加mutable关键字
};

void test01()
{
	Person p;
	p.showPerson();
}
//常对象
void test02()
{
	const Person p;//在对象前加上const变为常对象
	//p.m_A = 100;
	p.m_B = 100;//特殊变量可以修改，

	//常对象只能调用常函数
	p.showPerson();
	//p.func();不能调用普通成员函数，因为普通成员函数可以修改属性
}

int main()
{

	test01();


	system("pause");

	return 0;
}