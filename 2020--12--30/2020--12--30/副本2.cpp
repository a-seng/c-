#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;
////Javaҳ��
//
//
//void test01()
//{
//	//Javaҳ��
//	cout << "Java������Ƶҳ�����£� " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//
//	//Pythonҳ��
//	cout << "Python������Ƶҳ�����£� " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£� " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
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
//����ҳ��
//
//void test01()
//{
//	//Javaҳ��
//	cout << "Java������Ƶҳ�����£� " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//
//	//Pythonҳ��
//	cout << "Python������Ƶҳ�����£� " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£� " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//
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

//void myClass2()
//{
//	Son2 s;
//	//s.m_A; //���ɷ���
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A; //�ɷ��� privateȨ��
//		m_B; //�ɷ��� privateȨ��
//		//m_C; //���ɷ���
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3��˽�м̳У����Լ̳�Son3��������GrandSon3�ж��޷����ʵ�
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};

//class Son : public Base {
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
//	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
//	void func()
//	{
//		cout << "Son - func()����" << endl;
//	}
//public:
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "Son�µ�m_A = " << s.m_A << endl;
//	cout << "Base�µ�m_A = " << s.Base::m_A << endl;
//
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//
//}


////////////////////////////////////////////////
//ͬ����Ա����
//void test01()
//{
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s;
//	cout << "Son  �� m_A = " << s.m_A << endl;
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//
//	//ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	cout << "Son  �� m_A = " << Son::m_A << endl;
//	cout << "Base �� m_A = " << Son::Base::m_A << endl;
//}
//
////ͬ����Ա����
//void test02()
//{
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "ͨ���������ʣ� " << endl;
//	Son::func();
//	Son::Base::func();
//	//����ͬ������������ص�����������ͬ����Ա��������Ҫ�������������
//	Son::Base::func(100);
//}