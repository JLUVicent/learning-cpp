#include <iostream>
using namespace std;
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�

//`sort(iterator beg, iterator end)`  //��beg��end������Ԫ�ؽ�������

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);

	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";

	}
	cout << endl;

	//���� Ĭ�ϴ�С����
	//����֧��������ʵĵ�����������vectorҲ��������sort��������
	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";

	}
	cout << endl;
}

int main()
{

	test01();


	system("pause");

	return 0;
}