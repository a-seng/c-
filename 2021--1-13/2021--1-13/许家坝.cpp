#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
#include<set>
using namespace std;

//void test01()
//{
//	pair<string, int>p("阿僧", 18);
//	pair<int, int >p2(18, 18);
//	cout << "姓名" << p.first << "  年龄  " << p.second << endl;
//	cout << p2.first << p2.second << endl;
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
//
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	set<int, MyCompare>s2;
//	s2.insert(10);
//	s2.insert(30);
//	s2.insert(20);
//	s2.insert(40);
//	s2.insert(50);
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//}
//

//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this-> m_Age = age;
//		this-> m_Name = name;
//	}
//
//	int m_Age;
//	string m_Name;
//};
//
//class myCompare
//{
//public:
//	bool operator()(const Person &p1, const Person &p2)
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person, myCompare>s1;
//	Person p1("阿僧", 18);
//	Person p2("孔子", 19);
//	Person p3("小吴", 20);
//	Person p4("辉哥", 19);
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//	for (set<Person, myCompare>::iterator it = s1.begin(); it != s1.end(); it++)
//		cout << "姓名  ：" << it->m_Name << "  年龄  " << it->m_Age << endl;
//	cout << endl;
//}
//
#include<map>
//
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=  " << (*it).first << "  num=  " << it->second << endl;
//	}
//	cout << "_______________________" << endl;
//}
//void test01()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int >(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//	
//	map<int, int>m2(m);
//	printMap(m2);
//
//	map<int, int>m3;
//	m3 = m;
//	printMap(m3);
//
//}
//

//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first << "    " << it->second << endl;
//	}
//	cout << "             _++_++++" << endl;
//}
//
//
//void test01()
//{
//	cout << " 交换前 ：" << endl;
//	map<int, int>m;
//	m.insert(pair<int,int>(1, 10 ));
//	m.insert(pair<int,int>(2, 20));
//	m.insert(pair<int,int>(3, 30));
//	m.insert(pair<int,int>(4, 40));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(5, 500));
//	m2.insert(pair<int, int>(6, 56000));
//	m2.insert(pair<int, int>(7, 700));
//	m2.insert(pair<int, int>(8, 800));
//	m2.insert(pair<int, int>(9, 900));
//	printMap(m);
//	printMap(m2);
//	m.swap(m2);
//	cout << " 交换后  :" << endl;
//	printMap(m);
//	printMap(m2);
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << " m不为空"<<endl;
//		cout << " m的大小为  =" << m.size() << endl;
//	}
//
//
//}
//
//
//void printMap(map<int, int >&m)
//{
//	for (map<int, int >::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << " key=  " << it->first << " num=   " << it->second << endl;
//	}
//	cout << "---------------------" << endl;;
//}
//
//void test01()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(make_pair(2, 29));
//	m1.insert(map<int, int>::value_type(3, 30));
//	m1[4] = 40;
//	printMap(m1);
//
//	m1[5] = 0;
//	cout << m1[6] << endl;;
//	
//	m1.erase(1);
//	printMap(m1);
//
//	m1.erase(m1.begin());
//	printMap(m1);
//
//	m1.erase(m1.begin(), m1.end());
//	printMap(m1);
//
//
//}
//

//void test01()
//{
//	map<int, int>m;
//	m.insert(make_pair(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m[3] = 30;
//	m.insert(map<int, int>::value_type(4, 40));
//
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "找到了 key=" << pos->first << " num '=" << pos->second << endl;
//	}
//	else
//		cout << " 未找到" << endl;
//
//	int num = m.count(2);
//	cout << "num= " << num << endl;
//
//}
//
//

//
//class MyCompare{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	map< int, int, MyCompare>m;
//	m.insert(make_pair(1, 10));
//	m.insert(pair<int,int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int,int>(4, 40));
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << " key = " << it->first << " 元素为=" << it->second << endl;
//	}
//
//}

//class Person
//{
//public:
//	Person(int age, int height, string name)
//	{
//		this->m_Age = age;
//		this->m_Height = height;
//		this->m_Name = name;
//	}
//
//	int m_Age;
//	int m_Height;
//	string m_Name;
//};
//
//class MyCompare
//{
//public:
//	
//	bool operator()(const Person&p1,const Person &p2) const
//	{
//		if (p1.m_Age != p2.m_Age)
//		{
//			return p1.m_Age < p2.m_Age;
//		}
//		else
//		{
//			return p1.m_Height>p2.m_Height;
//		}
//	}
//};
//
//void printMap(map<int, Person>&m)
//{
//	for (map<int, Person,MyCompare>::iterator it=m.begin(); it != m.end(); it++){
//		cout << "key= " << it->first << " 姓名 ：" << it->second.m_Name << "年龄 ="
//			<< it->second.m_Age << "身高 = " << it->second.m_Height << endl;
//	}
//	cout << "------------------------------------------" << endl;
//}
//
//void test01()
//{
//	map<int, Person, MyCompare>m;
//	Person p1(19, 182, "安泰慷");
//	Person p2(18, 173, "阿僧");
//	Person p3(18, 177, "晏仕军");
//	Person p4(20, 167, "阿飞");
//	Person p5(18, 168, "张超");
//	Person p6(19, 167, "李广");
//	m.insert(make_pair(1, p1));
//	m.insert(pair<int, Person>(2, p2));
//	m.insert(make_pair(3, p3));
//	m.insert(make_pair(4, p4));
//	m.insert(pair<int, Person>(5, p5));
//	m.insert(make_pair(6, p6));
//
//
//}
//

#include<ctime>
#include<vector>		  
//#define CHEHUA 0
//#define MEISHU 1
//#define YANFA 2

//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void creatWorker(vector<Worker>&v)
//{
//	string WorkerSeed = "ABCDEFG";
//	for (int i = 0; i < 10;i++)
//	{
//		Worker worker;
//		worker.m_Name = "员工";
//		worker.m_Name += WorkerSeed[i];
//
//		worker.m_Salary = 10000 % rand() + 10000;
//		v.push_back(worker);
//	}
//}
//
//void setWorker(vector<Worker>&v, multimap<int, Worker>&m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int ID = rand() % 3;
//		m.insert(make_pair(ID, *it));
//	}
//}
//
//void showWorker(multimap<int, Worker>&m)
//{
//	cout << "策划部门: " << endl;
//	multimap<int, Worker>::iterator pos = m.find(CHEHUA);
//	int count = m.count(CHEHUA);
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名 " << pos->second.m_Name << "工资" << pos->second.m_Salary << endl;
//
//	}
//	cout << "-----------------------------------" << endl;
//	cout << "美术部门: " << endl;
//    pos = m.find(MEISHU);
//    count = m.count(MEISHU);
//    index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名 " << pos->second.m_Name << "工资" << pos->second.m_Salary << endl;
//
//	}
//	cout << "-----------------------------------" << endl;
//	cout << "研发部门: " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名 " << pos->second.m_Name << "工资" << pos->second.m_Salary << endl;
//
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<Worker>vWorker;
//	creatWorker(vWorker);
//
//	multimap<int, Worker>mWorker;
//	setWorker(vWorker, mWorker);
//
//	showWorker(mWorker);
//	system("pause");
//	return 0;
//}


//#define CHEHUA 0
//#define MEISHU 1
//#define YANFA 2
//
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void creatVWorker(vector<Worker>&v)
//{
//	string name = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker work;
//		work.m_Name = "员工";
//		work.m_Name += name[i];
//		work.m_Salary = 10000 % rand() + 10000;
//		v.push_back(work);
//	}
//}					  
//
//void setVWorker(vector<Worker>&v, multimap<int, Worker>&m)
//{
//	for (vector< Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int ID = rand() % 3;
//		m.insert(make_pair(ID, *it));
//	}
//}
//
//void showWorker(multimap<int, Worker>&m)
//{
//	cout << "策划部门>>" << endl;
//	multimap<int,Worker>::iterator it = m.find(CHEHUA);
//	int index = m.count(CHEHUA);
//	int count = 0;
//	for (; it != m.end() && count < index; it++, count++)
//	{
//		cout << " 姓名" << it->second.m_Name << "  工资  ：" << it->second.m_Salary << endl;
//
//	}
//	cout << "--------------------------------" << endl;
//	cout << "美术部门>>" << endl;
//	 it = m.find(MEISHU);
//	 index = m.count(MEISHU);
//	 count = 0;
//	for (; it != m.end() && count < index; it++, count++)
//	{
//		cout << " 姓名" << it->second.m_Name << "  工资  ：" << it->second.m_Salary << endl;
//
//	}
//	cout << "--------------------------------" << endl;
//	cout << "研发部门>>" << endl;
//    m.find(YANFA);
//    index = m.count(YANFA);
//	count = 0;
//	for (; it != m.end() && count < index; it++, count++)
//	{
//		cout << " 姓名" << it->second.m_Name << "  工资  ：" << it->second.m_Salary << endl;
//
//	}
//}
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<Worker>vWorker;
//	creatVWorker(vWorker);
//
//	multimap<int, Worker>mWorker;
//	setVWorker(vWorker,mWorker);
//
//	showWorker(mWorker);
//	system("pause");
//	return 0;
//
//
//
//}

//class MyAdd
//{
//public:
//	int operator ()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10) << endl;
//}
//
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
//		count++;
//	}
//	int count;
//};
//void test02()
//{
//	MyPrint p;
//	p("sb");
//	p("就是你");
//	cout << "输出了 " << p.count << "次" << endl;
//
//
//}
//void doPrint(MyPrint &p, string test)
//{
//	p.operator()(test);
//}
//
//void test03()
//{
//	MyPrint p;
//	doPrint(p,"Hello c++");
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}
#include<algorithm>
//
//class GreaterEight
//{
//public:
//	bool operator() (int x)
//	{
//		return x > 8;
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
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterEight());
//	if (it != v.end())
//	{
//		cout << " 找到了" << endl;
//		cout << *it << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//}
//
//class MyCompare
//{
//public:
//	bool operator()(int x, int y)
//	{
//		return x > y;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(39);
//	v.push_back(20);
//	v.push_back(15);
//	v.push_back(28);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	cout << "-------------------------------" << endl;
//	sort(v.begin(), v.end(), MyCompare());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//

#include<functional>
//
//void test01()
//{ 
//	negate<int>n;
//	cout << n(50) << endl;
//
//	plus<int>k;
//	cout << k(100, 200) << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
/*
template<class T> bool equal_to<T> //等于
template<class T> bool not_equal_to<T> //不等于
template<class T> bool greater<T> //大于
template<class T> bool greater_equal<T> //大于等于
template<class T> bool less<T> //小于
template<class T> bool less_equal<T> //小于等于
*/

//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(100);
//	v.push_back(2000);
//	v.push_back(1);
//	v.push_back(200);
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	sort(v.begin(), v.end(), less<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//}
//

//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(0);
//	v.push_back(7);
//	v.push_back(20);
//	v.push_back(100);
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout <<"---------------------------------"<< endl;
//	vector<int>v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(), logical_not<int>());
//
//
//	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	
//
//}

//void print(int k)
//{
//	cout << k << " ";
//}
//
//class print2
//{
//public:
//	void operator()(int k)
//	{
//		cout << k << " ";
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
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print2());
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//class Transform
//{
//public:
//	int operator()(int x)
//	{
//		return x;
//	}
//};
//
//class MyPrint
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
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	v2.resize(v.size());
//
//	transform(v.begin(), v.end(), v2.begin(), Transform());
//	for_each(v2.begin(), v2.end(), MyPrint());
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//
//	}
//	bool operator==(const Person&p)
//	{
//		if (p.m_Age == this->m_Age  &&  p.m_Name == this->m_Name)
//			return true;
//		else
//			return false;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person>v;
//	Person p1("胡", 19);
//	Person 	p2("雨", 19);
//	Person p3("娇", 19);
//	Person p4("cao", 20);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p4);
//	if (it == v.end())
//	{
//		cout << " 未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了 " << it->m_Age << "   " << it->m_Name << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person &p)
	{
		if (p.m_Age == this->m_Age  &&  p.m_Name == this->m_Name)
			return true;
		else
			return false;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person>v;
	Person p1("阿僧",18);
	Person p2("孔子", 19);
	Person p3("你大爷", 209);
	Person p4("小吴", 19);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	Person p5("安", 19);
	Person p6("阿僧", 18);
	vector<Person>::iterator it = find(v.begin(), v.end(), p5);	if (it == v.end())	{		cout << "未找到" << endl;	}	else	{		cout << "找到了 " << it->m_Age << "---------" << it->m_Name << endl;	}	it = find(v.begin(), v.end(), p6);	if (it == v.end())	{		cout << "未找到" << endl;	}	else	{		cout << "找到了 " << it->m_Age << "---------" << it->m_Name << endl;	} 

}

int main()
{
	test01();
	system("pause");
	return 0;
}