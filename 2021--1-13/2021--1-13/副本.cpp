#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
#include<set>
using namespace std;



//对组创建
//void test01()
//{
//	pair<string, int> p("Tom", 20);
//	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;
//
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
//}
//


//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) {
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(50);
//
//	//默认从小到大
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则
//	set<int, MyCompare> s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(50);
//
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
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
//	string m_Name;
//	int m_Age;
//
//};
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person &p2)
//	{
//		//按照年龄进行排序  降序
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person, comparePerson> s;
//
//	Person p1("刘备", 23);
//	Person p2("关羽", 27);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
//	}
//}
//
#include<map>


//
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m; //默认构造
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	printMap(m);
//
//	map<int, int>m2(m); //拷贝构造
//	printMap(m2);
//
//	map<int, int>m3;
//	m3 = m2; //赋值
//	printMap(m3);
//}
//
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//插入
//	map<int, int> m;
//	//第一种插入方式
//	m.insert(pair<int, int>(1, 10));
//	//第二种插入方式
//	m.insert(make_pair(2, 20));
//	//第三种插入方式
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种插入方式
//	m[4] = 40;
//	printMap(m);
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);
//	printMap(m);
//
//	//清空
//	m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//

//查找和统计
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	//查找
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//


//class MyCompare {
//public:
//	bool operator()(int v1, int v2) {
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	//默认从小到大排序
//	//利用仿函数实现从大到小排序
//	map<int, int, MyCompare> m;
//
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key:" << it->first << " value:" << it->second << endl;
//	}
//}
//
//
/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/
//#include<vector>
//#include<ctime>
//
//
//#define CEHUA  0
//#define MEISHU 1
//#define YANFA  2
//
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void createWorker(vector<Worker>&v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "员工";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
//		//将员工放入到容器中
//		v.push_back(worker);
//	}
//}
//
////员工分组
//void setGroup(vector<Worker>&v, multimap<int, Worker>&m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门编号
//		int deptId = rand() % 3; // 0 1 2 
//
//		//将员工插入到分组中
//		//key部门编号，value具体员工
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGourp(multimap<int, Worker>&m)
//{
//	// 0  A  B  C   1  D  E   2  F G ...
//	cout << "策划部门：" << endl;
//
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA); // 统计具体人数
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "美术部门： " << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU); // 统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "研发部门： " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA); // 统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1、创建员工
//	vector<Worker>vWorker;
//	createWorker(vWorker);
//
//	//2、员工分组
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//
//	//3、分组显示员工
//	showWorkerByGourp(mWorker);
//
//	//测试
//		//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//		//{
//		//	cout << "姓名： " << it->m_Name << " 工资： " << it->m_Salary << endl;
//		//}
//
//		system("pause");
//
//	return 0;
//}


//1、函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
//
////2、函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++; //统计使用次数
//	}
//
//	int count; //内部自己的状态
//};
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	cout << "myPrint调用次数为： " << myPrint.count << endl;
//}
//
////3、函数对象可以作为参数传递
//void doPrint(MyPrint &mp, string test)
//{
//	mp(test);
//}
//
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "Hello C++");
//}
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}

#include <vector>
#include <algorithm>
//
////1.一元谓词
//struct GreaterFive{
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end()) {
//		cout << "没找到!" << endl;
//	}
//	else {
//		cout << "找到:" << *it << endl;
//	}
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


//二元谓词
//class MyCompare
//{
//public:
//	bool operator()(int num1, int num2)
//	{
//		return num1 > num2;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//
//	//默认从小到大
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "----------------------------" << endl;
//
//	//使用函数对象改变算法策略，排序从大到小
//	sort(v.begin(), v.end(), MyCompare());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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

/*
仿函数原型：

template<class T> T plus<T> //加法仿函数
template<class T> T minus<T> //减法仿函数
template<class T> T multiplies<T> //乘法仿函数
template<class T> T divides<T> //除法仿函数
template<class T> T modulus<T> //取模仿函数
template<class T> T negate<T> //取反仿函数
*/
#include<functional>
////negate
//void test01()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//}
//
////plus
//void test02()
//{
//	plus<int> p;
//	cout << p(10, 20) << endl;
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//自己实现仿函数
//	//sort(v.begin(), v.end(), MyCompare());
//	//STL内建仿函数  大于仿函数
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
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


/*
template<class T> bool logical_and<T> //逻辑与
template<class T> bool logical_or<T> //逻辑或
template<class T> bool logical_not<T> //逻辑非
*/

//void test01()
//{
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//逻辑非  将v容器搬运到v2中，并执行逻辑非运算
//	vector<bool> v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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

//普通函数
//void print01(int val)
//{
//	cout << val << " ";
//}
//函数对象
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
////for_each算法基本用法
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//遍历算法
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
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

//常用遍历算法  搬运 transform
//
//class TransForm
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vTarget; //目标容器
//
//	vTarget.resize(v.size()); // 目标容器需要提前开辟空间
//
//	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
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
//
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i + 1);
//	}
//	//查找容器中是否有 5 这个元素
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "没有找到!" << endl;
//	}
//	else
//	{
//		cout << "找到:" << *it << endl;
//	}
//}
//
//class Person {
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	//重载==
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void test02() {
//
//	vector<Person> v;
//
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	if (it == v.end())
//	{
//		cout << "没有找到!" << endl;
//	}
//	else
//	{
//		cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
//	}
//}																	  
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}