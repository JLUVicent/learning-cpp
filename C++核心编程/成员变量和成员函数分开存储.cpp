#include <iostream>
using namespace std;


//��Ա�����ͳ�Ա�����Ƿֿ��洢
class Person
{
	int m_A;//�Ǿ�̬��Ա���� ������Ķ����������ĸ��ֽ�
	static int m_B;//��̬��Ա���� ��������Ķ�����

	void func()
	{
		//�Ǿ�̬��Ա���� ��������Ķ�����
	}
	static void func2(){}//��̬��Ա��������������Ķ�����
};

void test01()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ� 1
	//C++���������ÿ���ն������һ���ֽڿռ�Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���Ӧ����һ����һ�޶����ڴ��ַ
	//ÿ���ն���Ӧ����һ����һ�޶����ڴ��ַ
	//
	cout << "size of p=" << sizeof(p) << endl;
}

int Person::m_B = 0;

void test02()
{

}
int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}