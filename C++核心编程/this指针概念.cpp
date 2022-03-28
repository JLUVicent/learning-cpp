#include <iostream>
using namespace std;

//1.解决名称冲突




class Person
{
public:
	Person(int age)
	{
		//this指针指向被调用的成员函数所属的对象 解决名称冲突问题
		this->age = age;
	}
	int age;

	//用引用的方式返回
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//this指向p2的指针，*this指向对象的本体
		return *this;
	}
};

//2.返回对象本身用*this

void test02()
{
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "P2的年龄为：" << p2.age << endl;
}

void test01()
{
	Person p1(18);
	cout << "P1的年龄为：" << p1.age << endl;
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}