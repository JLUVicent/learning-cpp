#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
//��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//-`replace(iterator beg, iterator end, oldvalue, newvalue);  `
//// �������ھ�Ԫ�� �滻�� ��Ԫ��
//// beg ��ʼ������
//// end ����������
//// oldvalue ��Ԫ��
//// newvalue ��Ԫ��

//replace���滻����������������Ԫ��
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	//�������е�20�滻Ϊ2000
	cout << "�滻��" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}