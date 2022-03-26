#include <iostream>
using namespace std;

//函数的默认参数

//如果自己传入数据就用默认值，要是没有就用默认值，和python差不多
//返回值类型  函数名 （参数= 默认值）{}
int func(int a, int b = 20,int c = 30)
{
	return a + b + c;
}
//注意事项：
//1.如果某个位置已经有了默认参数，如果从这个位置往后，必须有默认值
//int func2(int a, int b = 20, int c)
//{
//	return a + b + c;
//}

//如果函数的声明有了默认参数，函数实现就不能有默认参数
// 声明和实现只能有一个有默认参数，不然就报错
//int func2(int a = 10, int b = 20);
//int func2(int a=10, int b=10)
//{
//	return a + b;
//}
int main()
{
	int sum = 0;
	sum = func(10,30);
	cout << sum << endl;



	system("pause");

	return 0;
}