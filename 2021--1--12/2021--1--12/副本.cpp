#define _CRT_SECURE_NO_WARNINGS 1
#include<queue>
#include<string>
#include<stack>
#include<vector>
#include<iostream>
#include<list>
using namespace std;

/*
����������ջ�������õĶ���ӿ�

���캯����

stack<T> stk; //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
stack(const stack &stk); //�������캯��
��ֵ������

stack& operator=(const stack &stk); //���صȺŲ�����
���ݴ�ȡ��

push(elem); //��ջ�����Ԫ��
pop(); //��ջ���Ƴ���һ��Ԫ��
top(); //����ջ��Ԫ��
��С������

empty(); //�ж϶�ջ�Ƿ�Ϊ��
size(); //����ջ�Ĵ�С
*/



//ջ�������ýӿ�
//void test01()
//{
//	//����ջ���� ջ������������Ƚ����
//	stack<int> s;
//
//	//��ջ�����Ԫ�أ����� ѹջ ��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//
//	while (!s.empty()) {
//		//���ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
//		//����ջ��Ԫ��
//		s.pop();
//	}
//	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
//
//}

/*
���캯����

queue<T> que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
queue(const queue &que); //�������캯��
��ֵ������

queue& operator=(const queue &que); //���صȺŲ�����
���ݴ�ȡ��

push(elem); //����β���Ԫ��
pop(); //�Ӷ�ͷ�Ƴ���һ��Ԫ��
back(); //�������һ��Ԫ��
front(); //���ص�һ��Ԫ��
��С������

empty(); //�ж϶�ջ�Ƿ�Ϊ��
size(); //����ջ�Ĵ�С
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
//	//��������
//	queue<Person> q;
//
//	//׼������
//	Person p1("��ɮ", 30);
//	Person p2("�����", 1000);
//	Person p3("��˽�", 900);
//	Person p4("ɳɮ", 800);
//
//	//����������Ԫ��  ��Ӳ���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//���в��ṩ������������֧���������	
//	while (!q.empty()) {
//		//�����ͷԪ��
//		cout << "��ͷԪ��-- ������ " << q.front().m_Name
//			<< " ���䣺 " << q.front().m_Age << endl;
//
//		cout << "��βԪ��-- ������ " << q.back().m_Name
//			<< " ���䣺 " << q.back().m_Age << endl;
//
//		cout << endl;
//		//������ͷԪ��
//		q.pop();
//	}
//
//	cout << "���д�СΪ��" << q.size() << endl;
//}
//

/*
list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
list(beg,end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
list(n,elem); //���캯����n��elem����������
list(const list &lst); //�������캯����
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
////�����ɾ��
//void test01()
//{
//	list<int> L;
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	printList(L);
//
//	//βɾ
//	L.pop_back();
//	printList(L);
//
//	//ͷɾ
//	L.pop_front();
//	printList(L);
//
//	//����
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//
//	//ɾ��
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//
//	//�Ƴ�
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//���
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
////��ת������
//void test01()
//{
//	list<int> L;
//	L.push_back(90);
//	L.push_back(30);
//	L.push_back(20);
//	L.push_back(70);
//	printList(L);
//
//	//��ת������Ԫ��
//	L.reverse();
//	printList(L);
//
//	//����
//	L.sort(); //Ĭ�ϵ�������� ��С����
//	printList(L);
//
//	L.sort(myCompare); //ָ�����򣬴Ӵ�С
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
//	string m_Name;  //����
//	int m_Age;      //����
//	int m_Height;   //���
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
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age
//			<< " ��ߣ� " << it->m_Height << endl;
//	}
//
//	cout << "---------------------------------" << endl;
//	L.sort(ComparePerson); //����
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age
//			<< " ��ߣ� " << it->m_Height << endl;
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
////����͸�ֵ
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
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ
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
////�����ɾ��
//void test01()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	//���
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
