#include <iostream>
using namespace std;

//第一种解决方式 包含cpp源文件
#include "person.cpp"

//解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
#include "person.hpp"

//类模板分文件编写问题以及解决

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Age = age;
//	this->m_Name = name;
//}
//
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << this->m_Age << this->m_Name << endl;
//}

void test01()
{
	Person<string, int>p("whc", 29);
	p.showPerson();
}

int main()
{
	test01();



	system("pause");

	return 0;
}