#include <iostream>
using namespace std;

//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;
	return a;
}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10; //��̬���������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}

int main()
{
	int& ref = test02();

	cout << "ref = " << ref << endl; //����a���ڴ��Ѿ��ͷţ���ʱ��ڶ��β���Ч

	test02() = 1000;//��������ķ���ֵ�����ã��������������Ϊ��ֵ��
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}