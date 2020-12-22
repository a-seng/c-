#define _CRT_SECURE_NO_WARNINGS 1
																															 
#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//int my_strlen(char *x)
//{
//	if (*x != '\0')
//		return 1 + my_strlen(++x);
//	return 0;
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int i=my_strlen(arr);
//	printf("%d" ,i);
//	return 0;
//}
//int 
//int main()
//{
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	count = pow(n);
//	printf("%d ", n);
//	return 0;
//}
//void bubble(int *x, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(x + j)>*(x + j + 1))
//			{
//				int tmp = *(x  + j);
//				*(x  + j) = *(x  + j + 1);
//				*(x + j + 1) = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[100]; 
//	int i = 0; 
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	bubble(arr, n);
//	i = 0;
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//typedef struct
//{
//	float Realpart;
//	float Imagepart;
//}Complex;
//void Creat(&Complex C, float x, float y)
//{
//	C.Realpart = x;
//	C.Imagepart = y;
//}
//
Status InitList(SqList &L)
{
	L.elem = new ElemType[MAXSIZE];
	if (!L.elem) exit(OVERFLOW);
	L.length = 0;
	return OK;
}


00000000000000000000000000000000000000000000000000000000..................................................................................................................................................................................................................................................................................................................................................................................................................................................................................