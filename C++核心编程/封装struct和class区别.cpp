#include <iostream>
using namespace std;

// struct��class������
// structĬ��Ȩ���ǹ���Ȩ��publis����classĬ��Ȩ����˽��private

class C1
{
	int m_A; //Ĭ��Ȩ����˽��
};

struct C2
{
	int m_A; //Ĭ��Ȩ���ǹ���
};

int main()
{
	//C1 c1;
	//c1.m_A = 100;//˽�С����ⲻ�ɷ���
	C2 c2;
	c2.m_A = 100;//���Է��ʣ�����Ȩ�ޣ���structĬ��ȫ�°�Ϊ��������˿��Է���



	system("pause");

	return 0;
}