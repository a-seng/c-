#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;
/*
class Person{
public:
	Person()
	{
		;
	}
	Person(int n){
		m_Age =new int( n);
	}
	Person& operator=(Person &p)
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		this->m_Age = new int(*p.m_Age);
		return *this;
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	int *m_Age;
};
void test01()
{
	Person p1 (10);
	Person p2 (20);
	Person p3;
    p3= p2 = p1;
	cout << "p1��Age          " << *p1.m_Age<<endl;
	cout << "p2��Age          " << *p2.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;

//}*/
//
//class Person
//{
//	friend ostream  &operator<<(ostream &cout, Person p);
//public:
//	Person()
//	{
//		m_Age = 0;
//	}
//
//	Person& operator++()
//	{
//		this->m_Age++;
//		return *this;
//	}
//	Person& operator++(int)
//	{
//		 Person tmp =*this ;
//		++*this;
//		return tmp;
//	}
//
//private:
//	int m_Age;
//
//};
//ostream& operator<<(ostream &cout, Person p)
//{
//	cout << p.m_Age;
//	return cout;
//}
//
//void test01()
//{
//	Person p;
//	cout <<++(++p) << endl;
//	cout << p << endl;
//	cout << (p++)++ << endl;
//	cout << p << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//class TMS
//{
//	friend ostream& operator<<(ostream &cout, TMS p);
//public:
//	TMS()
//	{
//		m_Age = 0;
//	}
//	TMS(int n)
//	{
//		m_Age = n;
//	}
//	TMS operator--(int)
//	{
//		TMS tmp = *this;
//		this->m_Age--;
//		return tmp;
//	}
//
//	TMS & operator--()
//	{
//		this->m_Age--;
//		return *this;
//	}
//private:
//	int m_Age;
//};
//ostream& operator<<(ostream &cout, TMS p)
//{
//	cout << p.m_Age;
//	return cout;
//}
//
//void test01()
//{
//	TMS p(100);
//	cout << --p << endl;//	cout << p << endl;//	cout<<--(--p) << endl;//	cout << p << endl;//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//����ҳ��
//class A
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//
//};
//
////Javaҳ��
//class Java : public A
//{
//public:
//	void content()
//	{
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python : public A 
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP : public A 
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
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



class Animal
{
public:
	virtual void speak()
	{
		cout << "������ð��" << endl;
	}
	int m_Age;
};

class Sheep :public Animal
{
public:
   void speak()
	{
		cout << "������˵��" << endl;
	}
	int m_Age;

};

class Tuo :public Animal
{
public:
	void speak()
	{
		cout << "tuo��˵��   " << endl;
	}
	int m_Age;
};

void DoSpeak(Animal &animal)
{
	animal.speak();
}
void test01()
{
	Sheep a;
	DoSpeak(a);
	a.Animal::speak();
	Tuo b;
	DoSpeak(b );

}

int main()
{
	test01();
	system("pause");
	return 0;
}