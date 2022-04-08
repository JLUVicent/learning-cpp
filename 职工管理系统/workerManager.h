#pragma once //防止头文件重复包含
#include <iostream> //包含输入输出流的头文件
using namespace std; //使用标准命名空间
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
#include <fstream>
#define FILENAME "empFile.txt"
class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//保存文件
	void save();

	//标志文件是否为空
	bool m_FileIsEmpty;

	//显示菜单
	void Show_Menu();

	//增加职工
	void Add_Emp();

	//退出系统
	void ExitSystem();

	//记录职工的人数
	int m_EmpNum;

	//初始化员工
	void init_Emp();

	//统计人数
	int get_EmpNum();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//根据职工编号判断职工是否存在，若存在返回职工数组中位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//职工数组指针
	Worker** m_EmpArray;

	//析构函数
	~WorkerManager();
};