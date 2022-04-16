#include <iostream>
using namespace std;
#include <vector>
//容器数据存取
//*`at(int idx); `     //返回索引idx所指的数据
//* `operator[]; `       //返回索引idx所指的数据
//* `front(); `            //返回容器中第一个数据元素
//* `back(); `              //返回容器中最后一个数据元素
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";

	}
	cout << endl;
	//printVector(v1);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";

	}
	cout << endl;

	cout << "v1的第一个元素为：" << v1.front() << endl;
	cout << "v1的最后一个元素为：" << v1.back() << endl;
}
int main()
{
	test01();



	system("pause");

	return 0;
}