#include <iostream>
using namespace std;

//��̬


//������
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}

};

//è��
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};
//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵������
//��ַ��󶨣��ڱ���׶ξ�ȷ���˺����ĵ�ַ
//�����ִ����è˵����������ַ������ǰ�󶨣���Ҫ�����н׶����



//��̬��̬������������1.�м̳й�ϵ��2.����Ҫ��д������麯����
//��д����������ֵ���ͣ��������������б���ȫ��ͬ�Ž���д

//��̬��̬��ʹ��
//�����ָ��������ã�ָ������Ķ���
void doSpeak(Animal &animal)//Animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
}
void test02()
{
	cout << "sizeof Animal=" << sizeof(Animal) << endl;
}
int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}