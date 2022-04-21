#include <iostream>
using namespace std;
#include<map>
//-`size(); `          //����������Ԫ�ص���Ŀ
//- `empty(); `        //�ж������Ƿ�Ϊ��
//- `swap(st); `      //����������������
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "value:" << it->second << endl;
	}
}
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		printMap(m);
		cout << "������СΪ:" << m.size() << endl;
	}

}

//����
void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "����ǰ" << endl;
	printMap(m);
	printMap(m2);

	cout << "������" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}