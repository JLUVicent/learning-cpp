#include <iostream>
using namespace std;
#include <string>

//�����������������

//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test01()
{
	MyPrint myPrint;//����ʹ�������ǳ����ƺ������ã���˳�Ϊ�º���
	myPrint("Hello world");

}
//�º����ǳ���û�й̶���д��
//�ӷ���
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}

void test02()
{
	MyAdd myadd;
	cout << myadd(100, 100) << endl;

	//������������
	cout << MyAdd()(100, 100) << endl;
}

int main()
{

	test01();
	MyPrint02("Hell");
	test02();


	system("pause");

	return 0;
}