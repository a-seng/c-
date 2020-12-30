#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;
/*
class Person{
public:
	Person()
	{
		;
	}
	Person(int n){
		m_Age =new int( n);
	}
	Person& operator=(Person &p)
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		this->m_Age = new int(*p.m_Age);
		return *this;
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	int *m_Age;
};
void test01()
{
	Person p1 (10);
	Person p2 (20);
	Person p3;
    p3= p2 = p1;
	cout << "p1的Age          " << *p1.m_Age<<endl;
	cout << "p2的Age          " << *p2.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;

//}*/
//
//class Person
//{
//	friend ostream  &operator<<(ostream &cout, Person p);
//public:
//	Person()
//	{
//		m_Age = 0;
//	}
//
//	Person& operator++()
//	{
//		this->m_Age++;
//		return *this;
//	}
//	Person& operator++(int)
//	{
//		 Person tmp =*this ;
//		++*this;
//		return tmp;
//	}
//
//private:
//	int m_Age;
//
//};
//ostream& operator<<(ostream &cout, Person p)
//{
//	cout << p.m_Age;
//	return cout;
//}
//
//void test01()
//{
//	Person p;
//	cout <<++(++p) << endl;
//	cout << p << endl;
//	cout << (p++)++ << endl;
//	cout << p << endl;
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
//class TMS
//{
//	friend ostream& operator<<(ostream &cout, TMS p);
//public:
//	TMS()
//	{
//		m_Age = 0;
//	}
//	TMS(int n)
//	{
//		m_Age = n;
//	}
//	TMS operator--(int)
//	{
//		TMS tmp = *this;
//		this->m_Age--;
//		return tmp;
//	}
//
//	TMS & operator--()
//	{
//		this->m_Age--;
//		return *this;
//	}
//private:
//	int m_Age;
//};
//ostream& operator<<(ostream &cout, TMS p)
//{
//	cout << p.m_Age;
//	return cout;
//}
//
//void test01()
//{
//	TMS p(100);
//	cout << --p << endl;//	cout << p << endl;//	cout<<--(--p) << endl;//	cout << p << endl;//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//公共页面
//class A
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//
//};
//
////Java页面
//class Java : public A
//{
//public:
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
////Python页面
//class Python : public A 
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP : public A 
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	//Java页面
//	cout << "Java下载视频页面如下： " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//
//	//Python页面
//	cout << "Python下载视频页面如下： " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//
//	//C++页面
//	cout << "C++下载视频页面如下： " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//
//
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



class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在冒泡" << endl;
	}
	int m_Age;
};

class Sheep :public Animal
{
public:
   void speak()
	{
		cout << "绵阳在说话" << endl;
	}
	int m_Age;

};

class Tuo :public Animal
{
public:
	void speak()
	{
		cout << "tuo在说话   " << endl;
	}
	int m_Age;
};

void DoSpeak(Animal &animal)
{
	animal.speak();
}
void test01()
{
	Sheep a;
	DoSpeak(a);
	a.Animal::speak();
	Tuo b;
	DoSpeak(b );

}

int main()
{
	test01();
	system("pause");
	return 0;
}