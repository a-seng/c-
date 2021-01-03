#define _CRT_SECURE_NO_WARNINGS 1
//
////制作茶水
//class Tea : public AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮自来水!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡茶叶!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将茶水倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入枸杞!" << endl;
//	}
//};
//
////业务函数
//void DoWork(AbstractDrinking* drink) {
//	drink->MakeDrink();
//	delete drink;
//}
//
//void test01() {
//	DoWork(new Coffee);
//	cout << "--------------" << endl;
//	DoWork(new Tea);
//}


//和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。

//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用！" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
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
//	Animal *animal = new Cat("Tom");
//	animal->Speak();
//
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
//	//怎么解决？给基类增加一个虚析构函数
//	//虚析构函数就是用来解决通过父类指针释放子类对象
//	delete animal;
//}

//提供析构函数 释放3个电脑零件
//~Computer()
//{
//
//	//释放CPU零件
//	if (m_cpu != NULL)
//	{
//		delete m_cpu;
//		m_cpu = NULL;
//	}
//
//	//释放显卡零件
//	if (m_vc != NULL)
//	{
//		delete m_vc;
//		m_vc = NULL;
//	}
//
//	//释放内存条零件
//	if (m_mem != NULL)
//	{
//		delete m_mem;
//		m_mem = NULL;
//	}
//}
//
//private:
//
//	CPU * m_cpu; //CPU的零件指针
//	VideoCard * m_vc; //显卡零件指针
//	Memory * m_mem; //内存条零件指针
//};
//
////具体厂商
////Intel厂商
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel的CPU开始计算了！" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel的显卡开始显示了！" << endl;
//	}
//};