#include <iostream>
using namespace std;

//多态案例2：制作饮品
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅助佐料
	virtual void PutSomething() = 0;

	//制作饮品
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//具体制作咖啡
class Coffee :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅助佐料
	virtual void PutSomething()
	{
		cout << "加入汤喝牛奶" << endl;
	}
};

//具体制作茶叶
class Tea :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮开水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅助佐料
	virtual void PutSomething()
	{
		cout << "加入柠檬枸杞" << endl;
	}
};

//制作函数

void doWork(AbstractDrinking *abs)
{
	abs->MakeDrink();
	delete abs;//释放
}

void test01()
{
	//制作咖啡
	doWork(new Coffee);

	doWork(new Tea);
}


int main()
{
	test01();



	system("pause");

	return 0;
}