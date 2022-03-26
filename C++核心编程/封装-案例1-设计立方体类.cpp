#include <iostream>
using namespace std;

//�����������������
class Cube
{
public:
	//��Ϊ
	//����������ĳ����
	//��ȡ������ĳ����
	void setLWH(int l, int w, int h)
	{
		m_L = l;
		m_W = w;
		m_H = h;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//��ȡ��
	int getW()
	{
		return m_W;

	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}
	//��ȡ����������
	int cubeArea()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	//��ȡ����������
	int cubeVolume()
	{
		return m_L * m_H * m_W;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube& c)
	{
		if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
		{
			return true;
		}
		else
			return false;
	}

	//����
	//���ó����
private:
	int m_L;
	int m_W;
	int m_H;
};

//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	{
		return true;
	}
	else
		return false;
}
int main()
{
	Cube c1;
	c1.setLWH(3, 4, 5);
	cout << "����������Ϊ��" << c1.cubeVolume() << endl;
	cout << "����������Ϊ��" << c1.cubeArea() << endl;
	Cube c2;
	c2.setLWH(3, 4, 6);
	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);

	if (ret)
	{
		cout << "���������������" << endl;
	}
	else
		cout << "�����������岻���" << endl;

	//���ó�Ա�����ж�
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "���������������" << endl;
	}
	else
		cout << "�����������岻���" << endl;

	system("pause");

	return 0;
}