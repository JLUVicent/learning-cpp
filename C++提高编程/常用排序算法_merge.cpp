#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
//merge�ϲ������������������������
//��������Ԫ�غϲ������洢����һ������
//`merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `
//// ����Ԫ�غϲ������洢����һ������
//// ע��: ��������������**�����**
//// beg1   ����1��ʼ������
//// end1   ����1����������
//// beg2   ����2��ʼ������
//// end2   ����2����������
//// dest    Ŀ��������ʼ������

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	//Ŀ������
	vector<int> vtarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	vtarget.resize(v1.size() + v2.size());
	//�ϲ�  ��Ҫ������������
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), vtarget.end(), myPrint);
	cout << endl;
}


int main()
{
	test01();



	system("pause");

	return 0;
}