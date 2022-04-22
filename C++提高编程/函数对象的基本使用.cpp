#include <iostream>
using namespace std;

//函数对象（仿函数）
//*函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//* 函数对象超出普通函数的概念，函数对象可以有自己的状态
//* 函数对象可以作为参数传递

//1.函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//2、函数对象可以有自己的状态
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;//内部自己的状态
};

//3、函数对象可以作为参数传递
void doPrint(MyPrint& map, string test)
{
	map(test);
}

void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

void test02()
{
	MyPrint myPrint;
	myPrint("hhhhh");
	myPrint("hhhhh");
	myPrint("hhhhh");

	cout << "myPrint调用次数为： " << myPrint.count << endl;
}

void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello C++");
}

int main()
{

	test01();
	test02();
	test03();

	system("pause");

	return 0;
}