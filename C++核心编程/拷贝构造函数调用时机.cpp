#include <iostream>
using namespace std;
//�������캯���ĵ���ʱ��

//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���


//ֵ���ݵķ�ʽ������������ֵ


//ֵ��ʽ���ؾֲ�����

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person�вι��캯������" << endl;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person�������캯������" << endl;
	}
	~Person()
	{
		cout << "PersonĬ��������������" << endl;
	}
	int m_Age;
};

//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);
}
//ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{

}

void test02()
{
	Person p;
	doWork(p);
}
//ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = doWork2();
}
int main()
{
	//test01();
	//test02();
	test03();


	system("pause");

	return 0;
}