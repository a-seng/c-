#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#pragma once
#include <iostream>
using namespace std;
//
//template<class T>
//class MyArray
//{
//public:
//	MyArray(int Capacity)
//	{
//		//cout << "MyArray的有参构造调用" << endl;
//		m_Capacity = Capacity;
//		this->m_Size = 0;
//		this->pAddress = new T[this->m_Capacity];
//	}
//
//	MyArray(const MyArray& arr)
//	{
//	//	cout << "MyArray的拷贝构造调用" << endl;
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//
//		this ->pAddress=new T[arr.m_Capacity];
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//	}
//
//	MyArray &operator=(const MyArray &arr)
//	{
//		if (this->pAddress != NULL)
//		{
//		//	cout << "MyArray的operator=调用" << endl;
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//			this->m_Capacity = 0;
//			this->m_Size = 0;
//		}
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->pAddress = new T[arr.m_Capacity];
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//		return *this;
//	}
//
//
//	
//
//	~MyArray()
//	{
//		if (this->pAddress != NULL)
//		{
//	//		cout << "MyArray的析构函数调用" << endl;
//			delete pAddress;
//			pAddress = NULL;
//		}
//	}
//
//
//private:
//	T*pAddress;
//	int m_Size;
//	int m_Capacity;
//};



//
//template<class T>
//class MyArray
//{
//public:
//
//	MyArray(int capacity)
//	{
//		this->m_Capacity = capacity;
//		this->m_Size = 0;
//		pAddress = new T(this->m_Capacity);
//	}
//
//	MyArray(const MyArray &arr)
//	{
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->pAddress = new T[this->m_Capacity];
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//	}
//
//	MyArray&operator=(const MyArray &myarray)
//	{
//		if (this->pAddress != NULL)
//		{
//			delete[]this->pAddress;
//			this->m_Capacity = 0;
//			this->m_Size = 0;
//		}
//		this->m_Capacity = myarray.m_Capacity;
//		this->m_Size = myarray.m_Size;
//		this->pAddress = new T[this->m_Capacity];
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->pAddress[i] = myarray[i];
//		}
//		return *this;
//	}
//
//	T& operator[](int index)
//	{
//		return this->pAddress[index];
//	}
//
//	void Push_back(const T&val)
//	{
//		if (this->m_Capacity == this->m_Size)
//			return;
//		this->pAddress(this->m_Size) = val;
//		this->m_Size++;
//	}
//
//
//	void Pop_back()
//	{
//		if (this->m_Size == 0)
//		{
//			return;
//		}
//		this->m_Size--;
//	}
//
//	int getSize()
//	{
//		return this->m_Size;
//	}
//
//	~MyArray()
//	{
//		if (this->pAddress != NULL)
//		{
//			delete[]this->pAddress;
//			this->pAddress = NULL;
//			this->m_Capacity = 0;
//			this->m_Size = 0;
//		}
//	}
//private:
//	T*pAddress;
//	int m_Capacity;
//	int m_Size;
//};