#include <iostream>
using namespace std;
#include<map>
//map查找和统计
//-`find(key); `                  //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//- `count(key); `                //统计key的元素个数

//查找和统计
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//查找
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	//map不允许插入重复key元素，count统计结果是0/1
	//multimap的cout统计可能大于1
	int num = m.count(3);
	cout << "num = " << num << endl;
}


int main()
{

	test01();


	system("pause");

	return 0;
}