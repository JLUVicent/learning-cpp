#include <iostream>
using namespace std;

//交换函数
//引用参数产生的效果和按地址传递是一样的，引用语法更清楚简单。

//1.值传递 //形参改变实参不变
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	//cout << "Swap01 a = " << a << endl;
	//cout << "Swap01 b = " << b << endl;
}


//2.地址传递 形参修饰实参
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递 形参修饰实参
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//1.值传递
	//mySwap01(a, b);//值传递，形参不会修饰实参
	//2.地址传递:形参会修饰实参
	//mySwap02(&a, &b);

	//3.引用传递
	mySwap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;



	system("pause");

	return 0;
}