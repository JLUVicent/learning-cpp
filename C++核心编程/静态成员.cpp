#include <iostream>
using namespace std;

//��̬��Ա����
//���еĶ��󶼹���ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{

public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա�������޷����ֵ������ĸ����������
		cout << "static void func�ĵ���" << endl;

	}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

	//��̬��Ա�����з���Ȩ��
private:
	static void func2()
	{
		cout << "func2�ĵ���" << endl;
	}
};

int Person::m_A = 0;
//�����ַ��ʷ�ʽ

void test01()
{
	//1.ͨ���������
	Person p;
	p.func();
	//2.ͨ����������
	Person::func();
	//Person::func2(); ������ʲ���˽�еľ�̬��Ա����
}
int main()
{

	test01();


	system("pause");

	return 0;
}