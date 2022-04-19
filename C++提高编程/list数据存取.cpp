#include <iostream>
using namespace std;
#include<list>
//*`front(); `        //返回第一个元素。
//* `back(); `         //返回最后一个元素。

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//cout << L1.at(0) << endl;//错误 不支持at访问数据
	//cout << L1[0] << endl; //错误  不支持[]方式访问数据
	//list本质是链表 迭代器不支持随机访问，迭代器不支持随机访问
	cout << "第一个元素为：" << L1.front() << endl;
	cout << "最后一个元素为：" << L1.back() << endl;
	
	//验证迭代器不支持随机访问
	list<int>::iterator it = L1.begin();
	it++;//支持双向
	it--;
	cout << "第二个元素为:" << *it << endl;
	//it = it + 1;//错误，不可以访问跳跃


}

int main()
{

	test01();



	system("pause");

	return 0;
}