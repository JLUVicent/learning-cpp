#include <iostream>
using namespace std;

//�̳��еĶ���ģ��
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};
// cl /d1 reportSingleClassLayoutSon .\�̳��еĶ���ģ��.cpp  ���ÿ����������й���Ҳ�ɲ鿴

void test01()
{
	//16
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�еĳ�Ա�����Ǳ������������ˣ����ʲ���������ȷʵ�̳���ȥ��
	cout << "size of Son=" << sizeof(Son) << endl;//��ӡ�ڴ��С
}

int main()
{
	test01();



	system("pause");

	return 0;
}