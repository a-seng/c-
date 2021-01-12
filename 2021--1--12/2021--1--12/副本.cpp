#define _CRT_SECURE_NO_WARNINGS 1
#include<queue>
#include<string>
#include<stack>
#include<vector>
#include<iostream>
#include<list>
using namespace std;

/*
功能描述：栈容器常用的对外接口

构造函数：

stack<T> stk; //stack采用模板类实现， stack对象的默认构造形式
stack(const stack &stk); //拷贝构造函数
赋值操作：

stack& operator=(const stack &stk); //重载等号操作符
数据存取：

push(elem); //向栈顶添加元素
pop(); //从栈顶移除第一个元素
top(); //返回栈顶元素
大小操作：

empty(); //判断堆栈是否为空
size(); //返回栈的大小
*/



//栈容器常用接口
//void test01()
//{
//	//创建栈容器 栈容器必须符合先进后出
//	stack<int> s;
//
//	//向栈中添加元素，叫做 压栈 入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//
//	while (!s.empty()) {
//		//输出栈顶元素
//		cout << "栈顶元素为： " << s.top() << endl;
//		//弹出栈顶元素
//		s.pop();
//	}
//	cout << "栈的大小为：" << s.size() << endl;
//
//}

/*
构造函数：

queue<T> que; //queue采用模板类实现，queue对象的默认构造形式
queue(const queue &que); //拷贝构造函数
赋值操作：

queue& operator=(const queue &que); //重载等号操作符
数据存取：

push(elem); //往队尾添加元素
pop(); //从队头移除第一个元素
back(); //返回最后一个元素
front(); //返回第一个元素
大小操作：

empty(); //判断堆栈是否为空
size(); //返回栈的大小
*/
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
//	string m_Name;
//	int m_Age;
//};
//
//void test01() {
//
//	//创建队列
//	queue<Person> q;
//
//	//准备数据
//	Person p1("唐僧", 30);
//	Person p2("孙悟空", 1000);
//	Person p3("猪八戒", 900);
//	Person p4("沙僧", 800);
//
//	//向队列中添加元素  入队操作
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//队列不提供迭代器，更不支持随机访问	
//	while (!q.empty()) {
//		//输出队头元素
//		cout << "队头元素-- 姓名： " << q.front().m_Name
//			<< " 年龄： " << q.front().m_Age << endl;
//
//		cout << "队尾元素-- 姓名： " << q.back().m_Name
//			<< " 年龄： " << q.back().m_Age << endl;
//
//		cout << endl;
//		//弹出队头元素
//		q.pop();
//	}
//
//	cout << "队列大小为：" << q.size() << endl;
//}
//

/*
list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
list(beg,end); //构造函数将[beg, end)区间中的元素拷贝给本身。
list(n,elem); //构造函数将n个elem拷贝给本身。
list(const list &lst); //拷贝构造函数。
*/

//void printList(const list<int>& L) {
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	list<int>L3(L2);
//	printList(L3);
//
//	list<int>L4(10, 1000);
//	printList(L4);
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
//void printList(const list<int>& L) {
//																											
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////插入和删除
//void test01()
//{
//	list<int> L;
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	printList(L);
//
//	//尾删
//	L.pop_back();
//	printList(L);
//
//	//头删
//	L.pop_front();
//	printList(L);
//
//	//插入
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//
//	//删除
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//清空
//	L.clear();
//	printList(L);
//}



//void printList(const list<int>& L) {
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool myCompare(int val1, int val2)
//{
//	return val1 > val2;
//}
//
////反转和排序
//void test01()
//{
//	list<int> L;
//	L.push_back(90);
//	L.push_back(30);
//	L.push_back(20);
//	L.push_back(70);
//	printList(L);
//
//	//反转容器的元素
//	L.reverse();
//	printList(L);
//
//	//排序
//	L.sort(); //默认的排序规则 从小到大
//	printList(L);
//
//	L.sort(myCompare); //指定规则，从大到小
//	printList(L);
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
//
//class Person {
//public:
//	Person(string name, int age, int height) {
//		m_Name = name;
//		m_Age = age;
//		m_Height = height;
//	}
//
//public:
//	string m_Name;  //姓名
//	int m_Age;      //年龄
//	int m_Height;   //身高
//};
//
//
//bool ComparePerson(Person& p1, Person& p2) {
//
//	if (p1.m_Age == p2.m_Age) {
//		return p1.m_Height  > p2.m_Height;
//	}
//	else
//	{
//		return  p1.m_Age < p2.m_Age;
//	}
//
//}
//
//void test01() {
//
//	list<Person> L;
//
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age
//			<< " 身高： " << it->m_Height << endl;
//	}
//
//	cout << "---------------------------------" << endl;
//	L.sort(ComparePerson); //排序
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age
//			<< " 身高： " << it->m_Height << endl;
//	}
//}
//
#include<set>





//
//void printSet(set<int> & s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////构造和赋值
//void test01()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//

//void printSet(set<int> & s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////插入和删除
//void test01()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	s1.erase(s1.begin(), s1.end());
////	s1.clear();
//	printSet(s1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
