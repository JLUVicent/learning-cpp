#include <iostream>
using namespace std;
#include<deque>
//-`at(int idx); `     //��������idx��ָ������
//- `operator[]; `      //��������idx��ָ������
//- `front(); `            //���������е�һ������Ԫ��
//- `back(); `              //�������������һ������Ԫ��
//-�����õ�������ȡdeque������Ԫ�أ�[]��atҲ���� deque<int>::iterator it
//- front����������һ��Ԫ��
//- back�����������һ��Ԫ��
void test01()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//ͨ��[]����
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//ͨ��at����
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��" << d1.front() << endl;
	cout << "���һ��Ԫ��" << d1.back() << endl;
}
int main()
{
	test01();



	system("pause");

	return 0;
}