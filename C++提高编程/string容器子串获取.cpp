#include <iostream>
using namespace std;


//string���Ӵ�
void test01()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}

//ʵ�ò���

void test02()
{
	string email = "he@qq.com";
	//���ʼ���ַ�л�ȡ�û�������Ϣ
	int pos = email.find("@");//����4 �����±�
	cout << pos << endl;

	string usrName = email.substr(0, pos);
	cout << usrName << endl;
}

int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}