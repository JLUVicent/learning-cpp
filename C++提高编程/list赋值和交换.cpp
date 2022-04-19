#include <iostream>
using namespace std;
#include<list>

//*`assign(beg, end); `            //��[beg, end)�����е����ݿ�����ֵ������
//* `assign(n, elem); `              //��n��elem������ֵ������
//* `list& operator=(const list& lst); `         //���صȺŲ�����
//* `swap(lst); `                         //��lst�뱾���Ԫ�ػ�����
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
	//����list����
	list<int>L1;
	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	//��ֵ
	list<int>L2;
	L2 = L1;
	printList(L2);

	list<int>L3;
	L3.assign(L1.begin(), L1.end());
	printList(L3);

	list<int>L4;
	L4.assign(10, 1000);
	printList(L4);
}

//����
void test02()
{
	//����list����
	list<int>L1;
	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//printList(L1);

	list<int>L2;
	L2.assign(10, 10000);

	cout << "����ǰ��" << endl;
	printList(L1);
	printList(L2);

	cout << "������:" << endl;
	L1.swap(L2);
	printList(L1);
	printList(L2);
}

int main()
{

	test01();
	test02();

	system("pause");

	return 0;
}