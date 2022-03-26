#include <iostream>
using namespace std;


//1构造函数的分类及调用
//分类
//按照参数分类 无参构造(默认构造)和有参构造
//按照类型分类 普通构造 拷贝构造
class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		//将传入的人身上的所有属性拷贝到我身上
		age = p.age;
	}
	int age;
	~Person()
	{
		cout << "Person的析构函数调用" << endl;

	}
};

//调用
void test01()
{
	//1.括号法
	//Person p1;//默认构造函数的调用
	//Person p2(10);//有参构造函数

	////拷贝构造函数调用
	//Person p3(p2);
	//cout << "P2的年龄" << p2.age << endl;
	//cout << "P3的年龄" << p3.age << endl;
	//注意事项
	//调用默认构造函数的时候，不要加()
	//因为下面这行代码编译器会认为是函数声明，不会认为在创建对象
	//Person p1();


	//2.显示法
	Person p1;
	Person p2 = Person(10);//有参构造
	//////拷贝构造
	Person p3 = Person(p2);
	//注意事项
	//Person(10);//匿名对象 特点：当前行执行结束后，系统会立即收回匿名对象
	//cout << "aaaa" << endl;
	//不要利用拷贝函数来初始化匿名对象 编译器会认为Person(P3)等价于去掉括号Person p3;
	//Person(p3);//编译器认为是对象声明

	//隐式转换法
	Person p4 = 10;//相当于 Person p4 = Person(10); 有参构造
	Person p5 = p4;//拷贝构造
}


int main()
{

	test01();


	system("pause");

	return 0;
}