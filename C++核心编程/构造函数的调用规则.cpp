#include <iostream>
using namespace std;

//���캯���ĵ��ù���
//1.ֻҪ����һ���࣬C++���ÿ�������������������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//�������죨ֵ������

//2.����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//����û����忽�����캯����c++�������ṩ�������캯��
//������⣺�о�����һ�����ȼ���������������Ĭ�Ϲ��죬�����Ķ�����û�У�����������Ŀ�������
//������������
class Person
{
public:
	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
	//}
	Person(int age)
	{
		m_Age = age;
		cout << "Person���вι��캯���ĵ���" << endl;
	}
	//Person(const Person& p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "Person�Ŀ������캯���ĵ���" << endl;
	//}
	~Person()
	{
		cout << "Person�����������ĵ���" << endl;
	}
	int m_Age;
};

//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age<<endl;
//}

void test02()
{
	Person p(18);
	Person p2(p);
	cout << "p2������Ϊ��" << p2.m_Age << endl;
}
int main()
{

	//test01();
	test02();

	system("pause");

	return 0;
}