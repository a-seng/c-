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
/////////////////////////////////////////////////////////
//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//	void visit(); //ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
//	void visit2();
//
//private:
//	Building *building;
//};
//
//
//class Building
//{
//	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
//	friend void goodGay::visit();
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
//void goodGay::visit2()
//{
//	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
//	//cout << "�û������ڷ���" << building->m_BedRoom << endl;
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
//	//��Ա����ʵ�� + �����������
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
////ȫ�ֺ���ʵ�� + �����������
////Person operator+(const Person& p1, const Person& p2) {
////	Person temp(0, 0);
////	temp.m_A = p1.m_A + p2.m_A;
////	temp.m_B = p1.m_B + p2.m_B;
////	return temp;
////}
//
////��������� ���Է����������� 
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
//	//��Ա������ʽ
//	Person p3 = p2 + p1;  //�൱�� p2.operaor+(p1)
//	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;
//
//
//	Person p4 = p3 + 10; //�൱�� operator+(p3,10)
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
//	//��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч��
//	//void operator<<(Person& p){
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
//
////ȫ�ֺ���ʵ����������
////ostream����ֻ����һ��
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a:" << p.m_A << " b:" << p.m_B;
//	return out;
//}
//
//void test() {
//
//	Person p1(10, 20);
//
//	cout << p1 << "hello world" << endl; //��ʽ���
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