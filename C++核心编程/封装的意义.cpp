#include <iostream>
using namespace std;

//Բ����
const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*PI*�뾶

//class����Ҫ���һ����,��������ž���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	//�뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//ͨ��Բ�ഴ�������Բ������
	//ʵ������ͨ��һ���ഴ��һ������Ĺ���
	Circle c1;

	//��Բ���� �����Խ��и�ֵ

	c1.m_r = 10;
	//2*PI*10=62.8
	cout << "Բ���ܳ�Ϊ" << c1.calculateZC() << endl;



	system("pause");

	return 0;
}