#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 9; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//	if (v1.empty())
//		cout << " v1Ϊ��" << endl;
//	else{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������ = " << v1.capacity() << endl;
//		cout << "v1�Ĵ�С = " << v1.size() << endl;
//	}
//
//	v1.resize(13);
//	printVector(v1);
//
//	v1.resize(15, 100);
//	printVector(v1);
//
//	v1.clear();
//	printVector(v1);
//
//	
//}

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i * 10);
//	}
//	printVector(v1);
//
//	v1.pop_back(); 
//	printVector(v1);
//
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	v1.erase(v1.begin(), v1.end());
//	printVector(v1);
//	
//}

//void test01()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	cout << "v1�ĵ�һ��Ԫ��Ϊ=" << v1.front() << endl;
//	cout << "v1�����һ��Ԫ��Ϊ=" << v1.back() << endl;
//}
//
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//
//}

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	
//	vector<int>v2;
//	for (int i = 100; i>0; i--)
//		v2.push_back(i);
//
//	printVector(v1);
//	printVector(v2);
//	cout << "v1������Ϊ" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ" << v1.size() << endl;
//	cout << "v2������Ϊ" << v2.capacity() << endl;
//	cout << "v2�Ĵ�СΪ" << v2.size() << endl;
//
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//	cout << "v1������Ϊ" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ" << v1.size() << endl;
//	cout << "v2������Ϊ" << v2.capacity() << endl;
//	cout << "v2�Ĵ�СΪ" << v2.size() << endl;
//
//}
//
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10000; i++)
//		v.push_back(i);
//	v.resize(3);
//	vector<int >(v).swap(v);
//	cout << "v������Ϊ" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ" << v.size() << endl;
//}

//void test01()
//{
//	vector<int>v;
//	int num = 0;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//		int *p=NULL;
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//			//cout << "v������Ϊ=" << v.capacity() << endl;
//		}
//	}
//	cout << "num�Ĵ�СΪ=" << num << endl;
//}
//
//int main()
//{
//	test01();
//   //test02();
//	system("pause");
//	return 0;
//}
//void test01()
//{
//	vector<int> v;
//
	//Ԥ���ռ�
	//v.reserve(100000);
//	v.reserve(1000);
//
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//		if (p != &v[0]) {
//			p = &v[0];
//			num++;
//			cout << "v��������СΪ=" << v.capacity() << endl;
//		}
//	}
//
//	cout << "num:" << num << endl;
//}

#include<deque>

//void printDeque(const deque <int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque <int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	cout << "d2ȫ��";
//	printDeque(d2);
//
//	deque<int>::iterator it = d1.begin();
//	deque <int>d3(++d1.begin(), d1.end());
//	cout << "d3ȥ��һ��";
//	printDeque(d3);
//
//	deque<int>d4(5, 100);
//	printDeque(d4);
//
//	deque<int>d5 = d4;
//	printDeque(d5);
//	
//}

//void printDeque(deque <int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	printDeque(d1);
//
//	deque<int>d2;
//	d2.assign(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3;
//	d3.assign(10, 50);
//	printDeque(d3);
//
//}
//
//
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	printDeque(d1);
//	if (d1.empty())
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ =  " << d1.size() << endl;
//	}
//
//	d1.resize(15, 100);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//
//void printDeque(const deque <int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	printDeque(d1);
//
//	d1.pop_back();
//	printDeque(d1);
//	d1.pop_front();
//	printDeque(d1);
//
//}

//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	printDeque(d1);
//
//	deque<int>d;
//	d1.insert(d1.begin(), 100);
//	printDeque(d1);
//	d1.insert(d1.begin(), 2, 100000);
//	printDeque(d1);
//
//
//	deque<int>d2;
//	d2.push_back(100);
//	d2.push_back(200);
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	printDeque(d2);
//
//
//}

//#include<algorithm>
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	d.push_back(100);
//	d.push_back(200);
//	d.push_back(10);
//	d.push_back(15);
//	d.push_back(23);
//	d.push_back(1);
//	printDeque(d);
//	sort(d.begin(), d.end());
//	printDeque(d);
//}
//
//int main() {
//
// 	test01();
////	test02();
//	system("pause");
//
//	return 0;
//}
/*
��������ѡ�֣��ŵ�vector��
����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
deque��������һ�飬�ۼ��ܷ�
��ȡƽ����
*/
class Person
{
public:
	Person(string name, int score)
	{
		m_name = name;
		m_score = score;
	}

	string m_name;
	int m_score;
};

void setPlayer(vector<Person>&v)
{
	string name = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string player = "���";
		player += name[i];
		int score = 0;
		Person p(player, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		int sum = 0;
		int aver = 0;
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			d.push_back(rand() % 41 + 60);
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it;
		}
		aver = sum / d.size();
		(*it).m_score = aver;
	}
}

void printPlayer(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout <<"���  "<< (*it).m_name << "����Ϊ  =  " << (*it).m_score << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Person>p;
	setPlayer(p);
	setScore(p);
	printPlayer(p);
	system("pause");
	return 0;
}