#include <iostream>
using namespace std;

//�������ã�ʹ�ó����������βη�ֹ�����

//ֱ����const�����β�
//��ӡ���ݺ���
void showValue(const int& val)
{
	//val = 1000;
	cout << "val:"<<val << endl;
}

int main()
{
	//int a = 10;
	//����const�������������޸�Ϊ��ʱ��ֵ int temp=10;const int &ref=temp;
	//const int& ref = 10;//���ñ������úϷ����ڴ�ռ䣬����ֻд10
	//ref = 20;//����const֮���Ϊֻ���������޸�


	
	int a = 100;
	showValue(a);
	cout << "a:" << a << endl;
	system("pause");
	return 0;
}