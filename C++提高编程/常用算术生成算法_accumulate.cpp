#include <iostream>
using namespace std;
#include<numeric>
#include<vector>
//���������� ����Ԫ���ۼ��ܺ�
//`accumulate(iterator beg, iterator end, value);  `
// ��������Ԫ���ۼ��ܺ�
// beg ��ʼ������
// end ����������
// value ��ʼֵ

void test01()
{
	vector<int>v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	//������������ʼ�ۼ�ֵ
	int total = accumulate(v.begin(), v.end(), 0);

	cout << "total=" << total << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}