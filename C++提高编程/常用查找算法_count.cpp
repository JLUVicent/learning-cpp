#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
//ͳ���Զ�����������ʱ����Ҫ������� `operator==`
//`count(iterator beg, iterator end, value);  `
//// ͳ��Ԫ�س��ִ���
//// beg ��ʼ������
//// end ����������
//// value ͳ�Ƶ�Ԫ��

//������������
void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);
	v.push_back(4);
	v.push_back(6);
	v.push_back(4);

	int num = count(v.begin(), v.end(), 4);
	cout << "4�ĸ���Ϊ��" << num << endl;
}

//�Զ�����������
class Person
{
public:
	Person(string name, int age)
{
	this->m_Age = age;
	this->m_Name = name;
}
	bool operator==(const Person& p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	  int m_Age;
	  string m_Name;
};

void test02()
{
	vector<Person> v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("�����", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "�������ͬ���������У�" << num << endl;
}



int main()
{

	test01();
	test02();

	system("pause");

	return 0;
}