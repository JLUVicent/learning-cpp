#pragma once //��ֹͷ�ļ��ظ�����
#include <iostream> //���������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//��ʾ�˵�
	void Show_Menu();

	//����ְ��
	void Add_Emp();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ��������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//��������
	~WorkerManager();
};