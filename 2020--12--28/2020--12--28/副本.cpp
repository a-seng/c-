#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;
//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//	void visit();
//
//private:
//	Building *building;
//};
//
//
//class Building
//{
//	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
//	friend class goodGay;
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	goodGay gg;
//	gg.visit();
//
//}
//
//int main(){
//
//	test01();
//
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////
//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//	void visit(); //只让visit函数作为Building的好朋友，可以发访问Building中私有内容
//	void visit2();
//
//private:
//	Building *building;
//};
//
//
//class Building
//{
//	//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
//	friend void goodGay::visit();
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void goodGay::visit2()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	//cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	goodGay  gg;
//	gg.visit();
//
//}
//
//int main(){
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//
//class Person {
//public:
//	Person() {};
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//	//成员函数实现 + 号运算符重载
//	Person operator+(const Person& p) {
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//
//public:
//	int m_A;
//	int m_B;
//};
//
////全局函数实现 + 号运算符重载
////Person operator+(const Person& p1, const Person& p2) {
////	Person temp(0, 0);
////	temp.m_A = p1.m_A + p2.m_A;
////	temp.m_B = p1.m_B + p2.m_B;
////	return temp;
////}
//
////运算符重载 可以发生函数重载 
//Person operator+(const Person& p2, int val)
//{
//	Person temp;
//	temp.m_A = p2.m_A + val;
//	temp.m_B = p2.m_B + val;
//	return temp;
//}
//
//void test() {
//
//
//	Person p1(10, 10);
//	Person p2(20, 20);
//
//	//成员函数方式
//	Person p3 = p2 + p1;  //相当于 p2.operaor+(p1)
//	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;
//
//
//	Person p4 = p3 + 10; //相当于 operator+(p3,10)
//	cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;
//
//}
//
//int main() {
//
//	test();
//
//	system("pause");
//
//	return 0;
//}
///////////////////////////////////////////////////////////////////
//class Person {
//	friend ostream& operator<<(ostream& out, Person& p);
//
//public:
//
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//
//	//成员函数 实现不了  p << cout 不是我们想要的效果
//	//void operator<<(Person& p){
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
//
////全局函数实现左移重载
////ostream对象只能有一个
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a:" << p.m_A << " b:" << p.m_B;
//	return out;
//}
//
//void test() {
//
//	Person p1(10, 20);
//
//	cout << p1 << "hello world" << endl; //链式编程
//}
//
//int main() {
//
//	test();
//
//	system("pause");
//
//	return 0;
//}