#include <iostream>
#include <string>
using namespace std;

//学生类
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
public:
	//类中的属性和行为统一称为成员
	//属性 成员属性和成员变量
	//行为：成员函数或者成员方法

	//属性
	string m_Name;//姓名
	int m_Id;//学号

	//行为
	//显示姓名和学号
	void showStudent()
	{
		cout << "姓名：" << m_Name << "学号" << m_Id << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		m_Name = name;
	}
	void setNumber(int id)
	{
		m_Id = id;
	}
};

int main()
{
	//创建一个具体的学生
	//实例化对象
	Student s1;
	//给s1对象进行赋值操作
	//s1.m_Name = "王五";
	s1.setName("王虎成");
	//s1.m_Id = 1;
	s1.setNumber(3);
	s1.showStudent();




	system("pause");

	return 0;
}