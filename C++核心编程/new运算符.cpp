#include <iostream>
using namespace std;

int* func()
{
	int* a = new int(10);
	return a;
}

void test02()
{
	//����10���������ݵ����飬�ڶ���
	int * arr=new int[10];//10����������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ 100~109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ�����������Ųſ���
	delete[] arr;
}
int main() {

	//int* p = func();
	test02();
	//cout << *p << endl;
	//cout << *p << endl;

	//����delete�ͷŶ�������
	//delete p;

	//cout << *p << endl; //�����ͷŵĿռ䲻�ɷ���

	system("pause");

	return 0;
}