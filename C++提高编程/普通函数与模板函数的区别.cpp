#include <iostream>
using namespace std;

//��ͨ�����뺯��ģ�������

//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
//3.���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}



void test01()
{
	int a = 20;
	int b = 40;
	char c = 'c';//���ʱ��ֱ��ת��ASCII��������
	cout << myAdd01(a, c) << endl;
	//1.�Զ������Ƶ� �޷�������ʽ����ת��������
	//cout << myAdd02(a, c) << endl;
	//2.��ʾָ������ ���Է�����ʿ����ת��
	cout << myAdd02<int>(a, c) << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}