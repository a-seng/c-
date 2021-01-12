#define _CRT_SECURE_NO_WARNINGS 1
#include<queue>
#include<string>
#include<stack>
#include<vector>
#include<iostream>
#include<list>
using namespace std;

//void test01()
//{
//	stack<int>s1;
//	s1.push(10);
//	s1.push(20);
//	s1.push(30);
//	s1.push(40);
//	
//	cout << "输出前的大小 = " << s1.size() << endl;
//	while (!s1.empty())
//	{
//		cout << " 栈顶元素为" << s1.top() << endl;
//		s1.pop();
//	}
//	cout << "输出后的大小 = " << s1.size() << endl;
//}
//

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//		
//	}
//
//	string m_name;
//	int m_age;
//};
//
//void test01()
//{
//	queue<Person>q1;
//	Person p1("阿僧", 18);
//	Person p2("吴富江", 19);
//	Person p3("孔子桥", 20);
//	Person p4("高辉", 18);
//	Person p5("杨新唐", 19);
//
//	q1.push(p1);
//	q1.push(p2);
//	q1.push(p3);
//	q1.push(p4);
//	q1.push(p5);
//
//	cout << "输出前 q1的大小为 = " << q1.size() << endl;
//	while (!q1.empty())
//	{
//		cout << "栈顶 姓名  ：" << q1.front().m_name << "年龄 = " << q1.front().m_age << endl;
//		cout << "栈底 姓名  ：" << q1.back().m_name << "年龄 = " << q1.back().m_age << endl;
//		q1.pop();
//	}
//	cout << "输出后 q1的大小为 = " << q1.size() << endl;
//}
//
//
//

//void printList(const list<int> &L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
//void test01()
//{
//	list<int >L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//
//	list<int>L2(L1);
//	printList(L2);
//
//	list<int>L3(L1.begin(), L1.end());
//	printList(L3);
//
//	list<int>L4 = L1;
//	printList(L4);
//
//	list<int>L5(10, 999);
//	printList(L5);
//
//}
//

//void printList(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	cout << *it << " ";
//	cout << endl;
//}
//
//bool myCompare(int val1, int val2)
//{
//	return val1 > val2;
//}
//
//void test01()
//{
//	list<int>l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	l.push_back(40);
//	printList(l);
//	l.reverse();
//	printList(l);
//
//	l.sort();
//	printList(l);
//
//	l.sort(myCompare);
//	printList(l);
//}

//class Person
//{
//public:
//
//	Person(string name, int age, int height)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
//void printList(const list<Person>&l)
//{
//	for (list <Person>::const_iterator it = l.begin(); it != l.end(); it++)
//		cout << " 名字 ：" << (*it).m_Name << "年龄 ：" << (*it).m_Age << "身高  ：" << (*it).m_Height << endl;
//	cout << "______________________________________" << endl;
//}
//
//bool myCompare(Person &p1, Person&p2)
//{
//	if (p1.m_Age == p2.m_Age)
//		return p1.m_Height > p2.m_Height;
//	else
//		return p1.m_Age < p2.m_Age;
//}
//
//void test01()
//{
//	list<Person> l;
//	Person p1  ("安泰慷", 19, 180);
//	Person p2  ("张金超", 19, 168);
//	Person p3  ("李  广", 19, 167);
//	Person p4  ("晏仕军", 18, 177);
//	Person p5  ("蒲海飞", 21, 165);
//	Person p6  ("田茂升", 18, 173);
//	l.push_back(p1);
//	l.push_front(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_front(p6);
//	printList(l);
//
//	l.reverse();
//	printList(l);
//
//	//l.sort();
//	//l.reverse();
//	//printList(l);
//
//	l.sort(myCompare);
//	printList(l);
//
//	
//
//}
#include<set>
//
//void printSet(const set<int>&s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(50);
//	s.insert(3);
//	printSet(s);
//
//	set<int>s1(s);
//	printSet(s1);
//
//	set<int>s2;
//	s2 = s1;
//	printSet(s2);
//
//}

//void printSet(const set<int>&s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//}
//
//void test01()
//{
//	set<int>s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	s.insert(1);
//	s.insert(9);
//	printSet(s);
//
//	set<int>::iterator pos = s.find(50);
//	if (pos != s.end())
//	{
//		cout << "找到了" << endl;
//		cout << "该元素为: " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	int num = s.count(10);
//	cout << " " << num << endl;
//	num = s.count(100);
//	cout << " " << num << endl;
//
//	//s.erase(s.begin());
//	//printSet(s);
//
//	//s.erase(30);
//	//printSet(s);
//
//	//s.erase(s.begin(), s.end());
//	//printSet(s);
//
//	//s.clear();
//}
//
//#include<pair>


void test01()
{
	set<int>s1;
	multiset<int>s2;
	//s1.insert(10);
	pair<set<int>::iterator, bool> ret = s1.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << (ret).second << endl;
	}
	else
		cout << "未插入成功" << endl;
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << (ret).second << endl;
	}
	else
		cout << "未插入成功" << endl;

	multiset<int>::iterator ret2 = s2.insert(10);
	if (*ret2)
	{
		cout << "插入成功" << *ret2 << endl;
	}
	else
		cout << "未插入成功" << endl;
	ret2 = s2.insert(10);
	if (*ret2)
	{
		cout << "插入成功" << *ret2 << endl;
	}
	else
		cout << "未插入成功" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
