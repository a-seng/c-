#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<string>
#include<iostream>
////��ģ��
//template<class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->mName << " age: " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
//
//void test01()
//{
//	// ָ��NameType Ϊstring���ͣ�AgeType Ϊ int����
//	Person<string, int>P1("�����", 999);
//	P1.showPerson();
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
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	//��ģ���еĳ�Ա������������һ��ʼ�ʹ����ģ�������ģ�����ʱ������
//
//	void fun1() { obj.showPerson1(); }
//	void fun2() { obj.showPerson2(); }
//
//};
//
//void test01()
//{
//	MyClass<Person1> m;
//
//	m.fun1();
//
//	//m.fun2();//��������˵���������òŻ�ȥ������Ա����
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}		  /////////////////////////////////////////////////////////////////////////////
//#include <string>
////��ģ��
//template<class NameType, class AgeType >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->mName << " age: " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
//
////1��ָ�����������
//void printPerson1(Person<string, int> &p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person <string, int >p("�����", 100);
//	printPerson1(p);
//}
//
////2������ģ�廯
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	cout << "T1������Ϊ�� " << typeid(T1).name() << endl;
//	cout << "T2������Ϊ�� " << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person <string, int >p("��˽�", 90);
//	printPerson2(p);
//}
//
////3��������ģ�廯
//template<class T>
//void printPerson3(T & p)
//{
//	cout << "T������Ϊ�� " << typeid(T).name() << endl;
//	p.showPerson();
//
//}
//void test03()
//{
//	Person <string, int >p("��ɮ", 30);
//	printPerson3(p);
//}
//
//int main() {
//
//	test01();
//	test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}
		 ///////////////////////////////////////////////////////////////////////
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son:public Base  //����c++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳�
//class Son :public Base<int> //����ָ��һ������
//{
//};
//void test01()
//{
//	Son c;
//}
//
////��ģ��̳���ģ�� ,������T2ָ�������е�T����
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//};
//
//void test02()
//{
//	Son2<int, char> child1;
//}
//
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//
//#include <string>
//
////��ģ���г�Ա��������ʵ��
//template<class T1, class T2>
//class Person {
//public:
//	//��Ա������������
//	Person(T1 name, T2 age);
//	void showPerson();
//
//public:
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯�� ����ʵ��
//template<class t, class h>
//Person<t,h >::Person(t name, h age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա���� ����ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "����: " << this->m_Name << " ����:" << this->m_Age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//	p.showPerson();
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
//#include<iostream>
//using namespace std;
//
////#include "person.h"
////#include "person.cpp" //�����ʽ1������cppԴ�ļ�
//
////�����ʽ2����������ʵ��д��һ���ļ���׺����Ϊ.hpp
//#include "person.hpp"
//void test01()
//{
//	Person<string, int> p("Tom", 10);
//	p.showPerson();
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


//#include <string>
//
////2��ȫ�ֺ��������Ԫ  ����ʵ�� - ��������ģ���������·���������ģ�嶨�壬������Ԫ
//template<class T1, class T2> class Person;
//
////��������˺���ģ�壬���Խ�ʵ��д�����棬������Ҫ��ʵ����д�����ǰ���ñ�������ǰ����
////template<class T1, class T2> void printPerson2(Person<T1, T2> & p); 
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> & p)
//{
//	cout << "����ʵ�� ---- ������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	//1��ȫ�ֺ��������Ԫ   ����ʵ��
//	friend void printPerson(Person<T1, T2> & p)
//	{
//		cout << "������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
//	}
//
//
//	//ȫ�ֺ��������Ԫ  ����ʵ��
//	friend void printPerson2<>(Person<T1, T2> & p);
//
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//
//};
//
////1��ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person <string, int >p("Tom", 20);
//	printPerson(p);
//}
//
//
////2��ȫ�ֺ���������ʵ��
//void test02()
//{
//	Person <string, int >p("Jerry", 30);
//	printPerson2(p);
//}
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