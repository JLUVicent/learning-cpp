#include <iostream>
using namespace std;
//������
class Animal {
public:

	int m_Age;
};
//������̳���������μ̳�����
// �̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
// Animal��Ϊ�����
//����
class Sheep :virtual public Animal {};
//����
class Tuo :virtual public Animal {};
//������
class SheepTuo :public Sheep, public Tuo {};
void test01()
{
	SheepTuo st;
	st.Tuo::m_Age = 28;
	st.Sheep::m_Age = 18;
	//Ϊ18������ı���������
	
	//���������μ̳У���������ӵ����ͬ��������Ҫ������������
	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	//�������ֻҪ��һ�ݾͿ��ԣ��������ݵ������������ݣ��˷���Դ
}
int main()
{
	test01();




	system("pause");

	return 0;
}