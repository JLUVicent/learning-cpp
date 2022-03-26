#include <iostream>
using namespace std;

// struct和class的区别
// struct默认权限是公共权限publis，而class默认权限是私有private

class C1
{
	int m_A; //默认权限是私有
};

struct C2
{
	int m_A; //默认权限是公共
};

int main()
{
	//C1 c1;
	//c1.m_A = 100;//私有。类外不可访问
	C2 c2;
	c2.m_A = 100;//可以访问，公共权限，在struct默认全新啊为公共，因此可以访问



	system("pause");

	return 0;
}