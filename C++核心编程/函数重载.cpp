#include <iostream>
using namespace std;

//������������ͬ����߸�����


//��������
//�����ú�������ͬ����ߺ���������



//��������
//1.ͬһ����������
//2.����������ͬ
//3.�����Ĳ������Ͳ�ͬ���߸�����ͬ����˳��ͬ
void func()
{
	cout << "func�ĵ���" << endl;

}
void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;

}
void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;

}
void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;

}
void func(double a, int b)
{
	cout << "func(double a, int b)�ĵ���" << endl;

}
//��������ֵ������Ϊ�������ص�����
//int func(int a, double b)
//{
//	cout << "func(int a,double b)�ĵ���" << endl;
//
//}
int main()
{
	func();
	func(10);
	func(3.14);
	func(3.14, 3);



	system("pause");

	return 0;
}