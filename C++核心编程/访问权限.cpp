#include <iostream>
using namespace std;

//����Ȩ��
//����
//1.����Ȩ�� public			��Ա�����ڿ��Է��ʣ�����Ҳ���Է���
//2.����Ȩ�� protected		��Ա�����ڿ��Է��ʣ����ⲻ���Է��� ֮��ὲ���м̳еĹ�ϵ ���ӿ��Է��ʸ����еı�������
//3.˽��Ȩ�� private		��Ա�����ڿ��Է��ʣ����ⲻ���Է��� ���Ӳ����Է��ʸ����еı�������

class Person
{
public:
	//����Ȩ��
	string m_Name;//����
protected:
	//����Ȩ��
	string m_Car;//����
private:
	//˽��Ȩ��
	int m_Password;//���п�����
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}

};
int main()
{
	//ʵ��������Ķ���
	Person p1;
	p1.m_Name = "����";
	//p1.m_Car = "����";//����Ȩ�޵����ݣ���������ʲ���
	//p1.m_Password = 123; //˽��Ȩ�����ݣ���������ʲ���




	system("pause");

	return 0;
}