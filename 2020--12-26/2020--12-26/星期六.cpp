//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string>
//#include<iostream>
//using namespace std;
//
//////Բ����
////const double PI = 3.14;
////
//////1����װ������
//////�����Ժ���Ϊ��Ϊһ�����壬�������������е�����
////
//////��װһ��Բ�࣬��Բ���ܳ�
//////class�������һ���࣬������ŵ�������
////class Circle
////{
////public:  //����Ȩ��  ������Ȩ��
////
////	//����
////	int m_r;//�뾶
////
////	//��Ϊ
////	//��ȡ��Բ���ܳ�
////	double calculateZC()
////	{
////		//2 * pi  * r
////		//��ȡԲ���ܳ�
////		return  2 * PI * m_r;
////	}
////};
////
////int main() {
////
////	//ͨ��Բ�࣬����Բ�Ķ���
////	// c1����һ�������Բ
////	Circle c1;
////	cin; c1.m_r; //��Բ����İ뾶 ���и�ֵ����
////
////	//2 * pi * 10 = = 62.8
////	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;
////
////	system("pause");
////
////	return 0;
////}
////class Student {
////public:
////	void setName(string name) {
////		m_name = name;
////	}
////	void setID(int id) {
////		m_id = id;
////	}
////
////	void showStudent() {
////		cout << "name:" << m_name << " ID:" << m_id << endl;
////	}
////public:
////	string m_name;
////	int m_id;
////};
////
////int main() {
////	Student stu;
////	stu.setName("��������");
////	stu.setID(250);
////	stu.showStudent();
////	system("pause");
////	return 0;
////}
////class Student{
////public:
////	void setName(string name){
////		m_name = name;
////	}
////	void setID(int id)
////	{
////		m_id = id;
////	}
////	void showStudent(){
////		cout << "name:" << m_name << "ID:" << m_id << endl;
////	}
////public:		
////	string m_name;
////	int m_id;
////};
////int main()
////{
////	Student stu;
////	stu.setName("��ɮ");
////	stu.setID(199);
////	stu.showStudent();
////	system("pause");
////	return 0;
////
////}
//class Person {
//public:
//
//	//�������ÿɶ���д
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}								  
//	//��ȡ���� 
//	int getAge() {
//		return m_Age;
//	}
//	//��������
//	void setAge(int age) {
//		if (age < 0 || age > 150) {
//			cout << "���������!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//��������Ϊֻд
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //�ɶ���д  ����
//
//	int m_Age; //ֻ��  ����
//
//	string m_Lover; //ֻд  ����
//};
//
//
//int main() {
//
//	Person p;
//	//��������
//	p.setName("����");
//	cout << "������ " << p.getName() << endl;
//
//	//��������
//	p.setAge(50);
//	cout << "���䣺 " << p.getAge() << endl;
//
//	//��������
//	p.setLover("�Ծ�");
//	//cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ
//
//	system("pause");
//
//	return 0;
//}