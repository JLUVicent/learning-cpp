#include <iostream>
using namespace std;

//�̳��еĹ��������˳��

class Base
{
public:
	Base()
	{
		cout << "����Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "�������������" << endl;
	}

};

class Son :public Base
{
public:
	Son()
	{
		cout << "����Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "�������������" << endl;
	}
};

void test01()
{
	//�ȹ��츸�࣬�ٹ������࣬�����෴
	Son s1;
}

int main()
{
	test01();




	system("pause");

	return 0;
}