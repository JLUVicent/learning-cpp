#include <iostream>
using namespace std;


//1���캯���ķ��༰����
//����
//���ղ������� �޲ι���(Ĭ�Ϲ���)���вι���
//�������ͷ��� ��ͨ���� ��������
class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person�Ĺ��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		//������������ϵ��������Կ�����������
		age = p.age;
	}
	int age;
	~Person()
	{
		cout << "Person��������������" << endl;

	}
};

//����
void test01()
{
	//1.���ŷ�
	//Person p1;//Ĭ�Ϲ��캯���ĵ���
	//Person p2(10);//�вι��캯��

	////�������캯������
	//Person p3(p2);
	//cout << "P2������" << p2.age << endl;
	//cout << "P3������" << p3.age << endl;
	//ע������
	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
	//��Ϊ�������д������������Ϊ�Ǻ���������������Ϊ�ڴ�������
	//Person p1();


	//2.��ʾ��
	Person p1;
	Person p2 = Person(10);//�вι���
	//////��������
	Person p3 = Person(p2);
	//ע������
	//Person(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ�������ջ���������
	//cout << "aaaa" << endl;
	//��Ҫ���ÿ�����������ʼ���������� ����������ΪPerson(P3)�ȼ���ȥ������Person p3;
	//Person(p3);//��������Ϊ�Ƕ�������

	//��ʽת����
	Person p4 = 10;//�൱�� Person p4 = Person(10); �вι���
	Person p5 = p4;//��������
}


int main()
{

	test01();


	system("pause");

	return 0;
}