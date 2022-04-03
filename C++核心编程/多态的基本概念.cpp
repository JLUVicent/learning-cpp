#include <iostream>
using namespace std;

//多态


//动物类
class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}

};

//猫类
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
//狗类
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话函数
//地址早绑定，在编译阶段就确定了函数的地址
//如果想执行让猫说话，函数地址不能提前绑定，需要在运行阶段晚绑定



//动态多态的满足条件：1.有继承关系；2.子类要重写父类的虚函数；
//重写：函数返回值类型，函数名，参数列表完全相同才叫重写

//动态多态的使用
//父类的指针或者引用，指向子类的对象
void doSpeak(Animal &animal)//Animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
}
void test02()
{
	cout << "sizeof Animal=" << sizeof(Animal) << endl;
}
int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}