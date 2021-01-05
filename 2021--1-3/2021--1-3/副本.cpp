#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<string>
#include<iostream>
////类模板
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
//	// 指定NameType 为string类型，AgeType 为 int类型
//	Person<string, int>P1("孙悟空", 999);
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
//	//类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成
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
//	//m.fun2();//编译会出错，说明函数调用才会去创建成员函数
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
////类模板
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
////1、指定传入的类型
//void printPerson1(Person<string, int> &p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person <string, int >p("孙悟空", 100);
//	printPerson1(p);
//}
//
////2、参数模板化
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	cout << "T1的类型为： " << typeid(T1).name() << endl;
//	cout << "T2的类型为： " << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person <string, int >p("猪八戒", 90);
//	printPerson2(p);
//}
//
////3、整个类模板化
//template<class T>
//void printPerson3(T & p)
//{
//	cout << "T的类型为： " << typeid(T).name() << endl;
//	p.showPerson();
//
//}
//void test03()
//{
//	Person <string, int >p("唐僧", 30);
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
////class Son:public Base  //错误，c++编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
//class Son :public Base<int> //必须指定一个类型
//{
//};
//void test01()
//{
//	Son c;
//}
//
////类模板继承类模板 ,可以用T2指定父类中的T类型
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
////类模板中成员函数类外实现
//template<class T1, class T2>
//class Person {
//public:
//	//成员函数类内声明
//	Person(T1 name, T2 age);
//	void showPerson();
//
//public:
//	T1 m_Name;
//	T2 m_Age;
//};
//
////构造函数 类外实现
//template<class t, class h>
//Person<t,h >::Person(t name, h age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////成员函数 类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "姓名: " << this->m_Name << " 年龄:" << this->m_Age << endl;
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
////#include "person.cpp" //解决方式1，包含cpp源文件
//
////解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
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
////2、全局函数配合友元  类外实现 - 先做函数模板声明，下方在做函数模板定义，在做友元
//template<class T1, class T2> class Person;
//
////如果声明了函数模板，可以将实现写到后面，否则需要将实现体写到类的前面让编译器提前看到
////template<class T1, class T2> void printPerson2(Person<T1, T2> & p); 
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> & p)
//{
//	cout << "类外实现 ---- 姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	//1、全局函数配合友元   类内实现
//	friend void printPerson(Person<T1, T2> & p)
//	{
//		cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
//	}
//
//
//	//全局函数配合友元  类外实现
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
////1、全局函数在类内实现
//void test01()
//{
//	Person <string, int >p("Tom", 20);
//	printPerson(p);
//}
//
//
////2、全局函数在类外实现
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