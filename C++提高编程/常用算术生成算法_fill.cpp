#include <iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <algorithm>

//`fill(iterator beg, iterator end, value);  `
// �����������Ԫ��
// beg ��ʼ������
// end ����������
// value ����ֵ
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
	v.resize(10);
	//���
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}


int main()
{
	test01();



	system("pause");

	return 0;
}