#include <iostream>
using namespace std;
#include<set>
//set���������Զ�����������
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
		//�������� ����
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	//�Զ����������Ͷ���ָ���������
	set<Person,comparePerson>s;

	//����person����
	Person p1("����", 22);
	Person p2("����", 36);
	Person p3("����", 44);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);

	for (set<Person,comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������"<<(*it).m_Name <<"���䣺"<<(*it).m_Age << " ";
	}
	cout << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}