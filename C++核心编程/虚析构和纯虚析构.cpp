#include <iostream>
using namespace std;
#include<string>

//�������ʹ�������

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	//���麯��
	virtual void speak() = 0;
	//�������������Խ������ָ���ͷ�������󲻸ɾ�������
	//virtual ~Animal()
	//{
	//	cout << "Animal������������" << endl;
	//}
	//�������� ��Ҫ����Ҳ��Ҫʵ�֣����˴�������֮�������Ҳ���ڳ������޷�ʵ��������
	virtual ~Animal() = 0;
};
Animal:: ~Animal()
{
	cout << "Animal����������������" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_Name=new string(name);
		cout << "Cat�Ĺ��캯������" << endl;
	}
	virtual void speak()
	{
		cout <<*m_Name<< "Сè��˵��" << endl;
	}
	string* m_Name;
	~Cat()
	{
		cout << "Cat��������������" << endl;
		if (m_Name != NULL)
		{
			
			delete m_Name;
			m_Name = NULL;
		}
	}
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
	delete animal;
}

int main()
{
	test01();



	system("pause");

	return 0;
}