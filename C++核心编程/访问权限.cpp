#include <iostream>
using namespace std;

//访问权限
//三种
//1.公共权限 public			成员在类内可以访问，类外也可以访问
//2.保护权限 protected		成员在类内可以访问，类外不可以访问 之后会讲到有继承的关系 儿子可以访问父亲中的保护内容
//3.私有权限 private		成员在类内可以访问，类外不可以访问 儿子不可以访问父亲中的保护内容

class Person
{
public:
	//公共权限
	string m_Name;//姓名
protected:
	//保护权限
	string m_Car;//汽车
private:
	//私有权限
	int m_Password;//银行卡密码
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}

};
int main()
{
	//实例化具体的对象
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";//保护权限的内容，在类外访问不到
	//p1.m_Password = 123; //私有权限内容，在类外访问不到




	system("pause");

	return 0;
}