#include <iostream>
using namespace std;

//引用做函数的返回值
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;
	return a;
}

//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10; //静态变量存放在全局区，全局区上的数据在程序结束后系统释放
	return a;
}

int main()
{
	int& ref = test02();

	cout << "ref = " << ref << endl; //由于a的内存已经释放，有时候第二次才生效

	test02() = 1000;//如果函数的返回值是引用，这个函数可以作为左值。
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}