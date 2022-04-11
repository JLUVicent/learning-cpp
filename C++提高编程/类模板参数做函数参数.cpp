#include <iostream>
using namespace std;

//类模板对象做函数参数
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	void showPerson()
	{
		cout << this->m_Name << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};


//1. 指定传入的类型-- - 直接显示对象的数据类型
void printPerson1(Person<string,int>&p)
{
	p.showPerson();

}
void test01()
{
	Person<string, int>p("hhh", 33);
	printPerson1(p);
}


//2. 参数模板化-- - 将对象中的参数变为模板进行传递
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	//cout << typeid(T1).name() << endl;
	//cout << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int>p("lll", 90);
	printPerson2(p);
}


//3. 整个类模板化-- - 将这个对象类型 模板化进行传递
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
}
void test03()
{
	Person<string, int>p("9999999", 25);
	printPerson3(p);
}
int main()
{

	//test01();
	//test02();
	test03();


	system("pause");

	return 0;
}