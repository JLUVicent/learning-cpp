#include <iostream>
using namespace std;
#include <string>
//注意类外写函数的方式
class Building;

//类做友元

class GoodGay
{
public:
	GoodGay();
	void visit();//参观函数访问Building中的属性
	Building* building;
};

class Building
{
	//GoodGay是本类的好朋友，可以访问本类中的私有成员
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//客厅
};
GoodGay::GoodGay()
{
	//创建建筑物的对象
	building = new Building;
}
void GoodGay::visit()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}
//类外写成员函数
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