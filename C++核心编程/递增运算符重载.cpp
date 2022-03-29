#include <iostream>
using namespace std;

//���ص��������

//�Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//����++�����

	//����ǰ��++����� ����������Ϊ��һֱ��һ�����ݽ��в���
	//ǰ�õ�����������
	MyInteger& operator++()
	{
		//�Ƚ���++����
		m_Num++;
		//�ٽ�����������
		return *this;
	}
	//���غ��������
	//���int����ռλ������������������ǰ�úͺ��õ���
	//���õ�������ֵ
	MyInteger operator++(int)
	{
		//�ȼ�¼��ʱ���
		MyInteger temp = *this;
		//���������
		m_Num++;
		//����¼�������
		return temp;
	}
private:
	int m_Num;
};

//�������������
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	test01();
	test02();



	system("pause");

	return 0;
}