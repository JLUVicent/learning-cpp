#include <iostream>
using namespace std;

//��ָ����ó�Ա����
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		if (this == NULL)
		{
			return;
		}
		//m_Age = age;
		//����ԭ���Ǵ����ָ��Ϊ��NULL;
		cout << "this Person age is:" << m_Age << endl;
	}
	int m_Age;
};

void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main()
{
	test01();



	system("pause");

	return 0;
}