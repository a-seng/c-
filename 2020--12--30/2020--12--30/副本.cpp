#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//class BasePage
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
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
////Python页面
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A; //可访问 public权限
//		m_B; //可访问 protected权限
//		//m_C; //不可访问
//	}
//};
//
//void myClass()
//{
//	Son1 s1;
//	s1.m_A; //其他类只能访问到公共权限
//}
//
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A; //可访问 protected权限
//		m_B; //可访问 protected权限
//		//m_C; //不可访问
//	}
////};
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数!" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构函数!" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数!" << endl;
//	}
//	~Son()
//	{
//		cout << "Son析构函数!" << endl;
//	}
//
//};
//
//
//void test01()
//{
//	//继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//	Son s;
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
////////////////////////////////////////////////////////////////////////////////////
//class Base {
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//
//public:
//	int m_A;
//};
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}

//class Base {
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//
//	static int m_A;
//};
//
//int Base::m_A = 100;
//
//class Son : public Base {
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//
//int Son::m_A = 200;
//
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}