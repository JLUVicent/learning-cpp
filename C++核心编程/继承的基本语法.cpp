#include <iostream>
using namespace std;

//��ͨʵ��ҳ��

////Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������εȹ���ͷ��" << endl;
//
//	}
//	void footer()
//	{
//		cout << "�������ġ����������ȹ����ײ���Ϣ" << endl;
//	}
//	void left()
//	{
//		cout << "java,python,c++�����������б�" << endl;;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������εȹ���ͷ��" << endl;
//
//	}
//	void footer()
//	{
//		cout << "�������ġ����������ȹ����ײ���Ϣ" << endl;
//	}
//	void left()
//	{
//		cout << "java,python,c++�����������б�" << endl;;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��
class BasePage
{
	//����ҳ�����
public:
	void header()
	{
		cout << "��ҳ�������εȹ���ͷ��" << endl;

	}
	void footer()
	{
		cout << "�������ġ����������ȹ����ײ���Ϣ" << endl;
	}
	void left()
	{
		cout << "java,python,c++�����������б�" << endl;;
	}

};
//Javaҳ��
//�̳еĺô��������ظ��Ĵ���
//�﷨�� class ���� : �̳з�ʽ ����
//����Ҳ��Ϊ�����࣬����Ҳ��Ϊ����
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

void test01()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}
void test02()
{
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
}

int main()
{

	test01();
	test02();

	system("pause");

	return 0;
}