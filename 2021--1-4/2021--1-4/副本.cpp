#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;
//
//#include "myArray.hpp"
//#include <string>
//
//void printIntArray(MyArray<int>& arr) {
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
////测试内置数据类型
//void test01()
//{
//	MyArray<int> array1(10);
//	for (int i = 0; i < 10; i++)
//	{
//		array1.Push_back(i);
//	}
//	cout << "array1打印输出：" << endl;
//	printIntArray(array1);
//	cout << "array1的大小：" << array1.getSize() << endl;
//	cout << "array1的容量：" << array1.getCapacity() << endl;
//
//	cout << "--------------------------" << endl;
//
//	MyArray<int> array2(array1);
//	array2.Pop_back();
//	cout << "array2打印输出：" << endl;
//	printIntArray(array2);
//	cout << "array2的大小：" << array2.getSize() << endl;
//	cout << "array2的容量：" << array2.getCapacity() << endl;
//}
//
////测试自定义数据类型
//class Person {
//public:
//	Person() {}
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void printPersonArray(MyArray<Person>& personArr)
//{
//	for (int i = 0; i < personArr.getSize(); i++) {
//		cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
//	}
//
//}
//
//void test02()
//{
//	//创建数组
//	MyArray<Person> pArray(10);
//	Person p1("孙悟空", 30);
//	Person p2("韩信", 20);
//	Person p3("妲己", 18);
//	Person p4("王昭君", 15);
//	Person p5("赵云", 24);
//
//	//插入数据
//	pArray.Push_back(p1);
//	pArray.Push_back(p2);
//	pArray.Push_back(p3);
//	pArray.Push_back(p4);
//	pArray.Push_back(p5);
//
//	printPersonArray(pArray);
//
//	cout << "pArray的大小：" << pArray.getSize() << endl;
//	cout << "pArray的容量：" << pArray.getCapacity() << endl;
//
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include <vector>
//#include <algorithm>
//
//void MyPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01() {
//
//	//创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
//	vector<int> v;
//	//向容器中放数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
//	//v.begin()返回迭代器，这个迭代器指向容器中第一个数据
//	//v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
//	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//
//	//第一种遍历方式：
//	while (pBegin != pEnd) {
//		cout << *pBegin << endl;
//		pBegin++;
//	}
//
//
//	//第二种遍历方式：
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	//第三种遍历方式：
//	//使用STL提供标准遍历算法  头文件 algorithm
//	for_each(v.begin(), v.end(), MyPrint);
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


//#include <vector>
//#include <string>
//
////自定义数据类型
//class Person {
//public:
//	Person(string name, int age) {
//		mName = name;
//		mAge = age;
//	}
//public:
//	string mName;
//	int mAge;
//};
////存放对象
//void test01() {
//
//	vector<Person> v;
//
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "Name:" << (*it).mName << " Age:" << (*it).mAge << endl;
//
//	}
//}
//
//
////放对象指针
//void test02() {
//
//	vector<Person*> v;
//
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		Person * p = (*it);
//		cout << "Name:" << p->mName << " Age:" << (*it)->mAge << endl;
//	}
//}
//
//
//int main() {
//
////	test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

#include<algorithm>
#include <vector>
//
////容器嵌套容器
//void test01() {
//
//	vector< vector<int> >  v;
//
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//将容器元素插入到vector v中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
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
//string(); //创建一个空的字符串 例如: string str;
//string(const char* s); //使用字符串s初始化
//string(const string& str); //使用一个string对象初始化另一个string对象
//string(int n, char c); //使用n个字符c初始化
//示例：
//
//#include <string>
////string构造
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
//	string s4(10, 'a');
//	cout << "str3 = " << s3 << endl;
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
//string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串
//string& operator=(const string &s); //把字符串s赋给当前的字符串
//string& operator=(char c); //字符赋值给当前的字符串
//string& assign(const char *s); //把字符串s赋给当前的字符串
//string& assign(const char *s, int n); //把字符串s的前n个字符赋给当前的字符串
//string& assign(const string &s); //把字符串s赋给当前字符串
//string& assign(int n, char c); //用n个字符c赋给当前字符串
//示例：
//
//赋值
//void test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("hello c++", 5);
//	cout << "str5 = " << str5 << endl;
//
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(5, 'x');
//	cout << "str7 = " << str7 << endl;
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
//string& operator+=(const char* str); //重载+=操作符
//string& operator+=(const char c); //重载+=操作符
//string& operator+=(const string& str); //重载+=操作符
//string& append(const char *s); //把字符串s连接到当前字符串结尾
//string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string &s); //同operator+=(const string& str)
//string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾
//示例：
//
//字符串拼接
//void test01()
//{
//	string str1 = "我";
//
//	str1 += "爱玩游戏";
//
//	cout << "str1 = " << str1 << endl;
//
//	str1 += ':';
//
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "LOL DNF";
//
//	str1 += str2;
//
//	cout << "str1 = " << str1 << endl;
//
//
//	string str3 = "I";
//	str3.append(" love ");
//	str3.append("game abcde", 4);
//	str3.append(str2);
//	//str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
//	cout << "str3 = " << str3 << endl;
//}
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
//int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找

//int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次位置
//int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
//string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
//string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
//示例：
//
//查找和替换
//void test01()
//{
//	//查找
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//
//}
//
//void test02()
//{
//	//替换
//	string str1 = "abcdefgde";
//	str1.replace(1,1 , "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//void test03()
//{
//	//int find(const char* s, int pos = 0) const; //查找s第一次出现位置,从pos开始查找
//	//int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次位置
//	//int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
//	//int rfind(const string& str, int pos = npos) const; //查找str最后一次位置,从pos开始查找
//	//int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置,从pos开始查找
//	string s3 = "wocao asdfghjkl;";
//	//
//	//int pos = s3.rfind("asd",7);
//	//cout << pos << endl;
//	s3.replace(2, 5, "1");
//	cout << s3 << endl;
//}

//字符串比较
//void test01()
//{
//
//	string s1 = "hello";
//	string s2 = "aello";
//
//	int ret = s1.compare(s2);
//
//	if (ret == 0) {
//		cout << "s1 等于 s2" << endl;
//	}
//	else if (ret > 0)
//	{
//		cout << "s1 大于 s2" << endl;
//	}
//	else
//	{
//		cout << "s1 小于 s2" << endl;
//	}
//
//}
//void test01()
//{
//	string str = "hello world";
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//
//	//字符修改
//	str[0] = 'x';
//	str.at(1) = 'x';
//	cout << str << endl;
//
//}
//string& insert(int pos, const char* s); //插入字符串
//string& insert(int pos, const string& str); //插入字符串
//string& insert(int pos, int n, char c); //在指定位置插入n个字符c
//string& erase(int pos, int n = npos); //删除从Pos开始的n个字符
//示例：
//
//字符串插入和删除
//void test01()
//{
//	string str = "hello";
//	str.insert(1, "111");
//	cout << str << endl;
//
//	str.erase(1, 3);  //从1号位置开始3个字符
//	cout << str << endl;
//
//	string s = "aseng shi ba ba la la la";
//	s.insert(1, "_");
//	cout << "s=   " << s << endl;
//	s.erase(0, 6);
//	cout << "s=   " << s << endl;
//}
//void test01()
//{
//
//
//	string str = "abcdefg";
//	string subStr = str.substr(1, 3);
//	cout << "subStr = " << subStr << endl;
//
//	string email = "hello@sina.com";
//	int pos = email.find("@");
//	string username = email.substr(0, pos);
//	cout << "username: " << username << endl;
//
//}

void test01()
{
	string s = "aseng liubi";
	string k = s.substr(0, 4);
	cout << "k=" << k << endl;

}

int main() {

	//test01();
	//test02();
	test01();

	system("pause");

	return 0;
}
