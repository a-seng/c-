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
//	cout << "第一次 未改动下的输出" << endl;
//	cout << "One的 输出" << o.m_Age << endl;
//	cout << "Two的输出" << t.m_Age << endl;	 
//	cout << "Three的输出" << th.m_Age << endl;
//	cout << "Four的输出" << f.m_Age << endl;
//
//	f.Three::m_Age = 500;
//	cout << "第一次 未改动下的输出" << endl;
//	cout << "One的 输出" << o.m_Age << endl;
//	cout << "Two的输出" << t.m_Age << endl;
//	cout << "Three的输出" << th.m_Age << endl;
//	cout << "Four的输出" << f.m_Age << endl;
//
//	cout << "第二次 改动下的输出" << endl;
//	cout << "One的 输出" << f.One::m_Age << endl;
//	cout << "Two的输出" << f.Two::m_Age << endl;
//	cout << "Three的输出" << f.Three::m_Age << endl;
//	cout << "Four的输出" << f.m_Age << endl;
//
//
//	cout << "第二次 改动下的输出" << endl;
//	cout << "One的 输出" << f.One::m_Age << endl;
//	cout << "Two的输出" << f.Two::m_Age << endl;
//	cout << "Three的输出" << f.Three::One::m_Age << endl;
//	cout << "Four的输出" << f.m_Age << endl;
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
//		cout << "Two内函数的调用" << endl;
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
//		cout << "加热农夫三年全" << endl;
//	}
//	virtual void C()
//	{
//		cout << "加入咖啡" << endl;
//	}
//	virtual void D()
//	{
//		cout << "搅拌" << endl;
//	}
//	virtual void E()
//	{
//		cout << "加糖" << endl;
//	}
//};
//
//class Tea:public Ause
//{
//	virtual void Boil()
//	{
//		cout << "烧水" << endl;
//	}
//	virtual void C()
//	{
//		cout << "翻入茶叶" << endl;
//	}
//	virtual void D()
//	{
//		cout << "等待" << endl;
//	}
//	virtual void E()
//	{
//		cout << "加入枸杞" << endl;
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
//		cout << "One 构造函数的调用" << endl;
//	}
//	virtual void Speak() = 0;
//
//};
//
//class Two :public One{
//public:
//	Two(string name)
//	{
//		cout << "Two函数的调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//	~Two()
//	{
//		cout << "Two的析构函数调用" << endl;
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
//	//第一台电脑零件
//	CPU * intelCpu = new IntelCPU;
//	VideoCard * intelCard = new IntelVideoCard;
//	Memory * intelMem = new IntelMemory;
//
//	cout << "第一台电脑开始工作：" << endl;
//	//创建第一台电脑
//	Computer * computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "-----------------------" << endl;
//	cout << "第二台电脑开始工作：" << endl;
//	//第二台电脑组装
//	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//
//	cout << "-----------------------" << endl;
//	cout << "第三台电脑开始工作：" << endl;
//	//第三台电脑组装
//	Computer * computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
//	computer3->work();
//	delete computer3;
//
//}											 #include<iostream>
//using namespace std;//抽象CPU类
//class CPU
//{
//public:	//抽象的计算函数
//	virtual void calculate() = 0;
//};//抽象显卡类
//class VideoCard
//{
//public:	//抽象的显示函数
//	virtual void display() = 0;
//};//抽象内存条类
//class Memory
//{
//public:
//	//抽象的存储函数
//	virtual void storage() = 0;
//};//电脑类


class CPU
{
public:
	//抽象的计算的函数
	virtual void calculate() = 0;
};
class VedioCard
{
public:
	//抽象的计算的函数
	virtual void display() = 0;
};
class Memory
{
public:
	//抽象的计算的函数
	virtual void storage() = 0;
};

//电脑类
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