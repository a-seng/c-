#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;
//交换整型函数
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换浮点型函数
//void swapDouble(double& a, double& b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////利用模板提供通用的交换函数
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//
//	//利用模板实现交换
//	//1、自动类型推导
//	mySwap(a, b);
//
//	//2、显示指定类型
//	mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
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
//利用模板提供通用的交换函数
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//// 1、自动类型推导，必须推导出一致的数据类型T,才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	mySwap(a, b); // 正确，可以推导出一致的T
//	//mySwap(a, c); // 错误，推导不出一致的T类型
//}
//
//
//// 2、模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//
//void test02()
//{
//	//func(); //错误，模板不能独立使用，必须确定出T的类型
//	func<int>(); //利用显示指定类型的方式，给T一个类型，才可以使用该模板
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
//
////交换的函数模板
//template<typename T>
//void mySwap(T &a, T&b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//

//template<class T> // 也可以替换成typename
////利用选择排序，进行对数组从大到小的排序
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; //最大数的下标
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i) //如果最大数的下标不是i，交换两者
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//template<typename T>
//void printArray(T arr[], int len) {
//
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//测试char数组
//	char charArr[] = "bdcfeagh";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
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
//普通函数与函数模板调用规则
//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用重载的模板" << endl;
//}
//
//void test01()
//{
//	//1、如果函数模板和普通函数都可以实现，优先调用普通函数
//	// 注意 如果告诉编译器  普通函数是有的，但只是声明没有实现，或者不在当前文件内实现，就会报错找不到
//	int a = 10;
//	int b = 20;
//	myPrint(a, b); //调用普通函数
//
//	//2、可以通过空模板参数列表来强制调用函数模板
//	myPrint<>(a, b); //调用函数模板
//
//	//3、函数模板也可以发生重载
//	int c = 30;
//	myPrint(a, b, c); //调用重载的函数模板
//
//	//4、 如果函数模板可以产生更好的匹配,优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2); //调用函数模板
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