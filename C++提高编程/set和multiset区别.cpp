#include <iostream>
using namespace std;
#include<set>
void test01()
{
	set<int>s1;
	pair<set<int>::iterator,bool> ret=s1.insert(10);

	if (ret.second)
	{
		cout << "第一次插入成功" << endl;

	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	s1.insert(10);
	pair<set<int>::iterator, bool> ret1 = s1.insert(10);

	if (ret1.second)
	{
		cout << "第2次插入成功" << endl;

	}
	else
	{
		cout << "第2次插入失败" << endl;
	}

	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{

	test01();


	system("pause");

	return 0;
}