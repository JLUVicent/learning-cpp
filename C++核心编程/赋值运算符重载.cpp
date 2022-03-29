#include <iostream>
using namespace std;

//��ֵ���������
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);//��������
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//���ظ�ֵ�����
	Person& operator=(Person &p)
	{
		//���������ṩǳ����
		//m_Age=p.m_Age;

		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ�
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//���
		m_Age = new int(*p.m_Age);
		return *this;
	}

	int* m_Age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;

	p2 = p1;//��ֵ����

	cout << "p1������Ϊ��" << *p1.m_Age << endl;
	cout << "p2������Ϊ��" << *p2.m_Age << endl;
}

int main()
{
	test01();
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//c = b = a;
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	//cout << "c=" << c << endl;


	system("pause");

	return 0;
}