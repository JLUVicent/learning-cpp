#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
//vector�������������������


void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//����һ��vector����������
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//v.push_back(50);

	////ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();//��ʼ������  ָ�������еĵ�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��λ��

	////��һ�ֱ�����ʽ 
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;//����������ָ��ʹ�ã���*��������
	//	itBegin++;
	//}

	////�ڶ��ֱ�����ʽ
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//�����ֱ�����ʽ������STL�ṩ�����㷨
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{

	test01();


	system("pause");

	return 0;
}