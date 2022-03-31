#include <iostream>
using namespace std;

//继承中的对象模型
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};
// cl /d1 reportSingleClassLayoutSon .\继承中的对象模型.cpp  利用开发者命令行工具也可查看

void test01()
{
	//16
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有的成员属性是被编译器隐藏了，访问不到，但是确实继承下去了
	cout << "size of Son=" << sizeof(Son) << endl;//打印内存大小
}

int main()
{
	test01();



	system("pause");

	return 0;
}