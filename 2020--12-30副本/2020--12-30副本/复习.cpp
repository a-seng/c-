#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;


//class One{
//public:
//	int m_Age;
//};
//
//class Two :virtual public One{};
//class Three :virtual  public One{};
//class Four :public Two, public Three{};
//void test01()
//{
//	One o;
//	o.m_Age = 10000;
//	Two t;
//	Three th;
//	Four f;
//	cout << "��һ�� δ�Ķ��µ����" << endl;
//	cout << "One�� ���" << o.m_Age << endl;
//	cout << "Two�����" << t.m_Age << endl;	 
//	cout << "Three�����" << th.m_Age << endl;
//	cout << "Four�����" << f.m_Age << endl;
//
//	f.Three::m_Age = 500;
//	cout << "��һ�� δ�Ķ��µ����" << endl;
//	cout << "One�� ���" << o.m_Age << endl;
//	cout << "Two�����" << t.m_Age << endl;
//	cout << "Three�����" << th.m_Age << endl;
//	cout << "Four�����" << f.m_Age << endl;
//
//	cout << "�ڶ��� �Ķ��µ����" << endl;
//	cout << "One�� ���" << f.One::m_Age << endl;
//	cout << "Two�����" << f.Two::m_Age << endl;
//	cout << "Three�����" << f.Three::m_Age << endl;
//	cout << "Four�����" << f.m_Age << endl;
//
//
//	cout << "�ڶ��� �Ķ��µ����" << endl;
//	cout << "One�� ���" << f.One::m_Age << endl;
//	cout << "Two�����" << f.Two::m_Age << endl;
//	cout << "Three�����" << f.Three::One::m_Age << endl;
//	cout << "Four�����" << f.m_Age << endl;
//
//
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
//
//class A{
//public:
//	int m_A;
//	int m_B;
//	int GetResult()
//	{
//		return 0;
//	}
//
//};
//
//class ADD :public A		{
//public:	int GetResult()
//	{
//		return m_A + m_B;
//	}
//};
//
//class Sub :public A		{
//	public:	int GetResult()
//	{
//		return m_A - m_B;
//	}
//};
//
//class Mil :public A		{
//public:	int GetResult()
//	{
//		return m_A * m_B;
//	}
//};
//
//void test02()
//{
//
//	//ADD a;
//	//a.m_A = 19;
//	//a.m_B = 20;
//	//cout << a.m_A << " + " << a.m_B << " = " << a.GetResult() << endl;
//	A*abc = new ADD;
//	abc->m_A = 10;
//	abc->m_B = 20;
//	cout << abc->m_A << "+" << abc->m_B << "=" << abc->GetResult() << endl;
//	delete abc;
//	abc = NULL;
//
//}
//
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



//
//class One{
//public:
//	virtual void func() = 0;
//};
//
//class Two :public One{
//public:
//	virtual void func(){
//		cout << "Two�ں����ĵ���" << endl;
//	}
//};
//
//void test01()
//{
//	Two s;
//	s.func();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//class Ause{
//public:
//	virtual void Boil() = 0;
//	virtual void C() = 0;
//	virtual void D() = 0;
//	virtual void E() = 0;
//	void use()
//	{
//		Boil();
//		C();
//		D();
//		E();
//	}
//};
//
//class Coffee :public Ause{
//public:
//	virtual void Boil()
//	{
//		cout << "����ũ������ȫ" << endl;
//	}
//	virtual void C()
//	{
//		cout << "���뿧��" << endl;
//	}
//	virtual void D()
//	{
//		cout << "����" << endl;
//	}
//	virtual void E()
//	{
//		cout << "����" << endl;
//	}
//};
//
//class Tea:public Ause
//{
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	virtual void C()
//	{
//		cout << "�����Ҷ" << endl;
//	}
//	virtual void D()
//	{
//		cout << "�ȴ�" << endl;
//	}
//	virtual void E()
//	{
//		cout << "�������" << endl;
//	}
//};
//void DoWork(Ause&p)
//{
//	p.use();
//
//}
//void test01()
//{
//	Tea t;
//	Coffee c;
//	DoWork(t);
//	cout << "_______________________________" << endl;
//	DoWork(c);
//	cout << "________________________________" << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}






//class One{
//public:
//	One()
//	{
//		cout << "One ���캯���ĵ���" << endl;
//	}
//	virtual void Speak() = 0;
//
//};
//
//class Two :public One{
//public:
//	Two(string name)
//	{
//		cout << "Two�����ĵ���" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//	~Two()
//	{
//		cout << "Two��������������" << endl;
//		if (this->m_Name != NULL)
//
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string*m_Name;
//};
//void test01()
//{
//	One *asd = new Two("asdf");
//	asd->Speak();
//	delete asd;
////}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//									//}
//
//void test01()
//{
//	//��һ̨�������
//	CPU * intelCpu = new IntelCPU;
//	VideoCard * intelCard = new IntelVideoCard;
//	Memory * intelMem = new IntelMemory;
//
//	cout << "��һ̨���Կ�ʼ������" << endl;
//	//������һ̨����
//	Computer * computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "-----------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ������" << endl;
//	//�ڶ�̨������װ
//	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//
//	cout << "-----------------------" << endl;
//	cout << "����̨���Կ�ʼ������" << endl;
//	//����̨������װ
//	Computer * computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
//	computer3->work();
//	delete computer3;
//
//}											 #include<iostream>
//using namespace std;//����CPU��
//class CPU
//{
//public:	//����ļ��㺯��
//	virtual void calculate() = 0;
//};//�����Կ���
//class VideoCard
//{
//public:	//�������ʾ����
//	virtual void display() = 0;
//};//�����ڴ�����
//class Memory
//{
//public:
//	//����Ĵ洢����
//	virtual void storage() = 0;
//};//������


class CPU
{
public:
	//����ļ���ĺ���
	virtual void calculate() = 0;
};
class VedioCard
{
public:
	//����ļ���ĺ���
	virtual void display() = 0;
};
class Memory
{
public:
	//����ļ���ĺ���
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU*cpu, VedioCard*vc, Memory*mem);


private:
	CPU * m_cpu;
	VedioCard *m_vc;
	Memory* m_mem;
};

int main()
{

}