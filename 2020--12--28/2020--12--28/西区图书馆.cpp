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
//	//�Ǿ�̬��Ա����ռ����ռ�
//	int mA;
//	//��̬��Ա������ռ����ռ�
//	static int mB;
//	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//��̬��Ա����Ҳ��ռ����ռ�
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
//		//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
//		m_age = age;
//	}
//
//	Person& PersonAddPerson(Person p)
//	{
//		this->m_age += p.m_age;
//		//���ض�����
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
//��ָ����ʳ�Ա����
//class Person {
//public:
//
//	void ShowClassName() {
//		cout << "����Person��!" << endl;
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
//	p->ShowClassName(); //��ָ�룬���Ե��ó�Ա����
////	p->ShowPerson();  //���������Ա�������õ���thisָ�룬�Ͳ�������
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
//	cout << "����sb��" << endl;
//}
//	void show2(){
//		cout << "���" << xxxl << endl;
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
//	//thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
//	//�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
//	void ShowPerson() const {
//		//const Type* const pointer;
//		//this = NULL; //�����޸�ָ���ָ�� Person* const this;
//		//this->mA = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵ�
//
//		//const���γ�Ա��������ʾָ��ָ����ڴ�ռ�����ݲ����޸ģ�����mutable���εı���
//		this->m_B = 100;
//	}
//
//	void MyFunc()  const{
//		//mA = 10000;
//	}
//
//public:
//	int m_A;
//	mutable int m_B; //���޸� �ɱ��
//};
//
//
////const���ζ���  ������
//void test01() {
//
//	const Person person; //��������  
//	cout << person.m_A << endl;
//	//person.mA = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
//	person.m_B = 100; //���ǳ���������޸�mutable���γ�Ա����
//
//	//��������ʳ�Ա����
//	person.MyFunc(); //�������ܵ���const�ĺ���
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
	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
	friend void goodGay(Building &);

public:

	Building()
	{
		this->m_SittingRoom = "����";
		m_BedRoom = "����";
	}


public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
};


void goodGay(Building & A)
{
	cout << "�û������ڷ��ʣ� " << A .m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " <<A .m_BedRoom << endl;
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
//		cout << "���캯���ķ���   " << endl;
//	}
//	void Outdoor()
//	{
//		cout << "���ڷ��ʹ�������" <<outdoor<<endl;
//	}
//	void Indoor()
//	{
//		cout << "���ڷ���˽������" << indoor<<endl;
//	}
//
//public:
//	string outdoor="����";
//private:
//	string indoor="����";
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
//	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
//	friend class goodGay;
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom;//����
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";
//}
//
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
//	cout << "�û������ڷ���" << building->m_BedRoom << endl;
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
//	SettingRoom = "����";
//	BedRoom = "����";
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
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
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
//	cout << "p3��m_A  " << p3.m_A << endl << "p3��m_b" << p3.m_B << endl;
//	p4 = p1 * p2 ;
//	cout << "p4��m_A  " << p4.m_A << endl << "p4��m_b" << p4.m_B << endl;
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