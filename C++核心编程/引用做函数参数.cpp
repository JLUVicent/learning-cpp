#include <iostream>
using namespace std;

//��������
//���ò���������Ч���Ͱ���ַ������һ���ģ������﷨������򵥡�

//1.ֵ���� //�βθı�ʵ�β���
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	//cout << "Swap01 a = " << a << endl;
	//cout << "Swap01 b = " << b << endl;
}


//2.��ַ���� �β�����ʵ��
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.���ô��� �β�����ʵ��
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//1.ֵ����
	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��
	//2.��ַ����:�βλ�����ʵ��
	//mySwap02(&a, &b);

	//3.���ô���
	mySwap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;



	system("pause");

	return 0;
}