#include <iostream>
using namespace std;
#include<list>
#include<algorithm>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	//降序：第一个数大于第二个数
	return val1 > val2;
}

void test01()
{
	//反转
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//反转
	L1.reverse();
	cout << "反转后：" << endl;
	printList(L1);
}
void test02()
{
	//排序
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << "排序前：" << endl;
	printList(L1);

	//所有不支持随机访问迭代器的容器不能使用标准算法
	//内部会提供对应的算法
	cout << "排序后：" << endl;
	L1.sort();//默认从小到大
	printList(L1);

	L1.sort(myCompare);
	printList(L1);
}

int main()
{

	test01();
	test02();

	system("pause");

	return 0;
}