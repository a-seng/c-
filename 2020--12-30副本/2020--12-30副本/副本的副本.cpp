#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;

//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ�������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////����������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷�������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//
//void test02()
//{
//	//�����ӷ�������
//	AbstractCalculator *abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;  //�����˼ǵ�����
//
//	//��������������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//�����˷�������
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}
//class Base
//{
//public:
//	//���麯��
//	//����ֻҪ��һ�����麯���ͳ�Ϊ������
//	//�������޷�ʵ��������
//	//���������д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func����" << endl;
//	};
//};
//
//void test01()
//{
//	Base * base = NULL;
//	//base = new Base;  ���󣬳������޷�ʵ��������
//	base = new Son;
//	base->func();
//	delete base;//�ǵ�����
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
//����������Ʒ		  /////////////////////////////////////////////////////////
//class AbstractDrinking {
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomething() = 0;
//	//�涨����
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee : public AbstractDrinking {
//public:
//	//��ˮ
//	virtual void Boil() {
//		cout << "��ũ��ɽȪ!" << endl;
//	}
//	//����
//	virtual void Brew() {
//		cout << "���ݿ���!" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup() {
//		cout << "�����ȵ��뱭��!" << endl;
//	}
//	//���븨��
//	virtual void PutSomething() {
//		cout << "����ţ��!" << endl;
//	}
//};


//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}														//������ˮ
//
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal ���캯�����ã�" << endl;
//	}
//	virtual void Speak() = 0;
//
//	//������������virtual�ؼ��֣��������������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal�������������ã�" << endl;
//	//}
//
//
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal ���������������ã�" << endl;
//}
//
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
	/////////////////////////////////////////////////////////////////////////////////////
//
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal ���캯�����ã�" << endl;
//	}
//
//	//virtual~Animal()
//	//{
//	//	cout << "Animal���������ĵ���" << endl;
//	//}
//	//������������virtual�ؼ��֣��������������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal�������������ã�" << endl;
//	//}
//
//
//	//virtual ~Animal() = 0;
//};
////
////Animal::~Animal()
////{
////	cout << "Animal ���������������ã�" << endl;
////}
//
////�Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯�����ã�" << endl;
//		m_Name = new string(name);
//	}
//	void Speak()
//	{
//		cout << *m_Name << "Сè��˵��!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat������������!" << endl;
//		if (this->m_Name != NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//public:
//	string *m_Name;
//};
//
//void test01()
//{
//	Cat *asd= new Cat("Tom");
//	asd ->Speak();
//
//	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
//	//��ô���������������һ������������
//	//���������������������ͨ������ָ���ͷ��������
//	delete asd;
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
//class Computer{
//public:
//	Computer(CPU * cpu, VideoCard * vc, Memory * mem)	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;	}	//�ṩ�����ĺ���
//	void work()
//	{
//		//������������������ýӿ�
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
////Lenovo����
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
//