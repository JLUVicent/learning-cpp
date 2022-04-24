#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
//容器必须为有序序列
//- `bool binary_search(iterator beg, iterator end, value);  `
//// 查找指定的元素，查到 返回true  否则false
/// 注意: 在**无序序列中不可用**
//// beg 开始迭代器
//// end 结束迭代器
//// value 查找的元素
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//二分查找
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret)
	{
		cout << "找到了" << endl;

	}
	else
	{
		cout << "未找到！" << endl;
	}
}



int main()
{
	test01();



	system("pause");

	return 0;
}