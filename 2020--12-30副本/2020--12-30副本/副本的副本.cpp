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
////加法计算器
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计算器
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器
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
//	//创建加法计算器
//	AbstractCalculator *abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;  //用完了记得销毁
//
//	//创建减法计算器
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//创建乘法计算器
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
//	//纯虚函数
//	//类中只要有一个纯虚函数就称为抽象类
//	//抽象类无法实例化对象
//	//子类必须重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func调用" << endl;
//	};
//};
//
//void test01()
//{
//	Base * base = NULL;
//	//base = new Base;  错误，抽象类无法实例化对象
//	base = new Son;
//	base->func();
//	delete base;//记得销毁
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
//抽象制作饮品		  /////////////////////////////////////////////////////////
//class AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	//规定流程
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee : public AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮农夫山泉!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡咖啡!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将咖啡倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入牛奶!" << endl;
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
//}														//制作茶水
//
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal 构造函数调用！" << endl;
//	}
//	virtual void Speak() = 0;
//
//	//析构函数加上virtual关键字，变成虚析构函数
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用！" << endl;
//	//}
//
//
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用！" << endl;
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
//		cout << "Animal 构造函数调用！" << endl;
//	}
//
//	//virtual~Animal()
//	//{
//	//	cout << "Animal析构函数的调用" << endl;
//	//}
//	//析构函数加上virtual关键字，变成虚析构函数
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用！" << endl;
//	//}
//
//
//	//virtual ~Animal() = 0;
//};
////
////Animal::~Animal()
////{
////	cout << "Animal 纯虚析构函数调用！" << endl;
////}
//
////和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用！" << endl;
//		m_Name = new string(name);
//	}
//	void Speak()
//	{
//		cout << *m_Name << "小猫在说话!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数调用!" << endl;
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
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
//	//怎么解决？给基类增加一个虚析构函数
//	//虚析构函数就是用来解决通过父类指针释放子类对象
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
//		m_mem = mem;	}	//提供工作的函数
//	void work()
//	{
//		//让零件工作起来，调用接口
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel的内存条开始存储了！" << endl;
//	}
//};
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo的CPU开始计算了！" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo的显卡开始显示了！" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo的内存条开始存储了！" << endl;
//	}
//};
//
//