#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
//��������������ֲ��������ظ�Ԫ�أ��ǵ���STL�е�adjacent_find�㷨
void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);
	v.push_back(4);
	v.push_back(6);
	v.push_back(4);

	//�ҵ������ظ�Ԫ��
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());

	if (it == v.end())
	{
		cout << "�Ҳ��������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ�أ�" << *it << endl;
	}
}

int main()
{
	test01();



	system("pause");

	return 0;
}