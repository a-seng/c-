#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
#include<set>
using namespace std;



//���鴴��
//void test01()
//{
//	pair<string, int> p("Tom", 20);
//	cout << "������ " << p.first << " ���䣺 " << p.second << endl;
//
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
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
//	//Ĭ�ϴ�С����
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//ָ���������
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
//		//���������������  ����
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person, comparePerson> s;
//
//	Person p1("����", 23);
//	Person p2("����", 27);
//	Person p3("�ŷ�", 25);
//	Person p4("����", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
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
//	map<int, int>m; //Ĭ�Ϲ���
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	printMap(m);
//
//	map<int, int>m2(m); //��������
//	printMap(m2);
//
//	map<int, int>m3;
//	m3 = m2; //��ֵ
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
//	//����
//	map<int, int> m;
//	//��һ�ֲ��뷽ʽ
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��ֲ��뷽ʽ
//	m.insert(make_pair(2, 20));
//	//�����ֲ��뷽ʽ
//	m.insert(map<int, int>::value_type(3, 30));
//	//�����ֲ��뷽ʽ
//	m[4] = 40;
//	printMap(m);
//
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);
//	printMap(m);
//
//	//���
//	m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//

//���Һ�ͳ��
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	//����
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
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
//	//Ĭ�ϴ�С��������
//	//���÷º���ʵ�ִӴ�С����
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
- ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
- Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
- �����10��Ա�����䲿�ź͹���
- ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
- �ֲ�����ʾԱ����Ϣ
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
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
//		//��Ա�����뵽������
//		v.push_back(worker);
//	}
//}
//
////Ա������
//void setGroup(vector<Worker>&v, multimap<int, Worker>&m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ű��
//		int deptId = rand() % 3; // 0 1 2 
//
//		//��Ա�����뵽������
//		//key���ű�ţ�value����Ա��
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGourp(multimap<int, Worker>&m)
//{
//	// 0  A  B  C   1  D  E   2  F G ...
//	cout << "�߻����ţ�" << endl;
//
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA); // ͳ�ƾ�������
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "�������ţ� " << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU); // ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "�з����ţ� " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA); // ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1������Ա��
//	vector<Worker>vWorker;
//	createWorker(vWorker);
//
//	//2��Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//
//	//3��������ʾԱ��
//	showWorkerByGourp(mWorker);
//
//	//����
//		//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//		//{
//		//	cout << "������ " << it->m_Name << " ���ʣ� " << it->m_Salary << endl;
//		//}
//
//		system("pause");
//
//	return 0;
//}


//1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
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
////2����������������Լ���״̬
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
//		count++; //ͳ��ʹ�ô���
//	}
//
//	int count; //�ڲ��Լ���״̬
//};
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	cout << "myPrint���ô���Ϊ�� " << myPrint.count << endl;
//}
//
////3���������������Ϊ��������
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
////1.һԪν��
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
//		cout << "û�ҵ�!" << endl;
//	}
//	else {
//		cout << "�ҵ�:" << *it << endl;
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


//��Ԫν��
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
//	//Ĭ�ϴ�С����
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "----------------------------" << endl;
//
//	//ʹ�ú�������ı��㷨���ԣ�����Ӵ�С
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
�º���ԭ�ͣ�

template<class T> T plus<T> //�ӷ��º���
template<class T> T minus<T> //�����º���
template<class T> T multiplies<T> //�˷��º���
template<class T> T divides<T> //�����º���
template<class T> T modulus<T> //ȡģ�º���
template<class T> T negate<T> //ȡ���º���
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
//	//�Լ�ʵ�ַº���
//	//sort(v.begin(), v.end(), MyCompare());
//	//STL�ڽ��º���  ���ڷº���
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
template<class T> bool logical_and<T> //�߼���
template<class T> bool logical_or<T> //�߼���
template<class T> bool logical_not<T> //�߼���
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
//	//�߼���  ��v�������˵�v2�У���ִ���߼�������
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

//��ͨ����
//void print01(int val)
//{
//	cout << val << " ";
//}
//��������
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
////for_each�㷨�����÷�
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����㷨
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

//���ñ����㷨  ���� transform
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
//	vector<int>vTarget; //Ŀ������
//
//	vTarget.resize(v.size()); // Ŀ��������Ҫ��ǰ���ٿռ�
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
//	//�����������Ƿ��� 5 ���Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�:" << *it << endl;
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
//	//����==
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
//	//��������
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
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�����:" << it->m_Name << " ����: " << it->m_Age << endl;
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