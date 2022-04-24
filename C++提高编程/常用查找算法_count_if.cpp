#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>

//��ֵͳ����count��������ͳ����count_if
//`count_if(iterator beg, iterator end, _Pred);  `
//// ������ͳ��Ԫ�س��ִ���
//// beg ��ʼ������
//// end ����������
//// _Pred ν��

//������������
class Greater4
{
public:
	bool operator()(int val)
	{
		return val >= 4;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), Greater4());
	cout << "����4��������" << num <<"��" << endl;

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

	string m_Name;
	int m_Age;
};

class AgeLess35
{
public:
	bool operator()(const Person & p)
	{
		return p.m_Age < 35;
	}
};

void test02()
{
	vector<Person>v;
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

	int num = count_if(v.begin(), v.end(), AgeLess35());
	cout << "С��35��ĸ�����" << num << endl;
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}