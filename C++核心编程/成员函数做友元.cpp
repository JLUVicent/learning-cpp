#include <iostream>
using namespace std;
#include <string>

//����Ҫ��ǰ������
class Building;
//��Ա��������Ԫ
class GoodGay
{
public:
	GoodGay();
	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit2();//��visit2���������Է���˽�г�Ա
	Building* building;
};

class Building
{
	//���߱��������GoodGay�µ�visit��Ա������Ϊ����ĺ����ѿ��Է���˽�еĳ�Ա
	friend void GoodGay ::visit();
public:
	Building();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

GoodGay::GoodGay()
{
	building = new Building;
}
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}

void GoodGay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
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