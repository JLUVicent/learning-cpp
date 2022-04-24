#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
//面试题中如果出现查找相邻重复元素，记得用STL中的adjacent_find算法
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

	//找到相邻重复元素
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());

	if (it == v.end())
	{
		cout << "找不到相邻重复元素" << endl;
	}
	else
	{
		cout << "找到相邻重复元素：" << *it << endl;
	}
}

int main()
{
	test01();



	system("pause");

	return 0;
}