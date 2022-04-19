#include <iostream>
using namespace std;
#include<list>

//list容器 自定义数据类型排序
class Person
{
public:
	Person(string name, int age, int hight)
	{
		this->m_Age = age;
		this->m_Height = hight;
		this->m_Name = name;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};
//指定排序规则
bool ComparePerson(Person& p1, Person& p2)
{
	//身高降序
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		//身高升序
		return p1.m_Age < p2.m_Age;

	}
}

void test01()
{
	list<Person>L; //创建容器

	//准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age
			<< " 身高：" << (*it).m_Height << endl;
	}

	cout << "-------------------------------------" << endl;
	cout << "排序后：" << endl;
	L.sort(ComparePerson);//排序

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age
			<< " 身高：" << (*it).m_Height << endl;
	}

}

int main()
{

	test01();


	system("pause");

	return 0;
}