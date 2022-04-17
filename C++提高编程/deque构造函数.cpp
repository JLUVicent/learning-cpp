#include <iostream>
using namespace std;
#include<deque>

//deque������vector�����Ĺ��췽ʽ����һ�£����ʹ�ü���
//deque����
//* `deque<T>` deqT;                      //Ĭ�Ϲ�����ʽ
//*`deque(beg, end); `                  //���캯����[beg, end)�����е�Ԫ�ؿ���������
//* `deque(n, elem); `                    //���캯����n��elem����������
//* `deque(const deque& deq); `   //�������캯��

//�޶������еĵ�����Ϊֻ��״̬����const
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; //�����е����ݼ���const�󲻿����޸���
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

	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);

	deque<int>d4 = d3;
	printDeque(d4);


}
int main()
{
	test01();



	system("pause");

	return 0;
}