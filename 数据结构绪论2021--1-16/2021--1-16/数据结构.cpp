#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

typedef struct
{
	float realPart;
	float imagPart;
}Complex;

void creat(Complex &c, float x, float y)
{
	c.realPart = x;
	c.imagPart = y;
}

float GetImag(Complex C)
{
	return C.imagPart;
}

float GetReal(Complex C)
{
	return C.realPart;
}

Complex ADD(const Complex C1, const Complex C2)
{
	Complex Sum;
	Sum.imagPart = C1.imagPart + C2.imagPart;
	Sum.realPart = C1.realPart + C2.realPart;
	return Sum;
}

Complex Sub(const Complex C1, const Complex C2)
{
	Complex Sub;
	Sub.imagPart = C1.imagPart - C2.imagPart;
	Sub.realPart = C1.realPart - C2.realPart;
	return Sub;
}

int main()
{
	//Complex C;
	//float x;
	//float y;
	//cout << "请输入 该复数的 实部和 虚部:>>" << endl;
	//cin >> x >> y ;
	//creat(C, x, y);

	//float imag=GetImag(C);
	//float real = GetReal(C);

	//cout << "实部为:>" << C.realPart << "     " << "虚部为:>" << C.imagPart << endl;			  =
	//int *p;
	//int k = 0;
	//p = &k;								 
	//int *&s = p;
	//int t = 100;
	//s = &t;
	//*s = 1000;
	//cout << *s << "  " << *p << endl;

	//int i = 100;
	//i = 200;
	//const int k = i*100;
	//const int *p = &i;
	//p = &k;
	//cout << *p << endl;
	
//	cout << k << endl;


	double k = 100.90;

	const int p = k;
	const int &s = k;
	cout << p << "         " << s << endl;
	//const int k = 100;
//	const int &p = k;
	


	system("pause");
	return 0;
}