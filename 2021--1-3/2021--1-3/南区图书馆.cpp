#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;
#include<string>
#include<iostream>

//template<class N ,class A=int>
//class Person
//{
//public:
//	Person(N name, A age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void ShowPerson()
//	{
//		cout << this->m_Age << endl << this->m_Name << endl;
//	}
//
//public:
//	N m_Name;
//	A m_Age;
//};
//
//void test()
//{
//	Person<int> p1(100, 18);
//	p1.ShowPerson();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//class Person1
//{
//public:
//	void ShowPerson1()
//	{
//		cout << "ShowPerson的调用" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void ShowPerson2()
//	{
//		cout << "ShowPerson的调用" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//
//public:
//	T obj;
//	void fun1(){
//		obj.ShowPerson1();
//	}
//	void fun2()
//	{
//		obj.ShowPerson2();
//	}
//};
//
//void test()
//{
//	MyClass <Person1>m;
//	m.fun1();  
////.fun2();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "名字为:>  " << m_name << endl << "年龄为:>  "<<m_age << endl;
//	}
//	NameType m_name;
//	AgeType m_age;
//};
//
//void printPerson1(Person <string, int>&p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person <string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
//
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	cout << "T1的类型为:" << typeid(T1).name()<<endl;
//	cout << "T2的类型为:" << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person <string, int >p("猪八戒", 99);
//	printPerson2(p);
//}
//
//template<class T>
//void printPerson3(T&p)
//{
//	p.showPerson();
//	cout << "T的类型为:" << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p("唐僧", 88);
//	printPerson3(p);
//}
//
//void test()
//{
//	test01();
//	test02();
//	test03();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//template<class T>
//class Bass
//{
//public:
//	T age;
//};
//
//template<class T1,class T2>
//class P :public Bass	<T1>
//{
//puclic:
//	T2 age2;
//};
//
//void test01()
//{
//	 P	<int, char>p1;
//	 p1.age = 100;
//
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}


//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 nema, T2 age);
//	void show();
//
//	T2 m_age;
//	T1 m_name;
//};
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	m_age = age;
//	m_name = name;
//}
//
//template <class T1,class T2>
//void Person<T1, T2>::show()
//{
//	cout << "show 函数的实现" << endl;
//}
//
//void test()
//{
//	Person <string, int>p1("孙悟空",19);
//	p1.show();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

template<class T1,class T2> class Person;

template<class T1, class T2>
void PrintPerson2(Person<T1, T2>&p);


template<class T1,class T2>
class Person
{

	friend void PrintPerson(Person<T1, T2>&p)
	{
		cout << "名字" << p.m_Name << "  年龄  " << p.m_Age << endl;
	}
	friend void PrintPerson2<>(Person<T1, T2>&p);
public:

	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};
template<class T1, class T2>
void PrintPerson2(Person<T1, T2>&p)
{
	cout << "名字" << p.m_Name << "  年龄  " << p.m_Age << endl;
}

void test01()
{
	Person <string, int>p1("阿僧1321", 18);
	PrintPerson2(p1);
}


void test()
{
	Person <string,int>p("阿僧",18);
	PrintPerson(p);
}

int main()
{
	test01();
	test();
	system("pause");
	return 0;
}