#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;
////Java页面
//
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
//公共页面
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

//void myClass2()
//{
//	Son2 s;
//	//s.m_A; //不可访问
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A; //可访问 private权限
//		m_B; //可访问 private权限
//		//m_C; //不可访问
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};

//class Son : public Base {
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//public:
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "Son下的m_A = " << s.m_A << endl;
//	cout << "Base下的m_A = " << s.Base::m_A << endl;
//
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//
//}


////////////////////////////////////////////////
//同名成员属性
//void test01()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	cout << "Son  下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son  下 m_A = " << Son::m_A << endl;
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//}
//
////同名成员函数
//void test02()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Base::func();
//	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
//	Son::Base::func(100);
//}