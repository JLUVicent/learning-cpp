#pragma once //防止头文件重复包含
#include <iostream> //包含输入输出流的头文件
using namespace std; //使用标准命名空间
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//显示菜单
	void Show_Menu();

	//增加职工
	void Add_Emp();

	//退出系统
	void ExitSystem();

	//记录职工的人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//析构函数
	~WorkerManager();
};