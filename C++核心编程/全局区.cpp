#include <iostream>
using namespace std;

//ȫ�ֱ���
int ga_a = 10;
int ga_b = 10;
//ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//ȫ����
	//ȫ�ֱ�������̬����������
	
	//������ͨ�ֲ�����
	int a = 10;	//�ں������ڵı�����Ϊ�ֲ�����
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;
	cout << "ȫ�ֱ���a�ĵ�ַ" << (int)&ga_a << endl;
	cout << "ȫ�ֱ���b�ĵ�ַ" << (int)&ga_b << endl;
	//��̬����������ͨ����ǰ�����static,���ھ�̬����
	static int s_a = 10;
	static int s_b = 10;

	cout << "��̬����s_a��ַΪ�� " << (int)&s_a << endl;
	cout << "��̬����s_b��ַΪ�� " << (int)&s_b << endl;


	cout << "ȫ�ֳ���c_g_a��ַΪ�� " << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b��ַΪ�� " << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�����c_l_a��ַΪ�� " << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b��ַΪ�� " << (int)&c_l_b << endl;


	system("pause");

	return 0;
}