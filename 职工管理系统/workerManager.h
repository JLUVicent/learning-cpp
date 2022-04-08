#pragma once //��ֹͷ�ļ��ظ�����
#include <iostream> //���������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
#include <fstream>
#define FILENAME "empFile.txt"
class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//��ʾ�˵�
	void Show_Menu();

	//����ְ��
	void Add_Emp();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ��������
	int m_EmpNum;

	//��ʼ��Ա��
	void init_Emp();

	//ͳ������
	int get_EmpNum();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ��������λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//ְ������ָ��
	Worker** m_EmpArray;

	//��������
	~WorkerManager();
};