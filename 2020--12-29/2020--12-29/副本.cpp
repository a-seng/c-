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
//		//���������ݿ��ٵ�����
//		m_Age = new int(age);
//	}
//
//	//���ظ�ֵ����� 
//	Person& operator=(Person &p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//�������ṩ�Ĵ�����ǳ����
//		//m_Age = p.m_Age;
//
//		//�ṩ��� ���ǳ����������
//		m_Age = new int(*p.m_Age);
//
//		//��������
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
//	//�����ָ��
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
//	p3 = p2 = p1; //��ֵ����
//
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
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
//	//ǰ��++
//	MyInteger& operator++() {
//		//��++
//		m_Num++;
//		//�ٷ���
//		return *this;
//	}
//
//	//����++
//	MyInteger operator++(int) {
//		//�ȷ���
//		MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
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
////ǰ��++ ��++ �ٷ���
//void test01() {
//	MyInteger myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
//
////����++ �ȷ��� ��++
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
//	//Speak���������麯��
//	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//
//};
////����ϣ������ʲô������ô�͵���ʲô����ĺ���
////���������ַ�ڱ���׶ξ���ȷ������ô��̬����
////���������ַ�����н׶β���ȷ�������Ƕ�̬����
//
//void DoSpeak(Animal & animal)
//{
//	animal.speak();
//}
////
////��̬���������� 
////1���м̳й�ϵ
////2��������д�����е��麯��
////��̬ʹ�ã�
////����ָ�������ָ���������
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