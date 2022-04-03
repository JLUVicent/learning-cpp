#include <iostream>
using namespace std;
#include<string>

//虚析构和纯虚析构

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;
	//利用虚析构可以解决父类指针释放子类对象不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}
	//纯虚析构 需要声明也需要实现，有了纯虚析构之后这个类也属于抽象类无法实例化对象
	virtual ~Animal() = 0;
};
Animal:: ~Animal()
{
	cout << "Animal纯虚析构函数调用" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_Name=new string(name);
		cout << "Cat的构造函数调用" << endl;
	}
	virtual void speak()
	{
		cout <<*m_Name<< "小猫在说话" << endl;
	}
	string* m_Name;
	~Cat()
	{
		cout << "Cat的析构函数调用" << endl;
		if (m_Name != NULL)
		{
			
			delete m_Name;
			m_Name = NULL;
		}
	}
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
	delete animal;
}

int main()
{
	test01();



	system("pause");

	return 0;
}