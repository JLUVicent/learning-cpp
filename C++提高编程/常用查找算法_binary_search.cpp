#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
//��������Ϊ��������
//- `bool binary_search(iterator beg, iterator end, value);  `
//// ����ָ����Ԫ�أ��鵽 ����true  ����false
/// ע��: ��**���������в�����**
//// beg ��ʼ������
//// end ����������
//// value ���ҵ�Ԫ��
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//���ֲ���
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret)
	{
		cout << "�ҵ���" << endl;

	}
	else
	{
		cout << "δ�ҵ���" << endl;
	}
}



int main()
{
	test01();



	system("pause");

	return 0;
}