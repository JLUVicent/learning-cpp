#include <iostream>
using namespace std;

//�ַ����Ƚϲ���
//�ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�

void test01()
{
	string str1 = "sello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1==str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1>str2" << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1<str2" << endl;
	}

}

int main()
{
	test01();



	system("pause");

	return 0;
}