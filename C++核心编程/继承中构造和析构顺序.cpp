#include <iostream>
using namespace std;

//继承中的构造和析构顺序

class Base
{
public:
	Base()
	{
		cout << "父类的构造函数" << endl;
	}
	~Base()
	{
		cout << "父类的析构函数" << endl;
	}

};

class Son :public Base
{
public:
	Son()
	{
		cout << "子类的构造函数" << endl;
	}
	~Son()
	{
		cout << "子类的析构函数" << endl;
	}
};

void test01()
{
	//先构造父类，再构造子类，析构相反
	Son s1;
}

int main()
{
	test01();




	system("pause");

	return 0;
}