#include <iostream>
using namespace std;
#include <set>
//-`find(key); `                  //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//- `count(key); `                //ͳ��key��Ԫ�ظ���
//* ����-- - find    �����ص��ǵ�������
//* ͳ��-- - count  ������set�����Ϊ0����1��
void test01()
{
	set<int>s1;

	//����
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);

	//����
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��" <<*pos<< endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//ͳ��
	int num = s1.count(30);//����set����ͳ�ƵĽ����0/1
	cout << "num=" << num << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}