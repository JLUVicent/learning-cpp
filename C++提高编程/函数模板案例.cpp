#include <iostream>
using namespace std;

//ʵ��ͨ�ö������������ĺ���
//���򣺴Ӵ�С
//�㷨��ѡ������
//���ԣ�char int��������

//��������ģ��
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<typename T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶����ֵ���±�
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;//�������ֵ�±�
			}
		}
		if (max != i)
		{
			//����max��i�±��Ԫ��
			mySwap(arr[max], arr[i]);
		}
	}
}

//�ṩ��ӡ����ģ��
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
	//����char����
	char charArr[] = "badegs";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

//����int����
void test02()
{
	int intArr[] = { 2,3,5,67,2 };
	//�������鳤��
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