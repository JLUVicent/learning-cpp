#include <iostream>
using namespace std;

//�������󣨷º�����
//*����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//* �������󳬳���ͨ�����ĸ����������������Լ���״̬
//* �������������Ϊ��������

//1.����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//2����������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;//�ڲ��Լ���״̬
};

//3���������������Ϊ��������
void doPrint(MyPrint& map, string test)
{
	map(test);
}

void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

void test02()
{
	MyPrint myPrint;
	myPrint("hhhhh");
	myPrint("hhhhh");
	myPrint("hhhhh");

	cout << "myPrint���ô���Ϊ�� " << myPrint.count << endl;
}

void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello C++");
}

int main()
{

	test01();
	test02();
	test03();

	system("pause");

	return 0;
}