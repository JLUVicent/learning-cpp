#include <iostream>
using namespace std;
//总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题

//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作
class Person
{
public:
	Person()
	{
		cout << "person的默认构造函数的调用" << endl;
	}
	Person(int age,int height)
	{
		new int(height);
		m_Height = new int(height);
		m_Age = age;
		cout << "Person的有参构造函数的调用" << endl;
	}
	//自己实现拷贝构造函数解决浅拷贝带来的问题
	Person(const Person& p) {
		cout << "拷贝构造函数!" << endl;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		m_Age = p.m_Age;
		//m_Height=p.m_Height;编译器默认浅拷贝
		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		//析构代码：将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数的调用" << endl;
	}
	int m_Age; //年龄
	int* m_Height;
};

void test01()
{
	Person p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age << "身高为："<<*p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
}

int main()
{
	test01();



	system("pause");

	return 0;
}