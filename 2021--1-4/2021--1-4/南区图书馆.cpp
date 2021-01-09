#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;


//#include"abc.hpp"
//
//void test01()
//{
//	MyArray<int>arr1(5);
//	MyArray <int>arr3(arr1);
//	MyArray<int >arr2(100);
//	arr2 = arr1;
//				
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//#include"myArray.hpp"
//void printIntArray(MyArray<int>&arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//
//
//void test01()
//{
//	MyArray<int>array1(10);
//	for (int i = 0; i < 10; i++)
//	{
//		array1.Push_back(i);
//	}
//}

#include<vector>
#include<algorithm>
//
//void MyPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);															   
//
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//
//	while (pBegin != pEnd)
//	{
//		cout << *pBegin << endl;
//		pBegin++;
//	}
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Person{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector <Person>v;
//
//	Person p1("aseng", 10);
//	Person p2("tian", 100);
//	Person p3("wen", 18);
//	Person p4("ding", 19);
//	Person p5("sdfas", 12);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "Name :" << (*it).m_Name << "Age  :" << (*it).m_Age << endl;
//	}
//}
//void test02()
//{
//	vector<Person*>v;
//	Person p1("asdf", 1234);
//	Person p2("woban", 2341);
//	Person p3("bbbbbbbbb", 234);
//	Person p4("vbbbbbb", 2134);
//	Person p5("bbbbbbbbbb", 1234);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*>::iterator it = v.begin(); it!=v.end(); it++)
//	{
//		cout << "名字为:>" << (**it).m_Name << "  年龄为:>  " << (*it)->m_Age << endl;
//	}
//}
//int main()
//{
////	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//void test01()
//{
//	vector<vector<int>>v;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	vector<int>v5;
//	for (int i = 0; i < 5; i++)
//	{
//
//		v1.push_back(1000+i);
//		v2.push_back(999+i );
//		v3.push_back(888+i );
//		v4.push_back(777+i );
//		v5.push_back(666+i );
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//			cout << *vit << " ";
//		cout << endl;
//	}
//}
//
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;											d
////}



//	string s1;
//	s1 = "aseng";
//	cout << "s1=" << s1 << endl;
//
//	const char *str = "heiiow xujiaba";
//	cout << "str=" <<str << endl;
//	//s1(str);
//	string s2(str);
//	cout << "s1=" << s2 << endl;
//
//	string s4(10, 'abc');
////								 
//
//	cout << "s4=" << s4 << endl;
	 //  }
//
//void test01()
//{
//	string s1;
//	s1 = "hello world";
//	cout << "s1=" << s1 << endl;
//
//	string s2;
//	s2 = s1;
//	cout << "s2=" << s2 << endl;
//
//	string s3;
//	s3 = 'a';
//	cout << "s3=" << s3 << endl;
//
//	string s4;
//	s4.assign("hellow c++");
//	cout << "s4=" << s4 << endl;
//
//	string s5;
//	s5.assign(s4);
//	cout << "s5=" << s5 << endl;
//	s5.assign("wocao", 4);
//	cout << "s5=" << s5 << endl;
//
//	string s6;
//	s6.assign(100, 'saf');
//	cout << "s6=" << s6 << endl;
//}


//void test01()
//{
//	string s1;
//	s1 = "asdfgghjk;";
//	string s2;
//	s2 = "阿僧";
//	s2 += s1;
//	cout << "s2=" << s2 << endl;
//	
//	string s3;
//	s3 = 'I';
//	s3.append("LOVE");
//	cout << "s3=" << s3 << endl;
//
//	s3.append(" GAME");
//	cout << "s3=" << s3 << endl;
//
//	s3.append(" wocao ", 5);
//	cout << "s3=" << s3 << endl;
//
//	string s5("hellow");
//
//	s3.append(s5, 2, 2);
//	cout << "s3=" << s3 << endl;
//
//
//
//}
//


//{
//	string s1 = "aseng.com";
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << endl;
//		cout << s1.at(i) << endl;
//	}
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}