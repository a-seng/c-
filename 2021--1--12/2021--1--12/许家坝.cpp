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
//	cout << "���ǰ�Ĵ�С = " << s1.size() << endl;
//	while (!s1.empty())
//	{
//		cout << " ջ��Ԫ��Ϊ" << s1.top() << endl;
//		s1.pop();
//	}
//	cout << "�����Ĵ�С = " << s1.size() << endl;
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
//	Person p1("��ɮ", 18);
//	Person p2("�⸻��", 19);
//	Person p3("������", 20);
//	Person p4("�߻�", 18);
//	Person p5("������", 19);
//
//	q1.push(p1);
//	q1.push(p2);
//	q1.push(p3);
//	q1.push(p4);
//	q1.push(p5);
//
//	cout << "���ǰ q1�Ĵ�СΪ = " << q1.size() << endl;
//	while (!q1.empty())
//	{
//		cout << "ջ�� ����  ��" << q1.front().m_name << "���� = " << q1.front().m_age << endl;
//		cout << "ջ�� ����  ��" << q1.back().m_name << "���� = " << q1.back().m_age << endl;
//		q1.pop();
//	}
//	cout << "����� q1�Ĵ�СΪ = " << q1.size() << endl;
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
//		cout << " ���� ��" << (*it).m_Name << "���� ��" << (*it).m_Age << "���  ��" << (*it).m_Height << endl;
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
//	Person p1  ("��̩��", 19, 180);
//	Person p2  ("�Ž�", 19, 168);
//	Person p3  ("��  ��", 19, 167);
//	Person p4  ("���˾�", 18, 177);
//	Person p5  ("�Ѻ���", 21, 165);
//	Person p6  ("��ï��", 18, 173);
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
//		cout << "�ҵ���" << endl;
//		cout << "��Ԫ��Ϊ: " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
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
		cout << "����ɹ�" << (ret).second << endl;
	}
	else
		cout << "δ����ɹ�" << endl;
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << (ret).second << endl;
	}
	else
		cout << "δ����ɹ�" << endl;

	multiset<int>::iterator ret2 = s2.insert(10);
	if (*ret2)
	{
		cout << "����ɹ�" << *ret2 << endl;
	}
	else
		cout << "δ����ɹ�" << endl;
	ret2 = s2.insert(10);
	if (*ret2)
	{
		cout << "����ɹ�" << *ret2 << endl;
	}
	else
		cout << "δ����ɹ�" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
