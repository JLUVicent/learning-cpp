#include <iostream>
using namespace std;

//������ 
class Person
{
public:
	//thisָ��ı��� ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//const Person *const this;��ʹָ���ֵ�Ͳ��ܸ����ˣ�Ҳ���������
	//�ڳ�Ա���������const ���ε���thisָ�룬��ָ���ֵҲ�����޸���
	void showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL; this��ָ���ǲ������޸�ָ���ָ�򣬵��ǿ����޸�ָ��ָ��ı���
	}
	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ�������Ҳ�����޸����ֵ,��mutable�ؼ���
};

void test01()
{
	Person p;
	p.showPerson();
}
//������
void test02()
{
	const Person p;//�ڶ���ǰ����const��Ϊ������
	//p.m_A = 100;
	p.m_B = 100;//������������޸ģ�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();���ܵ�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}

int main()
{

	test01();


	system("pause");

	return 0;
}