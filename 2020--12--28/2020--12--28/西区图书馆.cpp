#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//class Person {
//public:
//	Person() {
//		mA = 0;
//	}
//	int b;
//	char c;
//	double a;
//	//非静态成员变量占对象空间
//	int mA;
//	//静态成员变量不占对象空间
//	static int mB;
//	//函数也不占对象空间，所有函数共享一个函数实例
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//静态成员函数也不占对象空间
//	static void sfunc() {
//	}
//};
//
//int main() {
//
//	Person p1;
//	cout << sizeof(Person (p1.func)) << endl;
//
//	system("pause");
//
//	return 0;
//}
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//1、当形参和成员变量同名时，可用this指针来区分
//		m_age = age;
//	}
//
//	Person& PersonAddPerson(Person p)
//	{
//		this->m_age += p.m_age;
//		//返回对象本身
//		
//	return *this ;
//	}
//
//	int m_age;
//};
//
//void test01()
//{
//	Person p1(10);
//	cout << "p1.age = " << p1.m_age << endl;
//
//	Person p2(10);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "p2.age = " << p2.m_age << endl;
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

//class Person{
//public:
//	Person(int age)
//	{
//		m_age = age;
//	}
//
//	Person Personpp(Person p)
//	{
//		m_age += p.m_age;
//		return m_age;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Person p1(10);
//	cout << p1.m_age << endl;
//	Person p2(10);
//	p2.Personpp(p1).Personpp(p1).Personpp(p1).Personpp(p1);
//	cout << p2.m_age << endl;
//	cout << p2.Personpp(p1).Personpp(p1).Personpp(p1).Personpp(p1).m_age << endl;
//}
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//空指针访问成员函数
//class Person {
//public:
//
//	void ShowClassName() {
//		cout << "我是Person类!" << endl;
//	}
//
//	void ShowPerson() {
//	/*	if (this == NULL) {
//			return;
//		}*/
//		cout << mAge << endl;
//	}
//
//public:
//	int mAge;
//};
//
//void test01()
//{
//	Person * p = NULL;
//	p->ShowClassName(); //空指针，可以调用成员函数
////	p->ShowPerson();  //但是如果成员函数中用到了this指针，就不可以了
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


//class People
//{
//	public:
//	void show(){
//	cout << "我是sb类" << endl;
//}
//	void show2(){
//		cout << "你好" << xxxl << endl;
//	}
//	int xxxl;
//	
//};
//
//void test01()
//{
//	People * p1=NULL;
//	p1->show2();
////	p1.show2;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//class Person {
//public:
//	Person() {
//		m_A = 0;
//		m_B = 0;
//	}
//
//	//this指针的本质是一个指针常量，指针的指向不可修改
//	//如果想让指针指向的值也不可以修改，需要声明常函数
//	void ShowPerson() const {
//		//const Type* const pointer;
//		//this = NULL; //不能修改指针的指向 Person* const this;
//		//this->mA = 100; //但是this指针指向的对象的数据是可以修改的
//
//		//const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
//		this->m_B = 100;
//	}
//
//	void MyFunc()  const{
//		//mA = 10000;
//	}
//
//public:
//	int m_A;
//	mutable int m_B; //可修改 可变的
//};
//
//
////const修饰对象  常对象
//void test01() {
//
//	const Person person; //常量对象  
//	cout << person.m_A << endl;
//	//person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
//	person.m_B = 100; //但是常对象可以修改mutable修饰成员变量
//
//	//常对象访问成员函数
//	person.MyFunc(); //常对象不能调用const的函数
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
//
		  //////////////////////////////////////////////////////////////////////////////////////////////////////////
//class tms{
//public:
//	tms()
//	{
//		//A = 0;
//		B = 0;
//	}
//	void show1()
//	{
//		//A = 100;
//	}
//	void show()const{
//	//	A = 29;
//		//this = NULL;
//		cout << A << endl;
//		B = 200;
//		cout << B << endl;
//	}
//
//
//
//	const int A=100;
//	mutable int B;
//};
//
//
//void test01()
//{
//	const tms p;
//	p.show;
////	p.show1;
//	tms p;
//	p.show();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
///////////////////////////////////////////////////////////////////////
/*class Building
{
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGay(Building &);

public:

	Building()
	{
		this->m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
};


void goodGay(Building & A)
{
	cout << "好基友正在访问： " << A .m_SittingRoom << endl;
	cout << "好基友正在访问： " <<A .m_BedRoom << endl;
}


void test01()
{
	Building b;
	goodGay(b);
}

int main(){

	test01();

	system("pause");
	return 0;
}			 */
//////////////////////////////////////////////////////////////////////////////////////////
//class Tms
//
//{
//	friend void  k(Tms* p);
//public:
//	Tms(){
//		cout << "构造函数的访问   " << endl;
//	}
//	void Outdoor()
//	{
//		cout << "正在访问公共区域" <<outdoor<<endl;
//	}
//	void Indoor()
//	{
//		cout << "正在访问私有区域" << indoor<<endl;
//	}
//
//public:
//	string outdoor="客厅";
//private:
//	string indoor="卧室";
//};
//void  k(Tms& p)
//{
//	cout<<p.outdoor<<endl<<pindoor << endl;
//}
//void test01()
//{
//	Tms p;
//	k(p);
//	//p.Outdoor();
//	//p.Indoor();
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//////////////////////////////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////

//class Building{
//public:
//
//	Building();
//	string SettingRoom;
//private:
//	string BedRoom;
//	friend  class GoodGay;
//};
//
//class GoodGay{
//public:
//	GoodGay(){
//		building = new Building;
//	};
//	void visit();
//private:
//	Building*building;
//
//};
//Building::Building()
//{
//	SettingRoom = "客厅";
//	BedRoom = "卧室";
//}
//
//void GoodGay:: visit()
//{
//	cout << building->SettingRoom << endl;
//	cout << building->BedRoom << endl;
//
//}
//void test01()
//{
//	GoodGay tms;
//	tms.visit();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//////////////////////////////////////////////////////

//class GoodFriend;
//class Building;
//class Building{
//	friend void GoodFriend:: visit();
//public:
//
//	string m_SittingRoom;
//	Building();
//
//
//private:
//
//	string m_BedRoom;
//
//};
//
//class GoodFriend{
//public:
//	GoodFriend();
//	void visit();
//	void visit2();
//
//private:
//	Building* building;
//};
//
//GoodFriend::GoodFriend(){
//	building = new Building;
//}
//
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//void GoodFriend:: visit()
//{
//	cout << building->m_SittingRoom << endl;
//	cout << building->m_BedRoom << endl;
//
//}
//
//void GoodFriend::visit2(){
//	cout << building->m_SittingRoom << endl;
//}
//
//void test()
//{
//	GoodFriend tms;
//	tms.visit();
//	tms.visit2();
//}
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//

//class Person{
//public:
//	int m_A;
//	int m_B;
//	Person()
//	{
//		m_A = 100;
//		m_B = 100;
//	}
//	Person PersonAddPerson(Person &p)
//	{
//		Person tmp;
//		tmp.m_A = this->m_A + p.m_A;
//		tmp.m_B = this->m_B + p.m_B;
//		return tmp;
//	}
//};
//
//
//Person ADD(Person &p1, Person&p2)
//{
//	Person tmp;
//	tmp.m_A = p1.m_A + p2.m_B;
//	tmp.m_B = p1.m_B + p2.m_B;
//	return tmp;
//}
//void test01()
//{
//	Person p1;
//	Person p2;
//	Person p3=p1.PersonAddPerson(p1);
//	Person p4 = ADD(p1, p2);
//	cout << p3.m_A << "            " << p3.m_B << endl;
//	cout << p4.m_A << "            " << p4.m_B << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	int m_A;
//	int m_B;
//	Person()
//	{
//		m_A = 100;
//		m_B = 100;
//	}
//	Person operator*(Person &p)
//	{
//		Person tmp;
//		tmp.m_A = this->m_A * p.m_A ;
//		tmp.m_B = this->m_B * p.m_B ;
//		return tmp;
//	}
//
//};
//
////Person  operator+(Person &p1, Person &p2)
////{
////	Person tmp2;
////	tmp2.m_A = p1.m_A + p2.m_B;
////	tmp2.m_B = p1.m_B + p2.m_B;
////	return tmp2;
////
////}
//void test01()
//{
//	Person p1;
//	Person p2;
//	Person p3;
//	Person p4;
//	p3 = p1 * p2 ;
//	cout << "p3的m_A  " << p3.m_A << endl << "p3的m_b" << p3.m_B << endl;
//	p4 = p1 * p2 ;
//	cout << "p4的m_A  " << p4.m_A << endl << "p4的m_b" << p4.m_B << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////
class Person{
public:
	int m_A;
	int m_B;
	Person();

};
Person:: Person(){
	m_A = 100;
	m_B = 200;
}

//ostream& operator<<(Person &p, ostream& cout){
//	cout << p.m_A << endl<< p.m_B << endl;
//     return cout;
//
//}

void test01()
{
	Person p1;
	 p1<<cout;
}
int main()
{
	test01();



	system("pause");
	return 0;
}