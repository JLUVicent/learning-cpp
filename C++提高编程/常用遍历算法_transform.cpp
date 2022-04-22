#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
//`transform(iterator beg1, iterator end1, iterator beg2, _func); `
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象

class TransForm
{
public:
	int operator()(int val)
	{
		return val+100;
	}
};

class MyPrint
{
public:
	void operator()(int val)
{
	cout << val << " ";
}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget; //目标容器
	vTarget.resize(v.size()); // 目标容器需要提前开辟空间
	transform(v.begin(), v.end(), vTarget.begin(), TransForm());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}

int main()
{

	test01();


	system("pause");

	return 0;
}