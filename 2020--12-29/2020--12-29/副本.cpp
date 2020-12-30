#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;

//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//将年龄数据开辟到堆区
//		m_Age = new int(age);
//	}
//
//	//重载赋值运算符 
//	Person& operator=(Person &p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//编译器提供的代码是浅拷贝
//		//m_Age = p.m_Age;
//
//		//提供深拷贝 解决浅拷贝的问题
//		m_Age = new int(*p.m_Age);
//
//		//返回自身
//		return *this;
//	}
//
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//年龄的指针
//	int *m_Age;
//
//};
//
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3 = p2 = p1; //赋值操作
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//
//int main() {
//
//	test01();
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	//c = b = a;
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "c = " << c << endl;
//
//	system("pause");
//
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////
//class MyInteger {
//
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//前置++
//	MyInteger& operator++() {
//		//先++
//		m_Num++;
//		//再返回
//		return *this;
//	}
//
//	//后置++
//	MyInteger operator++(int) {
//		//先返回
//		MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
//		m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//
//ostream& operator<<(ostream& out, MyInteger myint) {
//	out << myint.m_Num;
//	return out;
//}
//
//
////前置++ 先++ 再返回
//void test01() {
//	MyInteger myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
//
////后置++ 先返回 再++
//void test02() {
//
//	MyInteger myInt;
//	cout << myInt++ << endl;
//	cout << myInt << endl;
//}
//
//int main() {
//
//	test01();
//	//test02();
//
//	system("pause");
//
//	return 0;
//}				 ///////////////////////////////////////////////////////////
//class Animal
//{
//public:
//	//Speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//
//};
////我们希望传入什么对象，那么就调用什么对象的函数
////如果函数地址在编译阶段就能确定，那么静态联编
////如果函数地址在运行阶段才能确定，就是动态联编
//
//void DoSpeak(Animal & animal)
//{
//	animal.speak();
//}
////
////多态满足条件： 
////1、有继承关系
////2、子类重写父类中的虚函数
////多态使用：
////父类指针或引用指向子类对象
//
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//
//
//	Dog dog;
//	DoSpeak(dog);
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