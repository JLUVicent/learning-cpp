#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{

	//���Դ��룺
	//Worker* worker = NULL;
	//worker = new Employee(1, "����", 1);
	//worker->showInfo();
	//delete worker;
	//worker = new Manager(2, "����", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->showInfo();
	//delete worker;
	//ʵ���������߶���
	WorkerManager wm;

	//�����洢�û���ѡ��
	int choice = 0;

	while (true)
	{
		//����չʾ�˵���Ա����
		wm.Show_Menu();

		cout << "���������ѡ��:" << endl;

		cin >> choice;//�����û���ѡ��
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1://���ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			break;
		case 3://ɾ��ְ��
			break;
		case 4://�޸�ְ��
			break;
		case 5://����ְ��
			break;
		case 6://����ְ��
			break;
		case 7://����ĵ�
			break;
		default:
			system("cls");
			break;
		}

	}


	system("pause");

	return 0;
}