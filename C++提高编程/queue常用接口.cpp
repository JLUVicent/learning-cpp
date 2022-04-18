#include <iostream>
using namespace std;
#include<string>
#include<queue>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

//队列Queue
void test01()
{
	queue<Person>q;

	//实例化对象
	Person p1("aaa", 111);
	Person p2("bbb", 222);
	Person p3("ccc", 333);
	Person p4("ddd", 444);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列大小：" << q.size() << endl;
	//判断只要队列不为空查看队头，队尾，出队操作
	while (!q.empty())
	{
		//查看队头元素
		cout << "队头元素：" << q.front().m_Name << "年龄：" << q.front().m_Age << endl;
		//查看队尾元素
		cout << "队头元素：" << q.back().m_Name << "年龄：" << q.back().m_Age << endl;
		
		//出队
		q.pop();
	}
	cout << "队列大小：" << q.size() << endl;


}

int main()
{
	test01();



	system("pause");

	return 0;
}