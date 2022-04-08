#include <iostream>
using namespace std;


//普通函数与函数模板调用规则
//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
//2. 可以通过空模板参数列表来强制调用函数模板
//3. 函数模板也可以发生重载
//4. 如果函数模板可以产生更好的匹配, 优先调用函数模板

//如果提供了函数模板，最好不要提供普通函数，否则出现矛盾，二义性

void myPrint(int a, int b)
{
	cout << "调用的普通函数" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "调用的是模板" << endl;
}

template<typename T>
void myPrint(T a, T b,T c)
{
	cout << "调用的是重载模板" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);

	//通过空模板的参数列表 强制调用函数模板
	myPrint<>(a, b);

	myPrint<>(a, b, 20);

	// 如果函数模板可以产生更好的匹配,优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);//调用函数模板
}

int main()
{
	test01();



	system("pause");

	return 0;
}