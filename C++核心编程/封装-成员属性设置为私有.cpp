#include <iostream>
#include <string>
using namespace std;


//成员属性设置为私有
//1.自己可以控制读写权限
//2.对于写可以检测数据的有效性

//设计人类
class Person
{
public:
	//写姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//读姓名
	string getName()
	{
		return m_Name;
	}
	//读年龄 
	int getAge()
	{
		//m_Age = 99;
		return m_Age;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "输入年龄有误" << endl;
			return;
		}
		m_Age = age;
	}
	//写情人
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//姓名 可读可写
	string m_Name;
	//年龄 只读
	int m_Age;
	//情人 只写
	string m_Lover;
};
int main()
{
	Person p;
	//p.m_Name = "王五";
	p.setName("张三");
	cout << "成员姓名：" << p.getName() << endl;
	//cout << "成员年龄：" << p.getAge() << endl;
	p.setLover("mylover");
	p.setAge(1500);
	cout << "成员年龄：" << p.getAge() << endl;


	system("pause");

	return 0;
}