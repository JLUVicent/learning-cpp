#include <iostream>
using namespace std;
#include<list>
#include<algorithm>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	//���򣺵�һ�������ڵڶ�����
	return val1 > val2;
}

void test01()
{
	//��ת
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//��ת
	L1.reverse();
	cout << "��ת��" << endl;
	printList(L1);
}
void test02()
{
	//����
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << "����ǰ��" << endl;
	printList(L1);

	//���в�֧��������ʵ���������������ʹ�ñ�׼�㷨
	//�ڲ����ṩ��Ӧ���㷨
	cout << "�����" << endl;
	L1.sort();//Ĭ�ϴ�С����
	printList(L1);

	L1.sort(myCompare);
	printList(L1);
}

int main()
{

	test01();
	test02();

	system("pause");

	return 0;
}