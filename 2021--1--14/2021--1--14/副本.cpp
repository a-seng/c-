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
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(3);
//
//	//���������ظ�Ԫ��
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end()) {
//		cout << "�Ҳ���!" << endl;
//	}
//	else {
//		cout << "�ҵ������ظ�Ԫ��Ϊ:" << *it << endl << *(it++) << endl;
//	}
//}
//

//������������
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	int num = count(v.begin(), v.end(), 4);
//
//	cout << "4�ĸ���Ϊ�� " << num << endl;
//}
//
////�Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person & p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("�����", 35);
//
//	int num = count(v.begin(), v.end(), p);
//	cout << "num = " << num << endl;
//}
//

//class Greater4
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 4;
//	}
//};
//
////������������
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	int num = count_if(v.begin(), v.end(), Greater4());
//
//	cout << "����4�ĸ���Ϊ�� " << num << endl;
//}
//
////�Զ�����������
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
//class AgeLess35
//{
//public:
//	bool operator()(const Person &p)
//	{
//		return p.m_Age < 35;
//	}
//};
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeLess35());
//	cout << "С��35��ĸ�����" << num << endl;
//}
//
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}
//

//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//sortĬ�ϴ�С��������
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//�Ӵ�С����
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
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

//class myPrint
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
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	vector<int> vtarget;
//	//Ŀ��������Ҫ��ǰ���ٿռ�
//	vtarget.resize(v1.size() + v2.size());
//	//�ϲ�  ��Ҫ������������
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
//	for_each(vtarget.begin(), vtarget.end(), myPrint());
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

//class myPrint
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
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	cout << "��תǰ�� " << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	cout << "��ת�� " << endl;
//
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
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

//class myPrint
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
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i + 1);
//	}
//	vector<int> v2;
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//

//class myPrint
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
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//�������е�20 �滻�� 2000
//	cout << "�滻��" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//

//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class ReplaceGreater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//�������д��ڵ��ڵ�30 �滻�� 3000
//	cout << "�滻��" << endl;
//	replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//

#include<numeric>

//class myPrint
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
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 100);
//	}
//
//	cout << "����ǰ�� " << endl;
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//
//	cout << "������ " << endl;
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//

//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++) {
//		v.push_back(i);
//	}
//
//	int total = accumulate(v.begin(), v.end(), 0);
//
//	cout << "total = " << total << endl;
//}

//class myPrint
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
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	//ȡ���������С��ֵ��Ŀ���������ٿռ�				 
//
//	vTarget.resize(min(v1.size(), v2.size()));
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
//	vector<int>::iterator itEnd =
//		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//

//class myPrint
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
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	//ȡ���������ĺ͸�Ŀ���������ٿռ�
//	vTarget.resize(v1.size() + v2.size());
//
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
//	vector<int>::iterator itEnd =
//		set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint());
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