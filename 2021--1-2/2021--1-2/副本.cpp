#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;
//�������ͺ���
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////���������ͺ���
//void swapDouble(double& a, double& b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ���ṩͨ�õĽ�������
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//
//	//����ģ��ʵ�ֽ���
//	//1���Զ������Ƶ�
//	mySwap(a, b);
//
//	//2����ʾָ������
//	mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
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
//
//����ģ���ṩͨ�õĽ�������
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//// 1���Զ������Ƶ��������Ƶ���һ�µ���������T,�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	mySwap(a, b); // ��ȷ�������Ƶ���һ�µ�T
//	//mySwap(a, c); // �����Ƶ�����һ�µ�T����
//}
//
//
//// 2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func ����" << endl;
//}
//
//void test02()
//{
//	//func(); //����ģ�岻�ܶ���ʹ�ã�����ȷ����T������
//	func<int>(); //������ʾָ�����͵ķ�ʽ����Tһ�����ͣ��ſ���ʹ�ø�ģ��
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}
//
////�����ĺ���ģ��
//template<typename T>
//void mySwap(T &a, T&b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//

//template<class T> // Ҳ�����滻��typename
////����ѡ�����򣬽��ж�����Ӵ�С������
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; //��������±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i) //�����������±겻��i����������
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//template<typename T>
//void printArray(T arr[], int len) {
//
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����char����
//	char charArr[] = "bdcfeagh";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//����int����
//	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}
//��ͨ�����뺯��ģ����ù���
//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "�������ص�ģ��" << endl;
//}
//
//void test01()
//{
//	//1���������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//	// ע�� ������߱�����  ��ͨ�������еģ���ֻ������û��ʵ�֣����߲��ڵ�ǰ�ļ���ʵ�֣��ͻᱨ���Ҳ���
//	int a = 10;
//	int b = 20;
//	myPrint(a, b); //������ͨ����
//
//	//2������ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//	myPrint<>(a, b); //���ú���ģ��
//
//	//3������ģ��Ҳ���Է�������
//	int c = 30;
//	myPrint(a, b, c); //�������صĺ���ģ��
//
//	//4�� �������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2); //���ú���ģ��
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