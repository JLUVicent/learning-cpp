#include <iostream>
using namespace std;
#include<stack>


//构造函数：
//* `stack<T > stk; `                                 //stack采用模板类实现， stack对象的默认构造形式
//* `stack(const stack& stk); `            //拷贝构造函数
//赋值操作：
//* `stack& operator=(const stack& stk); `           //重载等号操作符
//数据存取：
//* `push(elem); `      //向栈顶添加元素
//* `pop(); `                //从栈顶移除第一个元素
//* `top(); `                //返回栈顶元素
//大小操作：
//* `empty(); `            //判断堆栈是否为空
//* `size(); `              //返回栈的大小
void test01()
{
	//特点：先进后出
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//只要栈不为空就查看栈顶并且执行出栈操作
	while (!s.empty())
	{
		//查看栈顶的元素
		cout << "栈顶元素为：" << s.top() << endl;

		//出栈
		s.pop();
	}

	cout << "栈的大小：" << s.size() << endl;
}


int main()
{
	test01();



	system("pause");

	return 0;
}