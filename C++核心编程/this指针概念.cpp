#include <iostream>
using namespace std;

//1.������Ƴ�ͻ




class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ��� ������Ƴ�ͻ����
		this->age = age;
	}
	int age;

	//�����õķ�ʽ����
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//thisָ��p2��ָ�룬*thisָ�����ı���
		return *this;
	}
};

//2.���ض�������*this

void test02()
{
	Person p1(10);
	Person p2(10);
	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "P2������Ϊ��" << p2.age << endl;
}

void test01()
{
	Person p1(18);
	cout << "P1������Ϊ��" << p1.age << endl;
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}