#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
////int main()
////{
////	int Day = 14;
////	cout << "һ���ܹ���:" << Day << "��" << endl;
////	string a = "sdfahjkl;";
////	cout << a << endl;
////
////	system("pause");
////
////	return 0;
////}
////
////ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//
////ȫ�ֳ���
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	//�ֲ�����
//	int a = 10;
//	int b = 10;
//
//	//��ӡ��ַ
//	cout << "�ֲ�����a��ַΪ�� " << (int)&a << endl;
//	cout << "�ֲ�����b��ַΪ�� " << (int)&b << endl;
//
//	cout << "ȫ�ֱ���g_a��ַΪ�� " << (int)&g_a << endl;
//	cout << "ȫ�ֱ���g_b��ַΪ�� " << (int)&g_b << endl;
//
//	//��̬����
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "��̬����s_a��ַΪ�� " << (int)&s_a << endl;
//	cout << "��̬����s_b��ַΪ�� " << (int)&s_b << endl;
//
//	cout << "�ַ���������ַΪ�� " << (int)&"hello world" << endl;
//	cout << "�ַ���������ַΪ�� " << (int)&"hello world1" << endl;
//
//	cout << "ȫ�ֳ���c_g_a��ַΪ�� " << (int)&c_g_a << endl;
//	cout << "ȫ�ֳ���c_g_b��ַΪ�� " << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "�ֲ�����c_l_a��ַΪ�� " << (int)&c_l_a << endl;
//	cout << "�ֲ�����c_l_b��ַΪ�� " << (int)&c_l_b << endl;
//
//	system("pause");
//
//	return 0;
//}
//int * func()
//{
//	int *a = new int(10);
//	return a;
//}
//int main()
//{
	/*int *p = new int[10] ;
	int i = 0;
	for (i = 0; i < 10; i++)
		cout << p[i] << endl;
	delete[] p;
	return 0;

*/
	//int a = 0;
	//int &b = a;
	//b = 100;
	//cout << b << endl;			   
	//cout << a<< endl;
	//cout << "a=" << a << endl;
	//return 0;















	//int *p = func();
	//cout << *p << endl;
	//delete p;
	//cout << *p << endl;
	//return 0;
//}
//���ؾֲ���������


//���ؾ�̬��������
int& test02() {
	static int a = 20;
	return a;
}

int main() {

	//���ܷ��ؾֲ�����������


	//�����������ֵ����ô���뷵������



	cout << "ref2 = " << test02() << endl;
//	cout << "ref2 = " << ref2 << endl;


	return 0;
}