#include <iostream>
using namespace std;
#include <string>
//ע������д�����ķ�ʽ
class Building;

//������Ԫ

class GoodGay
{
public:
	GoodGay();
	void visit();//�ιۺ�������Building�е�����
	Building* building;
};

class Building
{
	//GoodGay�Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
GoodGay::GoodGay()
{
	//����������Ķ���
	building = new Building;
}
void GoodGay::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}
//����д��Ա����
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