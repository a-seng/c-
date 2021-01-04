#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

//template<typename T>
//void mySwap(T&a, T&b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test01()
//{
//	int a = 10;
//	int  b = 20;
//	mySwap(a, b);
//	cout << "a=   " << a << endl;
//	cout << "b=  " << b << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//



//template<class T>
//void func()
//{
//	cout << "func函数的调用" << endl;
//}
//void test()
//{
//	func<int>();
//}
//

//
//template<class T>
//void mySort(T arr[], int len)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len; i++)
//	{
//		int max = i;
//		for (j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		T tmp = arr[max];
//		arr[max] = arr[i];
//		arr[i] = tmp;
//	}
//
//}
//template<class T>
//void print( T Arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//		cout << "第" << i << "个元素为" << Arr[i] << endl;
//}
//
//void test()
//{
//	char charArr[] = "assfdghjkl";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, len);
//	print(charArr, len);
//	int intArr[] = { 12, 23, 234, 2341, 4325, 65, 76565, 43, 1234, 13, 4, 5, 7, 1, 3, 6, 8 };
//	 len = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, len);
//	print(intArr, len);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//
//}


void print(int a, int b)
{
	cout << "普通函数的调用" << endl;
}
template<class T>
void print(T a, T b)
{
	cout << "模板函数的第哦啊用" << endl;
}
void test()
{
	int a = 10;
	int b = 10;
	print(a, b);
	
}



int main()
{
	test();
	system("pause");
	return 0;
}
