#include <iostream>
using namespace std;

//函数模板

//两个整形交换
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>//声明一个模板告诉编译器后面紧跟着的T不要报错，T是通用数据类型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}



void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	
	
	
	//利用函数模板叫喊
	//两种方式使用模板
	//1.自动类型推导
	mySwap(a, b);
	//2.显示指定类型
	mySwap<int>(a, b);


	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}