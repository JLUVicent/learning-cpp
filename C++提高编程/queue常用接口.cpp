#include <iostream>
using namespace std;
#include<string>
#include<queue>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

//����Queue
void test01()
{
	queue<Person>q;

	//ʵ��������
	Person p1("aaa", 111);
	Person p2("bbb", 222);
	Person p3("ccc", 333);
	Person p4("ddd", 444);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�С��" << q.size() << endl;
	//�ж�ֻҪ���в�Ϊ�ղ鿴��ͷ����β�����Ӳ���
	while (!q.empty())
	{
		//�鿴��ͷԪ��
		cout << "��ͷԪ�أ�" << q.front().m_Name << "���䣺" << q.front().m_Age << endl;
		//�鿴��βԪ��
		cout << "��ͷԪ�أ�" << q.back().m_Name << "���䣺" << q.back().m_Age << endl;
		
		//����
		q.pop();
	}
	cout << "���д�С��" << q.size() << endl;


}

int main()
{
	test01();



	system("pause");

	return 0;
}