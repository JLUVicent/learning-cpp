#include <iostream>
using namespace std;

//�̳е����ַ�ʽ�������̳У������̳У�˽�м̳�

//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�����ݵ�������Ȼ�ǹ���Ȩ��
		m_B = 19;//�����еı���Ȩ�޳�Ա��������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//������˽�г�Ա������ʲ���
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 20;//���Ǳ���Ȩ������,�����޷�����
}
//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
	void func()
	{
		m_A = 10;//�����й�����Ա�������б�Ϊ����Ȩ��
		m_B = 20;//�����б���Ȩ�޵������б�������Ȩ��
		//m_C = 32;//������˽�г�Ա������ʲ���
	}
};
void test02()
{
	Son2 s2;
	//s2.m_A = 2333;//�������Ѿ���Ϊ����Ȩ�ޣ���˷��ʲ�����Son2��
	//s2.m_B = 2325;//�������Ѿ���Ϊ����Ȩ�ޣ���˷��ʲ�����Son2��
}
//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3
{
	void func()
	{
		m_A = 10;//�����й�����Ա�������б�Ϊ˽��Ȩ��
		m_B = 20;//�����б���Ȩ�޵������б�Ϊ˽��Ȩ��
		//m_C = 32;//������˽�г�Ա������ʲ���
	}
};
void test03()
{
	Son3 s2;
	//s2.m_A = 2333;//�������Ѿ���Ϊ˽��Ȩ�ޣ���˷��ʲ�����Son3��
	//s2.m_B = 2325;//�������Ѿ���Ϊ˽��Ȩ�ޣ���˷��ʲ�����Son3��
}

class GrandSon3 :public Son3
{
	void func()
	{
		//m_A = 1000;//��Son3����˽�У���������ʲ�����
		//m_B = 2000;
	}
};

int main()
{
	test01();



	system("pause");

	return 0;
}
