#include <iostream>
using namespace std;
//�ַ������Һ��滻
// * find�����Ǵ�������rfind��������
//*find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ������� - 1
//* replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���
//*`int find(const string& str, int pos = 0) const; `              //����str��һ�γ���λ��,��pos��ʼ����
//* `int find(const char* s, int pos = 0) const; `                     //����s��һ�γ���λ��,��pos��ʼ����
//* `int find(const char* s, int pos, int n) const; `               //��posλ�ò���s��ǰn���ַ���һ��λ��
//* `int find(const char c, int pos = 0) const; `                       //�����ַ�c��һ�γ���λ��
//* `int rfind(const string& str, int pos = npos) const; `      //����str���һ��λ��,��pos��ʼ����
//* `int rfind(const char* s, int pos = npos) const; `              //����s���һ�γ���λ��,��pos��ʼ����
//* `int rfind(const char* s, int pos, int n) const; `              //��pos����s��ǰn���ַ����һ��λ��
//* `int rfind(const char c, int pos = 0) const;  `                      //�����ַ�c���һ�γ���λ��
//* `string& replace(int pos, int n, const string& str); `       //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//* `string& replace(int pos, int n, const char* s); `                 //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

//����
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("bc");

	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����pos=" << pos << endl;
	}

	//rfind��find������
	//rfind����������ң�find�������Ҳ���
	pos=str1.rfind("de");
	cout << "pos=" << pos << endl;
}



//�滻

void test02()
{
	string str1 = "abcdefg";
	//��1��λ����3���ַ��滻Ϊ��1111��
	str1.replace(1, 3, "1111");
	cout << "str1:" << str1 << endl;
}
int main()
{
	test01();
	test02();



	system("pause");

	return 0;
}