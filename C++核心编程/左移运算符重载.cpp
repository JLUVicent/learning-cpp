#include <iostream>
using namespace std;

//�������������

class Person
{
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
	friend ostream& operator<<(ostream& cout, Person& p);
private:
	//���ó�Ա����������������� p.operator<<p
	//�������ó�Ա�������������������
	//void operator<<(Person &p)
	//{

	//}
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream &cout,Person&p)//���� cout<<p
{
	cout << "m_A=" << p.m_A << "m_B=" << p.m_B;
	return cout;
}
void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;
	cout << p<<endl;
}
int main()
{
	test01();




	system("pause");

	return 0;
}