#include <iostream>
#include <string>
using namespace std;

//ѧ����
//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student
{
public:
	//���е����Ժ���Ϊͳһ��Ϊ��Ա
	//���� ��Ա���Ժͳ�Ա����
	//��Ϊ����Ա�������߳�Ա����

	//����
	string m_Name;//����
	int m_Id;//ѧ��

	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "������" << m_Name << "ѧ��" << m_Id << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		m_Name = name;
	}
	void setNumber(int id)
	{
		m_Id = id;
	}
};

int main()
{
	//����һ�������ѧ��
	//ʵ��������
	Student s1;
	//��s1������и�ֵ����
	//s1.m_Name = "����";
	s1.setName("������");
	//s1.m_Id = 1;
	s1.setNumber(3);
	s1.showStudent();




	system("pause");

	return 0;
}