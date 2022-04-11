//�Լ�ͨ��������

#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι��� ���� ����
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
		cout << "�вι���ĵ���" << endl;
	}

	//��������
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;

		//���
		this->pAddress = new T[arr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		cout << "��������ĵ���" << endl;
	}

	//operator= ��ֹǳ����
	MyArray& operator=(const MyArray& arr)
	{
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		cout << "�ȺŹ���ĵ���" << endl;
		return *this;
	}
	
	//β�巨
	void Push_Back(const T &val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;//������ĩβ��������
		this->m_Size++;//���������С
	}

	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ���Ԫ��Ҳ����βɾ
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//����[] ������  arr[0]
	T& operator [](int index)
	{
		return this->pAddress[index]; //������Խ�磬�û��Լ�ȥ����
	}


	//��ȡ��������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��ȡ�����С
	int	getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
		cout << "���������ĵ���" << endl;
	}
private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_Capacity;//��������
	int m_Size;



};