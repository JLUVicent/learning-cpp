#include <iostream>
using namespace std;
//�ܽ᣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������

//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������
class Person
{
public:
	Person()
	{
		cout << "person��Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	Person(int age,int height)
	{
		new int(height);
		m_Height = new int(height);
		m_Age = age;
		cout << "Person���вι��캯���ĵ���" << endl;
	}
	//�Լ�ʵ�ֿ������캯�����ǳ��������������
	Person(const Person& p) {
		cout << "�������캯��!" << endl;
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
		m_Age = p.m_Age;
		//m_Height=p.m_Height;������Ĭ��ǳ����
		//�������
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		//�������룺�����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person�����������ĵ���" << endl;
	}
	int m_Age; //����
	int* m_Height;
};

void test01()
{
	Person p1(18,160);
	cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��"<<*p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}