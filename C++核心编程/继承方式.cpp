#include <iostream>
using namespace std;

//继承的三种方式：公共继承，保护继承，私有继承

//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
	void func()
	{
		m_A = 10;//父类中的公共权限内容到子类依然是公共权限
		m_B = 19;//父类中的保护权限成员到子类依然是保护权限
		//m_C = 10;//父类中私有成员子类访问不到
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 20;//它是保护权限内容,类外无法访问
}
//保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
	void func()
	{
		m_A = 10;//父类中公共成员到子类中变为保护权限
		m_B = 20;//父类中保护权限到子类中边诶保护权限
		//m_C = 32;//父类中私有成员子类访问不到
	}
};
void test02()
{
	Son2 s2;
	//s2.m_A = 2333;//子类中已经变为保护权限，因此访问不到在Son2中
	//s2.m_B = 2325;//子类中已经变为保护权限，因此访问不到在Son2中
}
//私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3
{
	void func()
	{
		m_A = 10;//父类中公共成员到子类中变为私有权限
		m_B = 20;//父类中保护权限到子类中变为私有权限
		//m_C = 32;//父类中私有成员子类访问不到
	}
};
void test03()
{
	Son3 s2;
	//s2.m_A = 2333;//子类中已经变为私有权限，因此访问不到在Son3中
	//s2.m_B = 2325;//子类中已经变为私有权限，因此访问不到在Son3中
}

class GrandSon3 :public Son3
{
	void func()
	{
		//m_A = 1000;//在Son3中是私有，孙子类访问不到咯
		//m_B = 2000;
	}
};

int main()
{
	test01();



	system("pause");

	return 0;
}
