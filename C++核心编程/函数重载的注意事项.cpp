#include <iostream>
using namespace std;

//�������ص�ע������
//1.������Ϊ���ص�����
void func(int &a)//int &a=10;���Ϸ�
{
	cout << "func(int &a)�ĵ���" << endl;
}


void func(const int& a)//const int &a=10;
{
	cout << "func(const int &a)�ĵ���" << endl;
}

//2.������������Ĭ�ϲ���
void func2(int a,int b=10)
{
	cout << "func2(int a)�ĵ���" << endl;

}

void func2(int a,int b)
{
	cout << "func2(int a)�ĵ���" << endl;

}

int main()
{
	////��������
	//int a = 10;
	//func(a);
	//func(10);
	//func2(10);//���������س���Ĭ�ϲ������������壬���������������


	system("pause");

	return 0;
}