#include <iostream>
using namespace std;

//实现通用对数组进行排序的函数
//规则：从大到小
//算法：选择排序
//测试：char int两个数组

//交换函数模板
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<typename T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值的下标
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			//交换max和i下标的元素
			mySwap(arr[max], arr[i]);
		}
	}
}

//提供打印数组模板
template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
}

void test01()
{
	//测试char数组
	char charArr[] = "badegs";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

//测试int数组
void test02()
{
	int intArr[] = { 2,3,5,67,2 };
	//计算数组长度
	int num = sizeof(intArr) / sizeof(int);
	//cout << num << endl;
	mySort(intArr, num);
	printArray(intArr, num);
}
int main()
{
	test02();
	test01();


	system("pause");

	return 0;
}