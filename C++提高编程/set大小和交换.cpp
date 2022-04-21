#include <iostream>
using namespace std;
#include<set>

//*`size(); `          //返回容器中元素的数目
//* `empty(); `        //判断容器是否为空
//* `swap(st); `      //交换两个集合容器
void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//大小
void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	printSet(s1);

	if (s1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器的大小为" << s1.size() << endl;
	}
}
//交换
void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	set<int>s2;
	s1.insert(100);
	s1.insert(200);
	s1.insert(300);
	s1.insert(400);

	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);
	cout << endl;

	cout << "交换后：" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
	cout << endl;
}


int main()
{
	test01();
	test02();


	system("pause");

	return 0;
}