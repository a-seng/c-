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
////����������������
//void test01()
//{
//	MyArray<int> array1(10);
//	for (int i = 0; i < 10; i++)
//	{
//		array1.Push_back(i);
//	}
//	cout << "array1��ӡ�����" << endl;
//	printIntArray(array1);
//	cout << "array1�Ĵ�С��" << array1.getSize() << endl;
//	cout << "array1��������" << array1.getCapacity() << endl;
//
//	cout << "--------------------------" << endl;
//
//	MyArray<int> array2(array1);
//	array2.Pop_back();
//	cout << "array2��ӡ�����" << endl;
//	printIntArray(array2);
//	cout << "array2�Ĵ�С��" << array2.getSize() << endl;
//	cout << "array2��������" << array2.getCapacity() << endl;
//}
//
////�����Զ�����������
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
//		cout << "������" << personArr[i].m_Name << " ���䣺 " << personArr[i].m_Age << endl;
//	}
//
//}
//
//void test02()
//{
//	//��������
//	MyArray<Person> pArray(10);
//	Person p1("�����", 30);
//	Person p2("����", 20);
//	Person p3("槼�", 18);
//	Person p4("���Ѿ�", 15);
//	Person p5("����", 24);
//
//	//��������
//	pArray.Push_back(p1);
//	pArray.Push_back(p2);
//	pArray.Push_back(p3);
//	pArray.Push_back(p4);
//	pArray.Push_back(p5);
//
//	printPersonArray(pArray);
//
//	cout << "pArray�Ĵ�С��" << pArray.getSize() << endl;
//	cout << "pArray��������" << pArray.getCapacity() << endl;
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
//	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ����ݵ�����
//	vector<int> v;
//	//�������з�����
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
//	//v.begin()���ص����������������ָ�������е�һ������
//	//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
//	//vector<int>::iterator �õ�vector<int>���������ĵ���������
//
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//
//	//��һ�ֱ�����ʽ��
//	while (pBegin != pEnd) {
//		cout << *pBegin << endl;
//		pBegin++;
//	}
//
//
//	//�ڶ��ֱ�����ʽ��
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	//�����ֱ�����ʽ��
//	//ʹ��STL�ṩ��׼�����㷨  ͷ�ļ� algorithm
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
////�Զ�����������
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
////��Ŷ���
//void test01() {
//
//	vector<Person> v;
//
//	//��������
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
////�Ŷ���ָ��
//void test02() {
//
//	vector<Person*> v;
//
//	//��������
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
////����Ƕ������
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
//	//������Ԫ�ز��뵽vector v��
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
//string(); //����һ���յ��ַ��� ����: string str;
//string(const char* s); //ʹ���ַ���s��ʼ��
//string(const string& str); //ʹ��һ��string�����ʼ����һ��string����
//string(int n, char c); //ʹ��n���ַ�c��ʼ��
//ʾ����
//
//#include <string>
////string����
//void test01()
//{
//	string s1; //�������ַ����������޲ι��캯��
//	cout << "str1 = " << s1 << endl;
//
//	const char* str = "hello world";
//	string s2(str); //��c_stringת������string
//
//	cout << "str2 = " << s2 << endl;
//
//	string s3(s2); //���ÿ������캯��
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
//string& operator=(const char* s); //char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(const string &s); //���ַ���s������ǰ���ַ���
//string& operator=(char c); //�ַ���ֵ����ǰ���ַ���
//string& assign(const char *s); //���ַ���s������ǰ���ַ���
//string& assign(const char *s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string &s); //���ַ���s������ǰ�ַ���
//string& assign(int n, char c); //��n���ַ�c������ǰ�ַ���
//ʾ����
//
//��ֵ
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
//string& operator+=(const char* str); //����+=������
//string& operator+=(const char c); //����+=������
//string& operator+=(const string& str); //����+=������
//string& append(const char *s); //���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char *s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string &s); //ͬoperator+=(const string& str)
//string& append(const string &s, int pos, int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
//ʾ����
//
//�ַ���ƴ��
//void test01()
//{
//	string str1 = "��";
//
//	str1 += "������Ϸ";
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
//	//str3.append(str2, 4, 3); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
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
//int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����

//int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
//ʾ����
//
//���Һ��滻
//void test01()
//{
//	//����
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "δ�ҵ�" << endl;
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
//	//�滻
//	string str1 = "abcdefgde";
//	str1.replace(1,1 , "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//void test03()
//{
//	//int find(const char* s, int pos = 0) const; //����s��һ�γ���λ��,��pos��ʼ����
//	//int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ��
//	//int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��
//	//int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
//	//int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ��,��pos��ʼ����
//	string s3 = "wocao asdfghjkl;";
//	//
//	//int pos = s3.rfind("asd",7);
//	//cout << pos << endl;
//	s3.replace(2, 5, "1");
//	cout << s3 << endl;
//}

//�ַ����Ƚ�
//void test01()
//{
//
//	string s1 = "hello";
//	string s2 = "aello";
//
//	int ret = s1.compare(s2);
//
//	if (ret == 0) {
//		cout << "s1 ���� s2" << endl;
//	}
//	else if (ret > 0)
//	{
//		cout << "s1 ���� s2" << endl;
//	}
//	else
//	{
//		cout << "s1 С�� s2" << endl;
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
//	//�ַ��޸�
//	str[0] = 'x';
//	str.at(1) = 'x';
//	cout << str << endl;
//
//}
//string& insert(int pos, const char* s); //�����ַ���
//string& insert(int pos, const string& str); //�����ַ���
//string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos); //ɾ����Pos��ʼ��n���ַ�
//ʾ����
//
//�ַ��������ɾ��
//void test01()
//{
//	string str = "hello";
//	str.insert(1, "111");
//	cout << str << endl;
//
//	str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
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
