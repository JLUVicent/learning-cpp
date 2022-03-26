#include <iostream>
using namespace std;

int* func()
{
	int* a = new int(10);
	return a;
}

void test02()
{
	//创建10个整型数据的数组，在堆区
	int * arr=new int[10];//10代表数组有10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给10个元素赋值 100~109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	//释放数组加中括号才可以
	delete[] arr;
}
int main() {

	//int* p = func();
	test02();
	//cout << *p << endl;
	//cout << *p << endl;

	//利用delete释放堆区数据
	//delete p;

	//cout << *p << endl; //报错，释放的空间不可访问

	system("pause");

	return 0;
}