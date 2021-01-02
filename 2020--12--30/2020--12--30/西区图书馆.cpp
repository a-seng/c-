#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;

//class UnionPart{
//public:
//	void top()
//	{
//		cout << "顶部输出   " << endl;
//	}
//	void left()
//	{
//		cout << "左边页码输出" << endl;
//	}
//	void footer()
//	{
//		cout << "底边页码输出" << endl;
//	}
//};
//
//class CPP: public UnionPart{
//public:
//	void content()
//	{
//		cout << "cPP输出" << endl;
//	}
//};
//
//class Python : public UnionPart{
//public:
//	void content()
//	{
//		cout << "Python输出" << endl;
//	}
//};
//
//class C : public UnionPart{
//public:
//	void content()
//	{
//		cout << "C输出" << endl;
//	}
//};
//
//
//void test01()
//{					
//	CPP cpp;
//	cpp.content();
//	cpp.top();
//	cpp.left();
//	cpp.footer();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Person
//{
//	friend class Son;
//	friend void test01();
//public:
//	int tele;
//protected:
//	string Lover;
//private:
//	string Xiaosan;
//};
//
//class Son :public Person
//{
//public:
//	Son()
//	{
//		tele = 500;
//		Lover = "sssss";
//		Xiaosan = "lll:"; 
//	}
//
//	
//};
//
//class Son2 :protected Person
//{
//	public:
//	Son2()
//	{
//		tele = 290;
//	}
//};
//
//void test01()
//{
//	Person p1;
//	p1.tele = 100;
//	Son2 s2;
//	s2.tele = 100;
//	Son son1;
//	son1.tele = 500;
//	son1.Lover = "llll";
//	cout << p1.tele << endl;
//	cout << p1.Lover << endl;
//	cout << son1.Lover << endl;
//	cout << son1.tele << endl;
//}
//
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
//};
//
////公共继承
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	cout << "sizeof Son = " << sizeof(Son) << endl;
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

//class one
//{
//public:
//	one()
//	{
//		cout << "one的构造函数" << endl;
//	}
//	~one()
//	{
//		cout << "one的析构函数" << endl;
//	}
//};
//class two :public one{
//
//public:
//	two()
//	{
//		cout << "two的构造函数" << endl;
//	}
//	~two()
//	{
//		cout << "two的析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	two s;
//	cout << sizeof(two) << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class One{
//public:
//	void func()
//	{
//		cout << "One下func 的调用" << endl;
//	}
//
//	void func3(int n)
//	{
//		cout << "One下 有参函数的调用" << endl;
//	}
//private:
//	void func2()
//	{
//		cout << "One下私有 函数的调用" << endl;
//	}
//	int one;
//};
//
//class Two :public One{
//public:
//	void func()
//	{
//		cout << "Two下func函数的调用" << endl;
//	}
//	void func3()
//	{
//		;
//	}
//};
//void test01()
//{
//	One o;
//	o.func();
//	Two w;
//	w.func();
//	w.One::func();
//	w.func3();
//	w.One::func3(6);
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
//class One{
//public:
//	static void func()
//	{
//		cout << "One 下func()函数的调用" << endl;
//	}
//	static void func(int n)
//	{
//		cout << "One 下func(有参函数)函数的调用" << endl;
//	}
//	static int m_One_A;
//	static int m_A;
//};
//int One::m_A = 100;
//int One::m_One_A = 500;
//
//
//class Two:public One {
//public:
//	static void func()
//	{
//		cout << "Two 下func()函数的调用" << endl;
//	}
//	static void func(int n)
//	{
//		cout << "Two 下func(有参函数)函数的调用" << endl;
//	}
//	static int m_One_A;
//	static int m_A;
//};
//
//int Two::m_A = 20;
//int Two::m_One_A = 50;
//  
//void test01()
//{
//	One o;
//	Two t;
//	t.func();
//	t.func(888);
//	cout << Two::One::m_A << endl;
//	cout << t.One::m_One_A << endl;
//	Two::One::func();
//	t.One::func();
//	//Two::One::func;
//}
//
//
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//class Animal
//{
//public:
//	int m_Age;
//};
//
////继承前加virtual关键字后，变为虚继承
////此时公共的父类Animal称为虚基类
//class Sheep : virtual public Animal {};
//class Tuo : virtual public Animal {};
//class SheepTuo : public Sheep, public Tuo {};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 100;
//	st.Tuo::m_Age = 200;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
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
//
//class Animal
//{
//public:
//	int m_Age;
//};
//
////继承前加virtual关键字后，变为虚继承
////此时公共的父类Animal称为虚基类
//class Sheep : virtual public Animal {};
//class Tuo : virtual public Animal {};
//class SheepTuo : public Sheep, public Tuo {};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 100;
//
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//	st.Tuo::m_Age = 200;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
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