#include <iostream>
using namespace std;

//字符串比较操作
//字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大

void test01()
{
	string str1 = "sello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1==str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1>str2" << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1<str2" << endl;
	}

}

int main()
{
	test01();



	system("pause");

	return 0;
}