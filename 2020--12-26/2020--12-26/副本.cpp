#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;
//class Person{
//public:
//	void serName(string name){
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//	int getAge(){
//		return m_Age;
//	}
//	void setAge(int age){
//		if (age<0 || age>150){
//			cout << "你个老妖精!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//	string getLover()
//	{
//		return m_Lover;
//	}
//
//private:
//	string m_Name;	   
//	int m_Age;
//	string m_Lover;
//};
//int main()
//{
//	Person s;
//	s.serName("阿僧");
//	s.setAge(18);
//	s.setLover("xxx");
//	cout << "Name:" << s.getAge() << endl;
//	cout << "age:" << s.getName() << endl;
//	cout << "Lover" << s.getLover() << endl;
//	system("pause");
//	return 0;
//}

//class Cube{
//public:
//	void setL(int l){
//		c_l = l;
//	}
//	int getL()	{
//		return c_l;
//	}					
//	void setH(int h)	{
//		c_h = h;
//	}
//	int getH()	{
//		return c_h;
//	}
//	void setW(int w)	{
//		c_w = w;
//	}
//	int getW(){
//		return c_w;
//	}
//	int caculateS(){
//		return c_l*c_w * 2 + c_l*c_h * 2 + c_h*c_w * 2;
//	}
//	int caculateV(){
//		return c_l*c_w*c_h;
//	}
//private:	
//				int c_l;
//				int c_h;
//				int c_w;
//};
//bool issame(Cube &c1, Cube &c2){
//	if (c1.getL() == c2.getL()&&	c1.getH ()== c2.getH()&&c1.getW() == c2.getW())
//		return true;
//	return false;
//}
//int main()
//{
//	class  Cube c1,c2;
//	c1.setL(10);
//	c1.setH(10);
//	c1.setW(10);
//	c2.setL(10);
//	c2.setH(10);
//	c2.setW(10);			   
//	int i = issame(c1, c2);
//	if (i)
//		cout << "两个 立方体相等" << endl;
//	else
//		cout << "两个立方体不相等" << endl;
//
//	system("pause");
//	return 0;
//}
//
//class Point{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void seY(int y)
//	{
//		m_Y= y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(Point center)
//	{
//		m_Center =  center;
//	}
//	
//
//private:
//	int m_R;
//	Point m_Center;
//
//};
//int main()
//{
//
//}
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//};
//
////void test01()
////{
////	Person p;
////}
//
//int main() {
//
////	test01();
//	Person p;
//	system("pause");
//	return 0;
//
//}


//
//class Person{
//public:
//	Person(){
//		cout << "abdsdafadsf" << endl;
//	}
//	~Person()
//	{
//		cout << "132145673213" << endl;
//	}
//};
//int main()
//{
//	Person p;
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//struct student
//{
//	int num;
//	char name[20];
//	int score;
//};
//int main(){
//	int N;
//	while (1){
//		scanf("%d", &N);
//		if (N == 0) break;
//		struct student stu[N];
//		int i;
//		for (i = 0; i<N; i++)
//			scanf("%d %s %d", &stu[i].num, stu[i].name, &stu[i].score);
//		int max = 0, M = 0;
//		for (i = 0; i<N; i++){
//			if (max<stu[i].score) {
//				max = stu[i].score;
//				M = i;
//			}
//		}
//		printf("%d %s\n", stu[M].num, stu[M].name);
//
//
//	}
//}