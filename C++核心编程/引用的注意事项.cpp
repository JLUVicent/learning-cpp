#include <iostream>
using namespace std;

int main()
{
	//1.���ñ����ʼ��
	//2.����һ����ʼ����Ͳ��ܸ���
	int a = 10;
	//int& b; �������
	int& b = a;
	int c = 20;
	b = c;//��ֵ�����������Ǹ�������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");
	return 0;
}