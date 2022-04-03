#include <iostream>
using namespace std;
#include <string>

//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//�����Ҫ��չ�¹��ܣ���Ҫ�޸�Դ��
		//��ʵ�ʿ����У��ᳫ����ԭ��
		//����չ���п��ţ����޸Ľ��йر�
	}
	int m_Num1;
	int m_Num2;
};
void test01()
{
	//��������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 30;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
}

//��̬ʵ�ּ�����
//��̬�����ĺô�
// 1.��֯�ṹ����
// 2.�ɶ���ǿ
// 3.����ǰ�ںͺ�����չά���Ը�
//ʵ�ּ������ĳ�����
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

//�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}

};

//������������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}

};

//�˷���������
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}

};

void test02()
{
	//��̬ʹ������
	//����ָ���������ָ���������
	
	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 30;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//�����ǵ�����
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 30;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//����new��������Ҫ���ٵ�
	delete abc;
}

int main()
{

	test01();
	test02();



	system("pause");

	return 0;
}