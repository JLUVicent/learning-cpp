#include <iostream>
using namespace std;

//普通函数与函数模板的区别

//1.普通函数调用可以发生隐式类型转换
//2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//3.如果利用显示指定类型的方式，可以发生隐式类型转换

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}



void test01()
{
	int a = 20;
	int b = 40;
	char c = 'c';//相加时候直接转成ASCII进行运算
	cout << myAdd01(a, c) << endl;
	//1.自动类型推导 无法发生隐式类型转化，报错
	//cout << myAdd02(a, c) << endl;
	//2.显示指定类型 可以发生隐士类型转换
	cout << myAdd02<int>(a, c) << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}