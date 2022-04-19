#include <iostream>
using namespace std;
#include<list>

//重点注意迭代器的插入和删除

//*push_back(elem);//在容器尾部加入一个元素
//*pop_back();//删除容器中最后一个元素
//*push_front(elem);//在容器开头插入一个元素
//*pop_front();//从容器开头移除第一个元素
//*insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//*insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
//*insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//*clear();//移除容器的所有数据
//*erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//*erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//*remove(elem);//删除容器中所有与elem值匹配的元素。
void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L;

	//尾插
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	//头插
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);
	//300 200 100 10 20 30 40
	printList(L);

	//尾删
	//300 200 100 10 20 30
	L.pop_back();
	printList(L);

	//头删
	//200 100 10 20 30
	L.pop_front();
	printList(L);

	//插入
	//200 100 100 10 20 30
	list<int>::iterator it = L.begin();
	L.insert(++it, 100);
	printList(L);

	//删除
	it = L.begin();
	L.erase(++it);
	//200 100 10 20 30
	printList(L);

	//移除
	L.push_back(1000000);
	L.push_back(1000000);
	L.push_back(1000000);
	printList(L);
	L.remove(1000000);//所有的1000000都删除
	printList(L);

	//清空
	L.clear();
	printList(L);
}

int main()
{

	test01();


	system("pause");

	return 0;
}