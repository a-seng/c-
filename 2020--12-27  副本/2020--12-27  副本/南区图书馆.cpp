#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

//	return 0;
//}
//#include <stdio.h>
//
//const int maxn = 10010;
//
//int a[maxn], b[maxn];
//
//int m, total, s, t, aptotal, apm, aps, apt, k;
//int n;
//int ck()
//{
//	int p, r;
//	if (total > 5)
//		return 1;
//	p = s;
//	r = t;
//	for (int q = 0; q<m; q++)
//	{
//		p = p * 10 + s;
//	}
//
//	for (int q = 0; q < total - m; q++)
//		p = p * 10;
//	for (int q = 1; q < total - m; q++)
//		r = r * 10 + t;
//	return p + r>n;
//}
//int main()
//{
//	while (scanf("%d", &n), n)
//	{
//		printf("%d: ", n);
//		if (n == 1) {
//			printf("10");
//			continue;
//		}
//		a[0] = 1;
//		b[0] = 1;
//		for (int i = 1; i<9999; i++)
//			a[i] = (a[i - 1] * 10 + 1) % n;
//		for (int i = 1; i < 999; i++)
//			b[i] = b[i - 1] * 10 % n;
//		for (total = 1, aps = 0; total < 9999; total++) {
//			k = 0;
//			if ((n % 10 == 0 || n % 25 == 0) && total> 11)
//				k = total - 11;
//			for (m = k; m < total; m++)
//			for (s = 1; s < 10; s++)
//			for (t = 0; t < (n % 10 ? 10 : 1); t++)
//			if (t != s && (((long long)a[m]) * b[total - m] * s + a[total - m - 1] * t) % n == 0 && ck() &&
//				(!aps || s<aps))
//			{
//				aptotal = total;
//				apm = m;
//				aps = s;
//				apt = t;
//			}
//			if (aps)
//				break;
//		}
//		for (int x = 0; x < apm + 1; x++)
//			printf("%d", aps);
//		for (int x = 0; x < aptotal - apm; x++)
//			printf("%d", apt);
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//const int maxn = 10010;
//
//int a[maxn], b[maxn];
//
//int m, total, s, t, aptotal, apm, aps, apt, k;
//int n;
//int ck()
//{
//	int p, r;
//	if (total > 5)
//		return 1;
//	p = s;
//	r = t;
//	for (int q = 0; q<m; q++)
//	{
//		p = p * 10 + s;
//	}
//
//	for (int q = 0; q < total - m; q++)
//		p = p * 10;
//	for (int q = 1; q < total - m; q++)
//		r = r * 10 + t;
//	return p + r>n;
//}
//int main()
//{
//	while (scanf("%d", &n), n)
//	{
//		printf("%d: ", n);
//		if (n == 1) {
//			printf("10");
//			continue;
//		}
//		a[0] = 1;
//		b[0] = 1;
//		for (int i = 1; i<9999; i++)
//			a[i] = (a[i - 1] * 10 + 1) % n;
//		for (int i = 1; i < 999; i++)
//			b[i] = b[i - 1] * 10 % n;
//		for (total = 1, aps = 0; total < 9999; total++) {
//			k = 0;
//			if ((n % 10 == 0 || n % 25 == 0) && total> 11)
//				k = total - 11;
//			for (m = k; m < total; m++)
//			for (s = 1; s < 10; s++)
//			for (t = 0; t < (n % 10 ? 10 : 1); t++)
//			if (t != s && (((long long)a[m]) * b[total - m] * s + a[total - m - 1] * t) % n == 0 && ck() &&
//				(!aps || s<aps))
//			{
//				aptotal = total;
//				apm = m;
//				aps = s;
//				apt = t;
//			}
//			if (aps)
//			
//break;
//		}
//		for (int x = 0; x < apm + 1; x++)
//			printf("%d", aps);
//		for (int x = 0; x < aptotal - apm; x++)
//			printf("%d", apt);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	float arr[5];
//	int i = 0;
//	float aver, sum = 0;
//	for (i = 0; i<5; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum += arr[i];
//	}
//	aver = sum / 5;
//	priintf("%.2f\n", aver);
//	return 0;
//
//}
//int main()
//{
//	int arr[500];
//	int i = 0;
//	do{
//		scanf("%d", &arr[i]);
//		i++;
//	} while (arr[i - 1]);
//	i = 0;
//	int count;
//	while (arr[i])
//	{
//		long long tmp = arr[i];
//		while (tmp)
//		{
//			count = 0;
//			long long tmp2 = tmp;
//			while (tmp2)
//			{
//				if (tmp2 <= 9)
//					break;
//				else{
//					if (tmp2 % 10 != tmp2 / 10 % 10)
//						count++;
//					tmp2 /= 10;;
//					if (tmp2 == 10 && count == 0)
//						count = 1;
//				}
//
//			}
//			if ((count == 1) && (tmp%arr[i] == 0))
//			{
//				printf("%lu: %lu\n", arr[i], tmp);
//				break;
//			}
//			tmp += arr[i];
//		}
//		i++;
//	}
//	return 0;
//}
//

//class person{
//public:
//	person(){
//		cout << "�޲ι��캯��" << endl;
//	}
//	person(int a)
//	{
//		cout << "�вι��캯��" << endl;
//	}
//	~person()
//	{
//		cout << "����������" << endl;
//	}
//};
//void test01()
//{
//	person p;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class Person {
//public:
//	//�޲Σ�Ĭ�ϣ����캯��
//	Person() {
//		cout << "�޲ι��캯��!" << endl;
//	}
//	//�вι��캯��
//	Person(int age, int height) {
//
//		cout << "�вι��캯��!" << endl;
//
//		m_age = age;
//		m_height = new int(height);
//
//	}
//	//�������캯��  
//	Person(const Person& p) {
//		cout << "�������캯��!" << endl;
//		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//
//	}  
//
//	//��������
//	~Person() {
//		cout << "��������!" << endl;
//		if (m_height != NULL)
//		{
//			delete m_height;
//		}
//	}											
//public:
//	int m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	Person p1(18, 180);
//
//	Person p2(p1);
//
//	cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_height << endl;
//
//	cout << "p2�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_height << endl;
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
//public:
//	People()
//	{
//		cout << "�޲ι��캯��" << endl;
//	}
//	People(int height,int weight)
//	{
//		m_height = height;
//		m_weight = new int(weight);
//		cout << "�вι��캯��" << m_height    <<* m_weight << endl;
//	}
//	People(const People&p)
//	{
//
//		m_height=p.m_height;
//		m_weight = new int(*p.m_weight);
//		cout << "�������캯��" << m_height     <<*m_weight<<endl;
//	}
//	~People()
//	{
//		cout << "��������" << endl;
//		if (m_weight != NULL)
//			delete m_weight;
//	}
//private:
//	int m_height;
//	int* m_weight;
//};
//
//void test01()
//{
//	People p1(173, 70);
//	People p2(p1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//
//}
//class Person {
//public:
//
//	//��ͳ��ʽ��ʼ��
//		//Person(int a, int b, int c) {
//		//	m_A = a;
//		//	m_B = b;
//		//	m_C = c;
//		//}
//
//		//��ʼ���б�ʽ��ʼ��
//		Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c) {}
//	void PrintPerson() {
//		cout << "mA:" << m_A << endl;
//		cout << "mB:" << m_B << endl;
//		cout << "mC:" << m_C << endl;
//	}
//private:
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//int main() {
//
//	 Person p(1,2,3);
//     p.PrintPerson();
//
//
//	system("pause");
//
//	return 0;
//}
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_PhoneName = name;
//		cout << "Phone����" << endl;
//	}
//	~Phone()
//	{cout << "Phone����" << endl;	}
//string m_PhoneName;
//};
//class Person
//{
//public:
//
//	//��ʼ���б���Ը��߱�����������һ�����캯��
//	Person(string name, string pName){
//	cout << "Person����" << endl;
//	m_Name=name;
//	m_Phone(pName);
//	}
//	~Person()
//	{		cout << "Person����" << endl;	}
//	void playGame()
//	{		cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;	}
//	string m_Name;	
//	Phone m_Phone;
//
//};
//void test01()
//{
//	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
//	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
//	//����˳���빹���෴
//	Person p("����", "ƻ��X");				  
//	p.playGame();
//
//}int main() {
//	test01();
//system("pause");
//return 0;
//}
/*

class Phone
{
public:
	Phone()
	{
		cout << "Phone�Ĺ���ʹ��" << endl;
	}
	~Phone()
	{
		cout << "Phone������ʹ��" << endl;
	}
	string Phone_name;

};
class People
{
public:
	People(string name,string number):Pname(name), p.Phone_number(number){
		Pname = name;

	}
	void playPhone()
	{

	}

	string Pname;
	Phone p;
};
int main()
{
	return 0;
}*/
//class Person
//{
//
//public:
//
//	static int m_A; //��̬��Ա����
//
//	//��̬��Ա�����ص㣺
//	//1 �ڱ���׶η����ڴ�
//	//2 ���������������ʼ��
//	//3 ���ж�����ͬһ������
//
//
//private:
//	static int m_B; //��̬��Ա����Ҳ���з���Ȩ�޵�
//};
//int Person::m_A = 10;
//int Person::m_B = 10;
//
//
//void test01()
//{
//	//��̬��Ա�������ַ��ʷ�ʽ
//
//	//1��ͨ������
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p1.m_A = " << p1.m_A << endl; //����ͬһ������
//	cout << "p2.m_A = " << p2.m_A << endl;
//
//	//2��ͨ������
//	cout << "m_A = " << Person::m_A << endl;
//
//
//	//cout << "m_B = " << Person::m_B << endl; //˽��Ȩ�޷��ʲ���
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}							 \


//class Person{
//public:
//	static int  num;
//private:
//	static int s;
//
//
//};
////int Person ::num = 100;
////int Person::s = 1000;
//int main()
//{
//	Person p;
//	cout << p.num << endl;
//	//cout << p.s << endl;
//	Person s;
//	cout << s.num << endl;
//	s.num = 500;
//	cout << s.num << endl;
//	cout << p.num << endl;
//
//	return 0;
//	
//
////}
//class Person
//{
//
//public:
//
//	//��̬��Ա�����ص㣺
//	//1 ������һ������
//	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//	static void func()
//	{
//		cout << "func����" << endl;
//		m_A = 100;
//		//m_B = 100; //���󣬲����Է��ʷǾ�̬��Ա����
//	}
//
//	static int m_A; //��̬��Ա����
//	int m_B; // 
//private:
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//	static void func2()
//	{
//		cout << "func2����" << endl;
//	}
//};
//int Person::m_A = 10;
//
//
//void test01()
//{
//	//��̬��Ա�������ַ��ʷ�ʽ
//
//	//1��ͨ������
//	Person p1;
//	p1.func();
//
//	//2��ͨ������
//	Person::func();
//
//
//	//Person::func2(); //˽��Ȩ�޷��ʲ���
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
  
				  
class P
{
public:

	static int num;
	static void fun()
	{
		num = 1000;
		cout << "��̬�����õ���   num�ĸ�ֵ"<<num<< endl;
		fun2();
	}
private:
	static void fun2()
	{
		num = 100000;
		cout << "����fun2�ĵ���  " << num << endl;

	}
};
int P:: num = 10000;

void test01()
{
	P::fun();
}

int main(){
	test01();
	return 0;
}