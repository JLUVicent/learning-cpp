#include <iostream>
using namespace std;
#include <string>

//ͨ��ȫ�ֺ�����ӡperson��Ϣ
//����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ������ʵ�ֱȽ��鷳
//��ǰ�ñ�����֪��Person�����
template<class T1, class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "����ʵ��:" << p.m_Age << p.m_Name << endl;
}



template<class T1,class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson(Person<T1,T2> p)
	{
		cout << p.m_Age << p.m_Name << endl;
	}

	//ȫ�ֺ�������ʵ��
	//��Ҫ�ӿ�ģ������б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ��������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);
	//{
	//	cout << p.m_Age << p.m_Name << endl;
	//}
public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
private:
	T1 m_Name;
	T2 m_Age;
};


//ȫ�ֺ�������ʵ��
void test01()
{
	Person<string, int>p("tom", 20);
	printPerson(p);
}

//ȫ�ֺ�������ʵ��
void test02()
{
	Person<string, int>p("jerry", 30);
	printPerson2(p);
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}