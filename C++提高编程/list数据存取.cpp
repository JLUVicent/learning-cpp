#include <iostream>
using namespace std;
#include<list>
//*`front(); `        //���ص�һ��Ԫ�ء�
//* `back(); `         //�������һ��Ԫ�ء�

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//cout << L1.at(0) << endl;//���� ��֧��at��������
	//cout << L1[0] << endl; //����  ��֧��[]��ʽ��������
	//list���������� ��������֧��������ʣ���������֧���������
	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;
	
	//��֤��������֧���������
	list<int>::iterator it = L1.begin();
	it++;//֧��˫��
	it--;
	cout << "�ڶ���Ԫ��Ϊ:" << *it << endl;
	//it = it + 1;//���󣬲����Է�����Ծ


}

int main()
{

	test01();



	system("pause");

	return 0;
}