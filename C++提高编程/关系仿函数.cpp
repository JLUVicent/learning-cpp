#include <iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
//��ϵ�º�������õľ���greater<>����
//* `template<class T > bool equal_to<T>`                    //����
//* `template<class T > bool not_equal_to<T>`            //������
//* `template<class T > bool greater<T>`                      //����
//* `template<class T > bool greater_equal<T>`          //���ڵ���
//* `template<class T > bool less<T>`                           //С��
//* `template<class T > bool less_equal<T>`               //С�ڵ���

class MyCompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};

//��ϵ�º��� greater
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//����
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());//ϵͳ���÷º���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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