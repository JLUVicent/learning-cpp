#include <iostream>
using namespace std;


//��ͨ�����뺯��ģ����ù���
//1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3. ����ģ��Ҳ���Է�������
//4. �������ģ����Բ������õ�ƥ��, ���ȵ��ú���ģ��

//����ṩ�˺���ģ�壬��ò�Ҫ�ṩ��ͨ�������������ì�ܣ�������

void myPrint(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "���õ���ģ��" << endl;
}

template<typename T>
void myPrint(T a, T b,T c)
{
	cout << "���õ�������ģ��" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);

	//ͨ����ģ��Ĳ����б� ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);

	myPrint<>(a, b, 20);

	// �������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);//���ú���ģ��
}

int main()
{
	test01();



	system("pause");

	return 0;
}