#include <iostream>
using namespace std;
#include<deque>
//*`deque& operator=(const deque& deq); `         //���صȺŲ�����
//* `assign(beg, end); `                                           //��[beg, end)�����е����ݿ�����ֵ������
//* `assign(n, elem); `                                             //��n��elem������ֵ������
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
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2;
	d2 = d1;
	printDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 1000);
	printDeque(d4);
}

int main()
{

	test01();


	system("pause");

	return 0;
}