#include <iostream>
using namespace std;

//����ģ��

//�������ν���
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//�������������ͺ���
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>//����һ��ģ����߱�������������ŵ�T��Ҫ����T��ͨ����������
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}



void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	
	
	
	//���ú���ģ��к�
	//���ַ�ʽʹ��ģ��
	//1.�Զ������Ƶ�
	mySwap(a, b);
	//2.��ʾָ������
	mySwap<int>(a, b);


	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}