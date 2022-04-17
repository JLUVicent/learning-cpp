#include <iostream>
using namespace std;
#include<deque>

//deque容器插入和删除
// **函数原型：**
//
//两端插入操作：
//- `push_back(elem); `          //在容器尾部添加一个数据
//- `push_front(elem); `        //在容器头部插入一个数据
//- `pop_back(); `                   //删除容器最后一个数据
//- `pop_front(); `                 //删除容器第一个数据
//指定位置操作：
//* `insert(pos, elem); `         //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//* `insert(pos, n, elem); `     //在pos位置插入n个elem数据，无返回值。
//* `insert(pos, beg, end); `    //在pos位置插入[beg,end)区间的数据，无返回值。
//* `clear(); `                           //清空容器的所有数据
//* `erase(beg, end); `             //删除[beg,end)区间的数据，返回下一个数据的位置。
//* `erase(pos); `                    //删除pos位置的数据，返回下一个数据的位置。
//* 插入和删除提供的位置是迭代器！
//* 尾插-- - push_back
//* 尾删-- - pop_back
//* 头插-- - push_front
//* 头删-- - pop_front
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);

	//尾删
	d1.pop_back();
	printDeque(d1);

	//头删
	d1.pop_front();
	printDeque(d1);
}

void test02()
{
	deque<int>d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//insert插入
	d1.insert(d1.begin(), 1000);
	printDeque(d1);

	d1.insert(d1.begin(), 2,100000);
	printDeque(d1);

	//按照区间进行插入
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
}
void test03()
{
	deque<int>d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);

	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//按照区间方式删除
	d1.clear();
	//d1.erase(d1.begin(), d1.end());
	printDeque(d1);


}

int main()
{
	test01();
	test02();
	test03();


	system("pause");

	return 0;
}