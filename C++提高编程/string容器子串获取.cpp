#include <iostream>
using namespace std;


//string求子串
void test01()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}

//实用操作

void test02()
{
	string email = "he@qq.com";
	//从邮件地址中获取用户名的信息
	int pos = email.find("@");//返回4 返回下标
	cout << pos << endl;

	string usrName = email.substr(0, pos);
	cout << usrName << endl;
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}