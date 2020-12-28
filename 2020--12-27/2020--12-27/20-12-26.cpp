#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;
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

//class person
//{
//public:
//	person(){
//		cout << "无参构造函数     " << endl;
//	}
//	~person()
//	{
//		cout << "析构函数   《《《《《《" << endl;
//	}
//
//};
//
//void test02 ()
//{
//	person p;
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;														 
//
//}
//class Person {
//public:
//	//无参（默认）		   	构造函数
//	Person() {			   
//		cout << "无参构造函数!" << endl;
//	}
//	//有参构造函数
//	Person(int a) {
//		age = a;
//		cout << "有参构造函数!" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//	//析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int age;
//};
//
////2、构造函数的调用
////调用无参构造函数
//void test01() {
//	Person p; //调用无参构造函数
//}
//
////调用有参的构造函数
//void test02() {
//
//	//2.1  括号法，常用
//	Person p1(10);
//	//注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
//	//Person p2();
//
//	//2.2 显式法
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构
//
//	//2.3 隐式转换法
//	Person p4 = 10; // Person p4 = Person(10); 
//	Person p5 = p4; // Person p5 = Person(p4); 
//
//	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
//	//Person p5(p4);
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
//class Student{
//public:
//	Student(){
//		
//		cout << "无参函数   啦啦啦" << endl;
//}
//	~Student()
//	{
//		cout << "析构函数  了哩" << endl;
//	}
//	Student(int n)
//	{
//		age = n;
//		cout << "参数函数   “" << age << endl;
//	}
//	Student(const Student&p)
//	{
//		cout << "拷贝函数" << endl;
//	}
//private:
//	int age;
//};
//void rest01()
//{
//	//Student p1(10);
//	//Student p2(p1);
//	//Student p1 = Student(10);
//	//Student p2 = Student(p1);
//	Student p1 = 10;
//	Student p2 = p1;
//}
//int main()
//{
//
//	rest01();
//	system("pause");
//	return 0;
//}
//class Person {
//public:
//	Person() {
//		cout << "无参构造函数!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "有参构造函数!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		mAge = p.mAge;
//	}
//	//析构函数在释放内存之前调用
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int mAge;
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//
//	Person man(100); //p对象已经创建完毕
//	Person newman(man); //调用拷贝构造函数
//	Person newman2 = man; //拷贝构造
//
//	//Person newman3;
//	//newman3 = man; //不是调用拷贝构造函数，赋值操作
//}
//
////2. 值传递的方式给函数参数传值
////相当于Person p1 = p;
//void doWork(Person p1) {}
//void test02() {
//	Person p; //无参构造函数
//	doWork(p);
//}
//
////3. 以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int *)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int *)&p << endl;
//}
//
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
//#include<iostream>
//#include"Sales_item.h"
//using namespace std;
//int main()
//{
//	//std:cout << "Enter two numbers:" << std::endl;
//	//int v1 = 0, v2 = 0;
//	//std::cin >> v1 >> v2;
//	//std::cout << "The sum od" << v1 << "and" << v2 << "is" << v1 + v2<< endl;
//
//	//return 0;
//
////	cout << "/*";
////	cout << "*/";
////	cout <</*"*/"*/;
////	cout <</*"*/"/*"/*"*/;
//
//	Sales_item book;
//	cin >> book;
//	cout << book << endl;
//
//	return 0;
//}