#include <iostream>
using namespace std;
#include<set>
//set容器排序：自定义类型数据
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

class comparePerson
{
public:
	bool operator()(const Person&p1,const Person&p2) const
	{
		//按照年龄 降序
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	//自定义数据类型都会指定排序规则
	set<Person,comparePerson>s;

	//创建person对象
	Person p1("张三", 22);
	Person p2("李四", 36);
	Person p3("王五", 44);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);

	for (set<Person,comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名："<<(*it).m_Name <<"年龄："<<(*it).m_Age << " ";
	}
	cout << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}