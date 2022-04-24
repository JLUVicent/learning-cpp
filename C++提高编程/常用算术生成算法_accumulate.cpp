#include <iostream>
using namespace std;
#include<numeric>
#include<vector>
//计算区间内 容器元素累计总和
//`accumulate(iterator beg, iterator end, value);  `
// 计算容器元素累计总和
// beg 开始迭代器
// end 结束迭代器
// value 起始值

void test01()
{
	vector<int>v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	//参数三代表起始累加值
	int total = accumulate(v.begin(), v.end(), 0);

	cout << "total=" << total << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}