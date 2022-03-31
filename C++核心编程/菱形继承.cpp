#include <iostream>
using namespace std;
//动物类
class Animal {
public:

	int m_Age;
};
//利用虚继承来解决菱形继承问题
// 继承之前加上关键字virtual变为虚继承
// Animal成为虚基类
//羊类
class Sheep :virtual public Animal {};
//驼类
class Tuo :virtual public Animal {};
//羊驼类
class SheepTuo :public Sheep, public Tuo {};
void test01()
{
	SheepTuo st;
	st.Tuo::m_Age = 28;
	st.Sheep::m_Age = 18;
	//为18，后面的变量起作用
	
	//当出现菱形继承，两个父类拥有相同的数据需要加作用域区分
	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	//这份数据只要有一份就可以，菱形数据导致数据有两份，浪费资源
}
int main()
{
	test01();




	system("pause");

	return 0;
}