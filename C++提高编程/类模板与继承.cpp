#include <iostream>
using namespace std;

//*当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//* 如果不指定，编译器无法给子类分配内存


template<class T>
class Base
{
	T m;
};

class Son : public Base<int>//必须知道父类中T类型才能继承给子类
{

};




void test01()
{
	Son s1;
}

//* 如果想灵活指定出父类中T的类型，子类也需变为类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		//查看数据类型
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;

	}
	T1 obj;
};

void test02()
{
	Son2<int, char> s2;
}


int main()
{
	test02();



	system("pause");

	return 0;
}