#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;
#include <vector>
#include<ctime>
#include<algorithm>
/*
empty(); //判断容器是否为空

capacity(); //容器的容量

size(); //返回容器中元素的个数

resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。

​ //如果容器变短，则末尾超出容器长度的元素被删除。

resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。

​ //如果容器变短，则末尾超出容器长度的元素被删除
*/

//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量 = " << v1.capacity() << endl;
//		cout << "v1的大小 = " << v1.size() << endl;
//	}
//
//	//resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
//	v1.resize(15, 10);
//	printVector(v1);
//
//	//resize 重新指定大小 ，若指定的更小，超出部分元素被删除
//	v1.resize(5);
//	printVector(v1);
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

/*
push_back(ele); //尾部插入元素ele
pop_back(); //删除最后一个元素
insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele
erase(const_iterator pos); //删除迭代器指向的元素
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
clear(); //删除容器中所有元素
*/
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////插入和删除
//void test01()
//{
//	vector<int> v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//	//插入
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	//删除
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//清空
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
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
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	//互换容器
//	cout << "互换后" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//收缩内存
//	vector<int>(v).swap(v); //匿名对象
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

#include <deque>

/*
deque<T> deqT; //默认构造形式
deque(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
deque(n, elem); //构造函数将n个elem拷贝给本身。
deque(const deque &deq); //拷贝构造函数
*/
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
////deque构造
//void test01() {
//
//	deque<int> d1; //无参构造函数
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4 = d3;
//	printDeque(d4);
//}

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
////赋值操作
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
////大小操作
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//判断容器是否为空
//	if (d1.empty()) {
//		cout << "d1为空!" << endl;
//	}
//	else {
//		cout << "d1不为空!" << endl;
//		//统计大小
//		cout << "d1的大小为：" << d1.size() << endl;
//	}
//
//	//重新指定大小
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
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


/*
两端插入操作：

push_back(elem); //在容器尾部添加一个数据
push_front(elem); //在容器头部插入一个数据
pop_back(); //删除容器最后一个数据
pop_front(); //删除容器第一个数据
指定位置操作：

insert(pos,elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。

insert(pos,n,elem); //在pos位置插入n个elem数据，无返回值。

insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值。

clear(); //清空容器的所有数据

erase(beg,end); //删除[beg,end)区间的数据，返回下一个数据的位置。

erase(pos); //删除pos位置的数据，返回下一个数据的位置。
*/

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
////两端操作
//void test01()
//{
//	deque<int> d;
//	//尾插
//	d.push_back(10);
//	d.push_back(20);
//	//头插
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//
//	//尾删
//	d.pop_back();
//	//头删
//	d.pop_front();
//	printDeque(d);
//}
//
////插入
//void test02()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.insert(d.begin(), 1000);
//	printDeque(d);
//
//	d.insert(d.begin(), 2, 10000);
//	printDeque(d);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d.insert(d.begin(), d2.begin(), d2.end());
//	printDeque(d);
//
//}
//
////删除
//void test03()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.erase(d.begin());
//	printDeque(d);
//
//	d.erase(d.begin(), d.end());
//	d.clear();
//	printDeque(d);
//}
//
//int main() {
//
//	//test01();
//
//	//test02();
//
//	test03();
//
//	system("pause");
//
//	return 0;
//}

/*
创建五名选手，放到vector中
遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
sort算法对deque容器中分数排序，去除最高和最低分
deque容器遍历一遍，累加总分
获取平均分
*/

//选手类
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	string m_Name; //姓名
//	int m_Score;  //平均分
//};
//
//void createPerson(vector<Person>&v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		//将创建的person对象 放入到容器中
//		v.push_back(p);
//	}
//}
//
////打分
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//将评委的分数 放入到deque容器中
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;  // 60 ~ 100
//			d.push_back(score);
//		}
//
//		//cout << "选手： " << it->m_Name << " 打分： " << endl;
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		//{
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//
//		//排序
//		sort(d.begin(), d.end());
//
//		//去除最高和最低分
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit; //累加每个评委的分数
//		}
//
//		int avg = sum / d.size();
//
//		//将平均分 赋值给选手身上
//		it->m_Score = avg;
//	}
//
//}
//
//void showScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名： " << it->m_Name << " 平均分： " << it->m_Score << endl;
//	}
//}
//
//int main() {
//
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1、创建5名选手
//	vector<Person>v;  //存放选手容器
//	createPerson(v);
//
//	//测试
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "姓名： " << (*it).m_Name << " 分数： " << (*it).m_Score << endl;
//	//}
//
//	//2、给5名选手打分
//	setScore(v);
//
//	//3、显示最后得分
//	showScore(v);
//
//	system("pause");
//
//	return 0;
//}