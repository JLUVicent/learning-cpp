#include <iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base�µľ�̬��Ա����" << endl;
	}
};
//��̬��Ա������Ҫ��ʼ��
int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son�µľ�̬��Ա����" << endl;
	}
};
//��ʼ����Ҫ��������
int Son::m_A = 200;

//ͬ����̬��Ա����
void test01()
{
	//ͨ����������������
	Son s;
	cout << s.m_A << endl;//Son�µ�m_A
	cout << s.Base::m_A << endl;//Base�µ�m_A
	//ͨ��������������Base����Ҫ��������
	cout << "ͨ���������ʣ�" << endl;
	//��һ��::����ͨ��������ʽ���ʣ��ڶ���::������ʸ������������
	cout << "Son�µ�m_A" << Son::m_A << endl;
	cout << "Base�µ�m_A" << Son::Base::m_A << endl;
}

//ͬ����̬��Ա���� ���Ǽ�������Base::
void test02()
{
	//ͨ���������
	Son s;
	s.func();
	s.Base::func();
	//ͨ��������ʽ����
	Son::func();
	Son::Base::func();

}
int main()
{
	test01();
	test02();



	system("pause");

	return 0;
}