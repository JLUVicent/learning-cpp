#include <iostream>
using namespace std;

//常量引用，使用场景：修饰形参防止误操作

//直接用const修饰形参
//打印数据函数
void showValue(const int& val)
{
	//val = 1000;
	cout << "val:"<<val << endl;
}

int main()
{
	//int a = 10;
	//加上const编译器将代码修改为临时的值 int temp=10;const int &ref=temp;
	//const int& ref = 10;//引用必须引用合法的内存空间，不能只写10
	//ref = 20;//加入const之后变为只读，不能修改


	
	int a = 100;
	showValue(a);
	cout << "a:" << a << endl;
	system("pause");
	return 0;
}