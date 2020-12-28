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
//		cout << "无参构造函数" << endl;
//	}
//	person(int a)
//	{
//		cout << "有参构造函数" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数“" << endl;
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
//	//无参（默认）构造函数
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	//有参构造函数
//	Person(int age, int height) {
//
//		cout << "有参构造函数!" << endl;
//
//		m_age = age;
//		m_height = new int(height);
//
//	}
//	//拷贝构造函数  
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//
//	}  
//
//	//析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
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
//	cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << endl;
//
//	cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << endl;
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
//		cout << "无参构造函数" << endl;
//	}
//	People(int height,int weight)
//	{
//		m_height = height;
//		m_weight = new int(weight);
//		cout << "有参构造函数" << m_height    <<* m_weight << endl;
//	}
//	People(const People&p)
//	{
//
//		m_height=p.m_height;
//		m_weight = new int(*p.m_weight);
//		cout << "拷贝构造函数" << m_height     <<*m_weight<<endl;
//	}
//	~People()
//	{
//		cout << "析构函数" << endl;
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
//	//传统方式初始化
//		//Person(int a, int b, int c) {
//		//	m_A = a;
//		//	m_B = b;
//		//	m_C = c;
//		//}
//
//		//初始化列表方式初始化
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
//		cout << "Phone构造" << endl;
//	}
//	~Phone()
//	{cout << "Phone析构" << endl;	}
//string m_PhoneName;
//};
//class Person
//{
//public:
//
//	//初始化列表可以告诉编译器调用哪一个构造函数
//	Person(string name, string pName){
//	cout << "Person构造" << endl;
//	m_Name=name;
//	m_Phone(pName);
//	}
//	~Person()
//	{		cout << "Person析构" << endl;	}
//	void playGame()
//	{		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;	}
//	string m_Name;	
//	Phone m_Phone;
//
//};
//void test01()
//{
//	//当类中成员是其他类对象时，我们称该成员为 对象成员
//	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//	//析构顺序与构造相反
//	Person p("张三", "苹果X");				  
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
		cout << "Phone的构造使用" << endl;
	}
	~Phone()
	{
		cout << "Phone得析构使用" << endl;
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
//	static int m_A; //静态成员变量
//
//	//静态成员变量特点：
//	//1 在编译阶段分配内存
//	//2 类内声明，类外初始化
//	//3 所有对象共享同一份数据
//
//
//private:
//	static int m_B; //静态成员变量也是有访问权限的
//};
//int Person::m_A = 10;
//int Person::m_B = 10;
//
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//1、通过对象
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p1.m_A = " << p1.m_A << endl; //共享同一份数据
//	cout << "p2.m_A = " << p2.m_A << endl;
//
//	//2、通过类名
//	cout << "m_A = " << Person::m_A << endl;
//
//
//	//cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
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
//	//静态成员函数特点：
//	//1 程序共享一个函数
//	//2 静态成员函数只能访问静态成员变量
//
//	static void func()
//	{
//		cout << "func调用" << endl;
//		m_A = 100;
//		//m_B = 100; //错误，不可以访问非静态成员变量
//	}
//
//	static int m_A; //静态成员变量
//	int m_B; // 
//private:
//
//	//静态成员函数也是有访问权限的
//	static void func2()
//	{
//		cout << "func2调用" << endl;
//	}
//};
//int Person::m_A = 10;
//
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//1、通过对象
//	Person p1;
//	p1.func();
//
//	//2、通过类名
//	Person::func();
//
//
//	//Person::func2(); //私有权限访问不到
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
		cout << "静态函数得调用   num的赋值"<<num<< endl;
		fun2();
	}
private:
	static void fun2()
	{
		num = 100000;
		cout << "函数fun2的调用  " << num << endl;

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