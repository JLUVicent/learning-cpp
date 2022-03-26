#include <iostream>
using namespace std;

//求立方体的面积和体积
class Cube
{
public:
	//行为
	//设置立方体的长宽高
	//获取立方体的长宽高
	void setLWH(int l, int w, int h)
	{
		m_L = l;
		m_W = w;
		m_H = h;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//获取宽
	int getW()
	{
		return m_W;

	}
	//获取高
	int getH()
	{
		return m_H;
	}
	//获取立方体的面积
	int cubeArea()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	//获取立方体的体积
	int cubeVolume()
	{
		return m_L * m_H * m_W;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube& c)
	{
		if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
		{
			return true;
		}
		else
			return false;
	}

	//属性
	//设置长宽高
private:
	int m_L;
	int m_W;
	int m_H;
};

//利用全局函数判断两个立方体是否相等
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
	cout << "立方体的体积为：" << c1.cubeVolume() << endl;
	cout << "立方体的面积为：" << c1.cubeArea() << endl;
	Cube c2;
	c2.setLWH(3, 4, 6);
	//利用全局函数判断
	bool ret = isSame(c1, c2);

	if (ret)
	{
		cout << "这两个立方体相等" << endl;
	}
	else
		cout << "这两个立方体不相等" << endl;

	//利用成员函数判断
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "这两个立方体相等" << endl;
	}
	else
		cout << "这两个立方体不相等" << endl;

	system("pause");

	return 0;
}