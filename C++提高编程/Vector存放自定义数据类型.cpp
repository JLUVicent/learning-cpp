#include <iostream>
using namespace std;
#include <vector>
#include<string>
//vertor容器中存放自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person> v;
	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("b", 40);
	Person p5("d", 50);

	//向容器中添加数据 尾插法
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_Age << (*it).m_Name << endl;
		cout << it->m_Age << it->m_Name << endl;
	}
}

//存放自定义数据类型指针
void test02()
{
	vector<Person*> v;
	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("b", 40);
	Person p5("d", 50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)->m_Age << (*it)->m_Name << endl;
	}
}

int main()
{
	//test01();
	test02();


	system("pause");

	return 0;
}