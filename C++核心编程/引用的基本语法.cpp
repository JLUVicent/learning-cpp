#include <iostream>
using namespace std;

int main()
{
	//���õĻ����﷨
	//�������� &���� = ԭ��

	int a = 10;
	//����Ӧ��
	int& b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 30;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");

	return 0;
}