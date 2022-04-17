#include <iostream>
using namespace std;
#include<deque>
//-`at(int idx); `     //返回索引idx所指的数据
//- `operator[]; `      //返回索引idx所指的数据
//- `front(); `            //返回容器中第一个数据元素
//- `back(); `              //返回容器中最后一个数据元素
//-除了用迭代器获取deque容器中元素，[]和at也可以 deque<int>::iterator it
//- front返回容器第一个元素
//- back返回容器最后一个元素
void test01()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//通过[]访问
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//通过at访问
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素" << d1.front() << endl;
	cout << "最后一个元素" << d1.back() << endl;
}
int main()
{
	test01();



	system("pause");

	return 0;
}