#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
////int main()
////{
////	int Day = 14;
////	cout << "一周总共有:" << Day << "天" << endl;
////	string a = "sdfahjkl;";
////	cout << a << endl;
////
////	system("pause");
////
////	return 0;
////}
////
////全局变量
//int g_a = 10;
//int g_b = 10;
//
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	//局部变量
//	int a = 10;
//	int b = 10;
//
//	//打印地址
//	cout << "局部变量a地址为： " << (int)&a << endl;
//	cout << "局部变量b地址为： " << (int)&b << endl;
//
//	cout << "全局变量g_a地址为： " << (int)&g_a << endl;
//	cout << "全局变量g_b地址为： " << (int)&g_b << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
//	cout << "静态变量s_b地址为： " << (int)&s_b << endl;
//
//	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
//	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;
//
//	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
//
//	system("pause");
//
//	return 0;
//}
//int * func()
//{
//	int *a = new int(10);
//	return a;
//}
//int main()
//{
	/*int *p = new int[10] ;
	int i = 0;
	for (i = 0; i < 10; i++)
		cout << p[i] << endl;
	delete[] p;
	return 0;

*/
	//int a = 0;
	//int &b = a;
	//b = 100;
	//cout << b << endl;			   
	//cout << a<< endl;
	//cout << "a=" << a << endl;
	//return 0;















	//int *p = func();
	//cout << *p << endl;
	//delete p;
	//cout << *p << endl;
	//return 0;
//}
//返回局部变量引用


//返回静态变量引用
int& test02() {
	static int a = 20;
	return a;
}

int main() {

	//不能返回局部变量的引用


	//如果函数做左值，那么必须返回引用



	cout << "ref2 = " << test02() << endl;
//	cout << "ref2 = " << ref2 << endl;


	return 0;
}