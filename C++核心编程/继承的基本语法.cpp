#include <iostream>
using namespace std;

//普通实现页面

////Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课等公共头部" << endl;
//
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作等公共底部信息" << endl;
//	}
//	void left()
//	{
//		cout << "java,python,c++（公共分类列表）" << endl;;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课等公共头部" << endl;
//
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作等公共底部信息" << endl;
//	}
//	void left()
//	{
//		cout << "java,python,c++（公共分类列表）" << endl;;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};

//继承实现页面
class BasePage
{
	//公共页面的类
public:
	void header()
	{
		cout << "首页，公开课等公共头部" << endl;

	}
	void footer()
	{
		cout << "帮助中心、交流合作等公共底部信息" << endl;
	}
	void left()
	{
		cout << "java,python,c++（公共分类列表）" << endl;;
	}

};
//Java页面
//继承的好处：减少重复的代码
//语法： class 子类 : 继承方式 父类
//子类也称为派生类，父类也称为基类
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

void test01()
{
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}
void test02()
{
	cout << "Python下载视频页面如下：" << endl;
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