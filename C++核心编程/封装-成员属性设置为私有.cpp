#include <iostream>
#include <string>
using namespace std;


//��Ա��������Ϊ˽��
//1.�Լ����Կ��ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��

//�������
class Person
{
public:
	//д����
	void setName(string name)
	{
		m_Name = name;
	}
	//������
	string getName()
	{
		return m_Name;
	}
	//������ 
	int getAge()
	{
		//m_Age = 99;
		return m_Age;
	}
	//��������
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "������������" << endl;
			return;
		}
		m_Age = age;
	}
	//д����
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//���� �ɶ���д
	string m_Name;
	//���� ֻ��
	int m_Age;
	//���� ֻд
	string m_Lover;
};
int main()
{
	Person p;
	//p.m_Name = "����";
	p.setName("����");
	cout << "��Ա������" << p.getName() << endl;
	//cout << "��Ա���䣺" << p.getAge() << endl;
	p.setLover("mylover");
	p.setAge(1500);
	cout << "��Ա���䣺" << p.getAge() << endl;


	system("pause");

	return 0;
}