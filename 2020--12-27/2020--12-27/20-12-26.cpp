#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	//��������
//	~Person()
//	{
//		cout << "Person��������������" << endl;
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
//		cout << "�޲ι��캯��     " << endl;
//	}
//	~person()
//	{
//		cout << "��������   ������������" << endl;
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
//	//�޲Σ�Ĭ�ϣ�		   	���캯��
//	Person() {			   
//		cout << "�޲ι��캯��!" << endl;
//	}
//	//�вι��캯��
//	Person(int a) {
//		age = a;
//		cout << "�вι��캯��!" << endl;
//	}
//	//�������캯��
//	Person(const Person& p) {
//		age = p.age;
//		cout << "�������캯��!" << endl;
//	}
//	//��������
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int age;
//};
//
////2�����캯���ĵ���
////�����޲ι��캯��
//void test01() {
//	Person p; //�����޲ι��캯��
//}
//
////�����вεĹ��캯��
//void test02() {
//
//	//2.1  ���ŷ�������
//	Person p1(10);
//	//ע��1�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������
//	//Person p2();
//
//	//2.2 ��ʽ��
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//	//Person(10)����д������������  ��ǰ�н���֮����������
//
//	//2.3 ��ʽת����
//	Person p4 = 10; // Person p4 = Person(10); 
//	Person p5 = p4; // Person p5 = Person(p4); 
//
//	//ע��2���������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������
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
//		cout << "�޲κ���   ������" << endl;
//}
//	~Student()
//	{
//		cout << "��������  ����" << endl;
//	}
//	Student(int n)
//	{
//		age = n;
//		cout << "��������   ��" << age << endl;
//	}
//	Student(const Student&p)
//	{
//		cout << "��������" << endl;
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
//		cout << "�޲ι��캯��!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "�вι��캯��!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "�������캯��!" << endl;
//		mAge = p.mAge;
//	}
//	//�����������ͷ��ڴ�֮ǰ����
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int mAge;
//};
//
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//
//	Person man(100); //p�����Ѿ��������
//	Person newman(man); //���ÿ������캯��
//	Person newman2 = man; //��������
//
//	//Person newman3;
//	//newman3 = man; //���ǵ��ÿ������캯������ֵ����
//}
//
////2. ֵ���ݵķ�ʽ������������ֵ
////�൱��Person p1 = p;
//void doWork(Person p1) {}
//void test02() {
//	Person p; //�޲ι��캯��
//	doWork(p);
//}
//
////3. ��ֵ��ʽ���ؾֲ�����
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