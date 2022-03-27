#include <iostream>
using namespace std;
#include <string>

//类对象作为类成员
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone的构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}

	//手机品牌名称
	string m_PName;
};

class Person
{
public:
	Person(string name, string pName): m_Name(name),m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};

//当类中成员是其他类对象时，我们称该成员为 对象成员
//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//析构顺序与构造相反
void test01()
{
	Person p("张三", "华为");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main()
{

	test01();


	system("pause");

	return 0;
}





//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_PhoneName = name;
//		cout << "Phone构造" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone析构" << endl;
//	}
//
//	string m_PhoneName;
//
//};
//
//
//class Person
//{
//public:
//
//	//初始化列表可以告诉编译器调用哪一个构造函数
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person构造" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构" << endl;
//	}
//
//	void playGame()
//	{
//		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//
//};
//void test01()
//{
//	//当类中成员是其他类对象时，我们称该成员为 对象成员
//	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//	//析构顺序与构造相反
//	Person p("张三", "苹果X");
//	p.playGame();
//
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}