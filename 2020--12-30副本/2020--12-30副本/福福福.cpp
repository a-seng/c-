#define _CRT_SECURE_NO_WARNINGS 1
//
////������ˮ
//class Tea : public AbstractDrinking {
//public:
//	//��ˮ
//	virtual void Boil() {
//		cout << "������ˮ!" << endl;
//	}
//	//����
//	virtual void Brew() {
//		cout << "���ݲ�Ҷ!" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup() {
//		cout << "����ˮ���뱭��!" << endl;
//	}
//	//���븨��
//	virtual void PutSomething() {
//		cout << "�������!" << endl;
//	}
//};
//
////ҵ����
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


//�Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������

//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯�����ã�" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
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
//	Animal *animal = new Cat("Tom");
//	animal->Speak();
//
//	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
//	//��ô���������������һ������������
//	//���������������������ͨ������ָ���ͷ��������
//	delete animal;
//}

//�ṩ�������� �ͷ�3���������
//~Computer()
//{
//
//	//�ͷ�CPU���
//	if (m_cpu != NULL)
//	{
//		delete m_cpu;
//		m_cpu = NULL;
//	}
//
//	//�ͷ��Կ����
//	if (m_vc != NULL)
//	{
//		delete m_vc;
//		m_vc = NULL;
//	}
//
//	//�ͷ��ڴ������
//	if (m_mem != NULL)
//	{
//		delete m_mem;
//		m_mem = NULL;
//	}
//}
//
//private:
//
//	CPU * m_cpu; //CPU�����ָ��
//	VideoCard * m_vc; //�Կ����ָ��
//	Memory * m_mem; //�ڴ������ָ��
//};
//
////���峧��
////Intel����
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};