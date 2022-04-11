#include <iostream>
using namespace std;
#include <string>

//通过全局函数打印person信息
//建议全局函数做类内实现，用法简单，而且编译器可以直接识别，类外实现比较麻烦
//提前让编译器知道Person类存在
template<class T1, class T2>
class Person;

//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "类外实现:" << p.m_Age << p.m_Name << endl;
}



template<class T1,class T2>
class Person
{
	//全局函数类内实现
	friend void printPerson(Person<T1,T2> p)
	{
		cout << p.m_Age << p.m_Name << endl;
	}

	//全局函数类外实现
	//需要加空模板参数列表
	//如果全局函数是类外实现，需要编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1, T2> p);
	//{
	//	cout << p.m_Age << p.m_Name << endl;
	//}
public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
private:
	T1 m_Name;
	T2 m_Age;
};


//全局函数类内实现
void test01()
{
	Person<string, int>p("tom", 20);
	printPerson(p);
}

//全局函数类外实现
void test02()
{
	Person<string, int>p("jerry", 30);
	printPerson2(p);
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}