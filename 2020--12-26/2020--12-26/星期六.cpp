//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string>
//#include<iostream>
//using namespace std;
//
//////圆周率
////const double PI = 3.14;
////
//////1、封装的意义
//////将属性和行为作为一个整体，用来表现生活中的事物
////
//////封装一个圆类，求圆的周长
//////class代表设计一个类，后面跟着的是类名
////class Circle
////{
////public:  //访问权限  公共的权限
////
////	//属性
////	int m_r;//半径
////
////	//行为
////	//获取到圆的周长
////	double calculateZC()
////	{
////		//2 * pi  * r
////		//获取圆的周长
////		return  2 * PI * m_r;
////	}
////};
////
////int main() {
////
////	//通过圆类，创建圆的对象
////	// c1就是一个具体的圆
////	Circle c1;
////	cin; c1.m_r; //给圆对象的半径 进行赋值操作
////
////	//2 * pi * 10 = = 62.8
////	cout << "圆的周长为： " << c1.calculateZC() << endl;
////
////	system("pause");
////
////	return 0;
////}
////class Student {
////public:
////	void setName(string name) {
////		m_name = name;
////	}
////	void setID(int id) {
////		m_id = id;
////	}
////
////	void showStudent() {
////		cout << "name:" << m_name << " ID:" << m_id << endl;
////	}
////public:
////	string m_name;
////	int m_id;
////};
////
////int main() {
////	Student stu;
////	stu.setName("德玛西亚");
////	stu.setID(250);
////	stu.showStudent();
////	system("pause");
////	return 0;
////}
////class Student{
////public:
////	void setName(string name){
////		m_name = name;
////	}
////	void setID(int id)
////	{
////		m_id = id;
////	}
////	void showStudent(){
////		cout << "name:" << m_name << "ID:" << m_id << endl;
////	}
////public:		
////	string m_name;
////	int m_id;
////};
////int main()
////{
////	Student stu;
////	stu.setName("阿僧");
////	stu.setID(199);
////	stu.showStudent();
////	system("pause");
////	return 0;
////
////}
//class Person {
//public:
//
//	//姓名设置可读可写
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}								  
//	//获取年龄 
//	int getAge() {
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age) {
//		if (age < 0 || age > 150) {
//			cout << "你个老妖精!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//情人设置为只写
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //可读可写  姓名
//
//	int m_Age; //只读  年龄
//
//	string m_Lover; //只写  情人
//};
//
//
//int main() {
//
//	Person p;
//	//姓名设置
//	p.setName("张三");
//	cout << "姓名： " << p.getName() << endl;
//
//	//年龄设置
//	p.setAge(50);
//	cout << "年龄： " << p.getAge() << endl;
//
//	//情人设置
//	p.setLover("苍井");
//	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取
//
//	system("pause");
//
//	return 0;
//}