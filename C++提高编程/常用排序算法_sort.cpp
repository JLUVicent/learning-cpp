#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
//sort属于开发中最常用的算法之一，需熟练掌握
//`sort(iterator beg, iterator end, _Pred);  `
//// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
////  beg    开始迭代器
/// end    结束迭代器
//// _Pred  谓词
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//默认从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//从小到大排序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}