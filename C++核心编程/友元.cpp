#include <iostream>
using namespace std;

//ȫ�ֺ�������Ԫ
//���������
class Building
{
	//*********************goodGayȫ�ֺ�����Building�����ѣ����Է�����˽�г�Ա
	friend void goodGay(Building& building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

//ȫ�ֺ���
void goodGay(Building &building)
{
	cout << "�û������ڷ���:" << building.m_SittingRoom << endl;
	cout << "�û������ڷ���:" << building.m_BedRoom<< endl;
}

void test01()
{
	Building building;
	goodGay(building);
}

int main()
{
	test01();



	system("pause");

	return 0;
}