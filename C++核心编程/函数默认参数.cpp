#include <iostream>
using namespace std;

//������Ĭ�ϲ���

//����Լ��������ݾ���Ĭ��ֵ��Ҫ��û�о���Ĭ��ֵ����python���
//����ֵ����  ������ ������= Ĭ��ֵ��{}
int func(int a, int b = 20,int c = 30)
{
	return a + b + c;
}
//ע�����
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������������λ�����󣬱�����Ĭ��ֵ
//int func2(int a, int b = 20, int c)
//{
//	return a + b + c;
//}

//�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
// ������ʵ��ֻ����һ����Ĭ�ϲ�������Ȼ�ͱ���
//int func2(int a = 10, int b = 20);
//int func2(int a=10, int b=10)
//{
//	return a + b;
//}
int main()
{
	int sum = 0;
	sum = func(10,30);
	cout << sum << endl;



	system("pause");

	return 0;
}