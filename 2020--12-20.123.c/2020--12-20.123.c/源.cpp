#define _CRT_SECURE_NO_WARNINGS 1
//typedef struct
//{
//	float Realpart;
//	float Imagepart;
//}Complex;
//.
//void Creat(&Complex C, float x, float y)
//{
//	C.Realpart = x;
//	C.Imagepart = y;
//}
//float GetReal(Complex c)
//{
//	C = x + yi;
//	return C.Realpart;
//}
//float GetImag(Complex C)
//{
//	return C.Imagepart;
//}
//Complex Add(Complex C1, Complex C2)
//{
//	Complex sum;
//	sum.Realpart = C1.Realpart + C2.Realpart;
//	sum.Imagepart = C1.Imagepart + C2.Imagepart;
//	return sum;
//}
//Complex Sub(Complex C1, Complex C2)
//{
//	Complex difference;
//	difference.Realpart = C1.Realpart - C2.Realpart;
//	difference.Imagepart = C1.Imagepart - C2.Imagepart;
//	return difference;
//
//}
//
//int main()
//{
//	Creat();
//	return 0;
//}
Status InitList(SqList &L)
{
	L.elem = new ElemType[MAXSIZE];
	if (!L.elem) exit(OVERFLOW);
	L.length = 0;
	return OK;
}
