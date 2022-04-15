#include <iostream>
using namespace std;

//string字符存取
//string字符串中单个字符存取有两种方式，利用 [ ] 或 at
void test01()
{
	string str = "hello";

	cout << "str=" << str << endl;

	//1.通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << endl;
	}

	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << endl;
	}

	//修改单个字符
	str[0] = 'x';
	cout << "str=" << str << endl;

	str.at(1) = 'x';
	cout << "str=" << str << endl;
}


int main()
{
	test01();



	system("pause");

	return 0;
}