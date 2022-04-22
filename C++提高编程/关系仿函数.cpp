#include <iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
//关系仿函数中最常用的就是greater<>大于
//* `template<class T > bool equal_to<T>`                    //等于
//* `template<class T > bool not_equal_to<T>`            //不等于
//* `template<class T > bool greater<T>`                      //大于
//* `template<class T > bool greater_equal<T>`          //大于等于
//* `template<class T > bool less<T>`                           //小于
//* `template<class T > bool less_equal<T>`               //小于等于

class MyCompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};

//关系仿函数 greater
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//降序
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());//系统内置仿函数
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}