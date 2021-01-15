#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<functional>

//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(0);
//	v.push_back(90);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(60);
//	v.push_back(80);
//	v.push_back(70);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(50);
//
//	vector<int >::iterator it = adjacent_find(v.begin(), v.end());
//	if (it != v.end())
//	{
//		cout << "找到了 " << *it << endl;
//	}
//	else
//		cout << "未找到" << endl;
//
//}
//

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person&p)
//	{
//		//if (p.m_Age == this->m_Age)
//		//	return true;
//		//else
//		//	return false;
//		return p.m_Age == this->m_Age;
//	}
//
//	string m_Name;
//	int m_Age;
//
//
//};
//
//void test01()
//{
//	vector<Person>v;
//	Person p1("胡",18);
//	Person p2("雨",18);
//	Person p3("娇", 18);
//	Person p4("小", 18);
//	Person p5("仙", 18);
//	Person p6("女", 18);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	int num = count(v.begin(), v.end(), p1);
//	cout << "num=  " << num << endl;
//
//
//}
//



//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//
//	string m_Name;
//	int m_Age;
//};
//
//class Greater35
//{
//public:
//	bool operator()(const Person &p)
//	{
//		return p.m_Age < 35;
//	}
//
//};
//
//class Greater
//{
//public:
//	bool operator()(int k)
//	{
//		return k > 10;
//	}
//};
//
//void test01()
//{
//	vector<Person>v;
//	vector<int>v1;
//	Person p1("阿僧", 28);
//	Person p2("阿僧", 58);
//	Person p3("阿僧", 28);
//	Person p4("阿僧", 68);
//	Person p5("阿僧", 88);
//	Person p6("阿僧", 8);
//	Person p7("阿僧", 38);
//	Person p8("阿僧", 28);
//	Person p9("阿僧", 15);
//	Person p10("阿僧", 19);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//	v.push_back(p7);
//	v.push_back(p8);
//	v.push_back(p9);
//	v.push_back(p10);
//
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(0);
//	v1.push_back(102);
//	v1.push_back(50);
//	v1.push_back(106);
//	v1.push_back(0);
//	v1.push_back(1);
//	v1.push_back(6);
//	v1.push_back(8);
//	v1.push_back(8);
//	v1.push_back(9);
//
//	v1.push_back(10);
//
//	int num = count_if(v.begin(), v.end(), Greater35());
//	cout << "年龄小于35   "<<num << endl;
//	num = count_if(v1.begin(), v1.end(), Greater());
//	cout << "大于10   " << num << endl;
//}
//
//

//void myPrint(int x)
//{
//	cout << x << " ";
//}
//
//class Daoxu
//{
//public:
//	bool operator()(int x,int y)
//	{
//		return 	  x > y;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(80);
//	v.push_back(0);
//	v.push_back(1);
//	v.push_back(15);
//	v.push_back(19);
//	v.push_back(12);
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//	sort(v.begin(), v.end(), Daoxu());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//}
//
//class myPrint
//{
//public:
//	void operator()(int x)
//	{
//		cout << x << " ";
//	}
//};
//
//void Print(int x)
//{
//	cout << x << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//
//	 vector<int>::iterator it=  merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	 for_each(vTarget.begin(), it, Print);
//	 cout << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//

//			  class Print
//{
//public:
//	void operator ()(int x)
//	{
//		cout << x << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(0);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(80);
//	v.push_back(20);
//
//	cout << "反转前" << endl;
//	for_each(v.begin(), v.end(), Print());
//	
//	cout << "反转后" << endl;
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Print());
//
//
//}
//	
//class Print
//{
//public:
//	void operator()(int x)
//	{
//		cout << x << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(0);
//	v.push_back(15);
//	v.push_back(19);
//	v.push_back(16);
//
//	vector<int>V;
//	V.resize(v.size());
//	copy(v.begin(), v.end(), V.begin());
//	for_each(v.begin(), v.end(), Print());
//	cout << "-------------------------------" << endl;
//	for_each(V.begin(), V.end(), Print());
//	cout << endl;
//
//}
//

//class Print
//{
//public:
//	void operator()(int x)
//	{
//		cout << x << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(60);
//	v.push_back(70);
//
//	cout << " 交换前 " << endl;
//	for_each(v.begin(), v.end(), Print());
//
//	cout << "------------------------------" << endl;
//	cout << "交换后" << endl;
//
//	replace(v.begin(), v.end(), 220, 1000);
//	for_each(v.begin(), v.end(), Print());
//}
//

//class Print
//{
//public:
//	void operator()(int x)
//	{
//		cout << x << " ";
//	}
//};
//
//class Greater20
//{
//public:
//	bool operator()(int x)
//	{
//		return x > 20;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(19);
//	v.push_back(15);
//	v.push_back(14);
//	v.push_back(121);
//	v.push_back(113);
//	v.push_back(50);
//	v.push_back(60);
//	v.push_back(75);
//	v.push_back(123);
//	v.push_back(9);
//
//	replace_if(v.begin(), v.end(), Greater20(), 999);
//	for_each(v.begin(), v.end(), Print());
//	
//
//}
//
#include<numeric>

//void Print(int x)
//{
//	cout << x << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(100 + i);
//	}
//
//	cout << " 交换前 " << endl;
//	for_each(v1.begin(), v1.end(), Print);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), Print);
//	cout << endl;
//
//	cout << " 交换后" << endl;
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), Print);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), Print);
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 1000; i++)
//		v.push_back(i);
//	int total = accumulate(v.begin(), v.end(),100000 );
//	cout << total << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//

//void test01()
//{
//
//	vector<int>v;
//	v.resize(100);
//	fill(v.begin(), v.end(), 999);
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//class Print
//{
//public:
//	void operator()(int x)
//	{
//		cout << x << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int>vTarget;
//
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	vector<int>::iterator itEnd =
//		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, Print());
//	cout << endl;
//
//
//}
//
//class Print
//{
//public:
//	void operator()(int x)
//	{
//		cout << x << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//
//	
//	vector<int>::iterator it=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin ());
//
//	for_each(vTarget.begin(), it, Print());
//	cout << endl;
//
//}
//
//
int main()
{
	//test01();
	int *p = nullptr;
	int *P = NULL;
	int i = 0;
	int j = 1;
	int &I = i;
	I = j;
	cout << I << endl;

	system("pause");
	return 0;
}