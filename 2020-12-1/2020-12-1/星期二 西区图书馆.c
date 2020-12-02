#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "I am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper)
//	}
//}
//
//
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <=5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1) == 1)
//						{
//							if (a*b*c*d*e==120)
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//							
//					}		
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c, d;
//	for (a = 1; a <= 2; a++)
//	{
//		for (b = 1; b <= 2; b++)
//		{
//			for (c = 1; c <= 2; c++)
//			{
//				for (d = 1; d <= 2; d++)
//				{
//					if ((
//						(a == 2) +
//						(c == 1) +
//						(d == 1) +
//						(d == 2) == 3
//						) && (a + b + c + d ==7 ))
//						printf("%d %d %d %d\n", a, b, c, d);
//
//				}
//			}
//		}
//	}
//	return 0;
//}
//void fan(char *x, int sz)
//{
//	char *left = x;
//	char *right = x + sz - 1-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "123456789";
//	int M;
//	scanf("%d", &M);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fan(arr, M);
//	fan(arr + M, sz - M);
//	fan(arr,sz );
//	
//	printf("%s", arr);
//}


#include<stdio.h>
#include<string.h>
#include<assert.h>

//
//
//
//void* my_memcpy(void *dest, const void *sor, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(sor != NULL);
//	if (dest <sor )
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)sor;
//			++(char*)dest;
//			++(char*)sor;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char *)dest + num) = *((char*)sor + num);
//
//		}
//	}
//return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	//struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	//struct S arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	printf("%d", arr2[0]);
//	return 0;
//}


//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c', 100, 3.14, "hellow bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}


//struct T
//{
//	double wight;
//	short age;
//};
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	struct T st;
//	int age;
//}S;
//
//int main()
//{
//	struct Stu s1 = { "张三", "17138515880", "男", { 55.6 } };
//	printf("%s %s  %fl %s ", s1.name, s1.tele,s1.st.wight, s1.sex);
//	struct Stu s2;
//	return 0;
//}

//int main()
//{
//	struct
//}
//void order(float *x, float *y)
//{
//	if (*x > *y)
//	{
//		float tmp =*x  ;
//		*x  =* y ;
//		*y  = tmp;
//	}
//}
//int main()
//{
//	int i = 0;
//	float  arr[3];
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	order(&arr[0],&arr[1]);
//	order(&arr[0], &arr[2]);
//	order(&arr[1],&arr[2]);
//	for (i = 0; i < 3; i++)
//	{
//		printf(" %.2f", arr[i]);
//	}
//	printf("\n");
//	return 0;
//
//
//}

//#include<ctype.h>
//
//int main()
//{
//	char A;
//	scanf("%c", &A);
//	char B=islower(A);
//	printf("%c", B);
//	return 0;
//}

int main()
{
	char b;
	scanf("%c", &b);
	if (b >= 'A'&&b <= 'Z')
		printf("%c", b + 32);
	else
		printf("%c\n", b);
	return 0;
}


















