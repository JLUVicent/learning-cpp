#include <iostream>
using namespace std;

//占位参数,第二个int就是占位
//返回值类型 函数名 （数据类型）{ }


//目前阶段的占位参数用不到，后面用
//占位参数可以有默认参数
void func(int a,int = 10)
{
	cout << "this is func" << endl;
}

int main()
{
	func(10);



	system("pause");

	return 0;
}