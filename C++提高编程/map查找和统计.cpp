#include <iostream>
using namespace std;
#include<map>
//map���Һ�ͳ��
//-`find(key); `                  //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//- `count(key); `                //ͳ��key��Ԫ�ظ���

//���Һ�ͳ��
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//����
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	//map����������ظ�keyԪ�أ�countͳ�ƽ����0/1
	//multimap��coutͳ�ƿ��ܴ���1
	int num = m.count(3);
	cout << "num = " << num << endl;
}


int main()
{

	test01();


	system("pause");

	return 0;
}