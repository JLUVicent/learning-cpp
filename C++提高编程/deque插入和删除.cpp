#include <iostream>
using namespace std;
#include<deque>

//deque���������ɾ��
// **����ԭ�ͣ�**
//
//���˲��������
//- `push_back(elem); `          //������β�����һ������
//- `push_front(elem); `        //������ͷ������һ������
//- `pop_back(); `                   //ɾ���������һ������
//- `pop_front(); `                 //ɾ��������һ������
//ָ��λ�ò�����
//* `insert(pos, elem); `         //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//* `insert(pos, n, elem); `     //��posλ�ò���n��elem���ݣ��޷���ֵ��
//* `insert(pos, beg, end); `    //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//* `clear(); `                           //�����������������
//* `erase(beg, end); `             //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//* `erase(pos); `                    //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//* �����ɾ���ṩ��λ���ǵ�������
//* β��-- - push_back
//* βɾ-- - pop_back
//* ͷ��-- - push_front
//* ͷɾ-- - pop_front
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);

	//βɾ
	d1.pop_back();
	printDeque(d1);

	//ͷɾ
	d1.pop_front();
	printDeque(d1);
}

void test02()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//insert����
	d1.insert(d1.begin(), 1000);
	printDeque(d1);

	d1.insert(d1.begin(), 2,100000);
	printDeque(d1);

	//����������в���
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
}
void test03()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	//ɾ��
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//�������䷽ʽɾ��
	d1.clear();
	//d1.erase(d1.begin(), d1.end());
	printDeque(d1);


}

int main()
{
	test01();
	test02();
	test03();


	system("pause");

	return 0;
}