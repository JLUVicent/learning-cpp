#include <iostream>
using namespace std;
#include<functional>//内建函数对象头文件
//使用内建函数对象时，需要引入头文件 `#include <functional>`
//*`template<class T > T plus<T>`                //加法仿函数
//* `template<class T > T minus<T>`              //减法仿函数
//* `template<class T > T multiplies<T>`    //乘法仿函数
//* `template<class T > T divides<T>`         //除法仿函数
//* `template<class T > T modulus<T>`         //取模仿函数
//* `template<class T > T negate<T>`           //取反仿函数

//negate 一元取反仿函数
void test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

//plus  二元加法仿函数
void test02()
{
	plus<int>p;
	cout << p(10, 20) << endl;
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}