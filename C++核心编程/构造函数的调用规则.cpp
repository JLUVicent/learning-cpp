#include <iostream>
using namespace std;

//构造函数的调用规则
//1.只要创建一个类，C++会给每个类添加至少三个函数
//默认构造（空实现）
//析构函数（空实现）
//拷贝构造（值拷贝）

//2.如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//个人理解：感觉是有一个优先级，如果给了最初的默认构造，其他的都可以没有，如果给了最后的拷贝构造
//其他都必须有
class Person
{
public:
	//Person()
	//{
	//	cout << "Person的默认构造函数的调用" << endl;
	//}
	Person(int age)
	{
		m_Age = age;
		cout << "Person的有参构造函数的调用" << endl;
	}
	//Person(const Person& p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "Person的拷贝构造函数的调用" << endl;
	//}
	~Person()
	{
		cout << "Person的析构函数的调用" << endl;
	}
	int m_Age;
};

//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_Age<<endl;
//}

void test02()
{
	Person p(18);
	Person p2(p);
	cout << "p2的年龄为：" << p2.m_Age << endl;
}
int main()
{

	//test01();
	test02();

	system("pause");

	return 0;
}