#include <iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <algorithm>

//`fill(iterator beg, iterator end, value);  `
// 向容器中填充元素
// beg 开始迭代器
// end 结束迭代器
// value 填充的值
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
	//填充
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