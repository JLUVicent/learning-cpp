#include <iostream>
using namespace std;

//全局变量
int ga_a = 10;
int ga_b = 10;
//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//全局区
	//全局变量、静态变量、常量
	
	//创建普通局部变量
	int a = 10;	//在函数体内的变量都为局部变量
	int b = 10;

	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "局部变量b的地址：" << (int)&b << endl;
	cout << "全局变量a的地址" << (int)&ga_a << endl;
	cout << "全局变量b的地址" << (int)&ga_b << endl;
	//静态变量，在普通变量前面加上static,属于静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
	cout << "静态变量s_b地址为： " << (int)&s_b << endl;


	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;


	system("pause");

	return 0;
}