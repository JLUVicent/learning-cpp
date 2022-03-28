#include <iostream>
using namespace std;
#include <string>

//必须要有前置声明
class Building;
//成员函数做友元
class GoodGay
{
public:
	GoodGay();
	void visit();//让visit函数可以访问Building中私有成员
	void visit2();//让visit2函数不可以访问私有成员
	Building* building;
};

class Building
{
	//告诉编译器这个GoodGay下的visit成员函数作为本类的好朋友可以访问私有的成员
	friend void GoodGay ::visit();
public:
	Building();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

GoodGay::GoodGay()
{
	building = new Building;
}
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}

void GoodGay::visit()
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
}

//类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}


void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();



	system("pause");

	return 0;
}