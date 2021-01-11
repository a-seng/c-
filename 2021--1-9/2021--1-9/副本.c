#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//int main()
//{
//	int a = 10, b = 20;
//	cout << a << endl << b << endl;
//	a<-->b;
//
//	system("pausen");
//	return 0;
//}

//typedef int INT;
//INT main()
//{
//	INT arr[10];
//	int i = 0;
//	for (; i < 10;)
//		arr[i] = i++;
//	for (i = 0; i < 10; i++)
//		cout << arr[i] << endl;
//	system("pause");
//	return 0;
//}


//string(); //创建一个空的字符串 例如: string str;
//string(const char* s); //使用字符串s初始化
//string(const string& str); //使用一个string对象初始化另一个string对象
//string(int n, char c); //使用n个字符c初始化
//示例：
//

//string构造
//void test01()
//{
//	string s1; //创建空字符串，调用无参构造函数
//	cout << "str1 = " << s1 << endl;
//
//	const char* str = "hello world";
//	string s2(str); //把c_string转换成了string
//
//	cout << "str2 = " << s2 << endl;
//
//	string s3(s2); //调用拷贝构造函数
//	cout << "str3 = " << s3 << endl;
//
//	//string s4(10, 'a');
//	//cout << "str3 = " << s3 << endl;
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