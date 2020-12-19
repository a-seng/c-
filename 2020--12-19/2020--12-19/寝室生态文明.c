#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double r;
//	double π = 3.1415926;
//	scanf("%fl", &r);
//	printf("%.3fl", 4 / 3 * π*pow(r, 3));
//	return 0;
//
//}
//int main()
//{
//	char arr1[50] = { "a seng hello12312313213" };
//	memset(arr1, '**', 49);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int b = 1234567890;
//	printf("%d \' \" \? \\   ",i );
//	printf("\n");
//	printf("%d\r\n\v", b);
//	printf("%d\n\b\b\b\b\b\b\b\b\b\b\b\b\b\v", b);
//
//	return 0;
//int main()
//{
//	int a = 100;
//	putchar(a);
//	printf("\n");
//	
//	//int a;
//	//char b;
//	//float c;
//	//scanf("%d%c%f", &a, &b, &c);
//	//printf("%d%c%f", a, b, c);
//	return 0;
//}
//char main()
//{
//	char arr[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	for (i = 0; i < 1; i++)
//	{
//		switch (arr[i])
//		{
//		case 'a':printf("1");
//			continue;
//		case 'b':printf("2");
//			break;
//		case 'c':printf("3");
//			break;
//		case 4:printf("44");
//			break;
//		default:printf("error");
//		}
//		switch (arr[i])
//		{
//		case 'a':printf("1");
//			continue;
//		case 'b':printf("2");
//			break;
//		case 'c':printf("3");
//			break;
//		case 4:printf("44");
//			break;
//		default:printf("error");
//		}
//		
//	}
//	return 0;
//}
#include<math.h>
//void main()
//{
//	//设置一个解决 一元二次方程
//	double a, b, c, p1, p2,dics,x1,x2;
//	scanf("%fl %fl %fl", &a, &b, &c);
//	if (fabs(a) <= 1e-6)						   //当a==0  不是 一元二次方程
//		printf("is not a quadratic\n");
//	else
//	{
//		dics = b*b - 4 * a*c;						   //dics b平方减四ac
//		if (fabs(dics) <= 1e-6)													   //如果 dics==0
//			printf("have two equal roots %.5fl", -b/(2*a));							  //
//		else
//		{
//			if (dics > 1e-6)																				 //》0 两个不相等的实数根
//			{
//				x1 = ((-b + sqrt(dics)) / (2 * a));
//				x2 = ((-b - sqrt(dics)) / (2 * a));
//				printf("x1=%.5fl\nx2=%.5fl\n", x1, x2);
//			}
//			else
//			{
//				p1 = -b / (2 * a);
//				p2 = sqrt(dics) / (2 * a);
//				printf("real root=%.5fl  \nimagin root=%.5fl", p1 + p2, p1 - p2);
//			}
//		}
//	}
//}
//int main()
//{
//	float a, b, c, x1, x2, real, imag, dert;
//	scanf("%f,%f,%f", &a, &b, &c);
//	dert = b*b - 4 * a*c;
//	if (a <= 1e-6)
//	{
//		printf("不是一元二次方程\n");
//	}
//	else
//	{
//		if (fabs(dert) <= 1e-6)
//			printf("有两个相同的实数根：%.5f \n", -b / (2 * a));
//		else
//		{
//			if (dert > 0)
//			{
//				x1 = (-b + sqrt(dert)) / 2 * a;
//				x2 = (-b - sqrt(dert)) / 2 * a;
//				printf("x1=%.5f x2=%.5f", x1, x2);
//			}
//			else
//			{
//				real = -b / (2 * a);
//				imag = sqrt(-dert) / (2 * a);
//				printf("%8.4f +%8.4fi\n", real, imag);
//				printf("%8.4f -%8.4fi\n", real, imag);
//			}
//		}
//	}											  1e-6 1e-6 1e-6 1e-61e-6   67868686868789087789079070987987907987890
//}
//int main()
//{
//	char arr[100];
//	
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int tmp = 0;
//	gets(arr);
//	char p[100] = { '0' };
//	p[1] = '.';
//	for (i = 0; i < 100; i++)
//	{		   
//		if (arr[i] == '.')
//		{ while(arr[i]!='\0')
//			{
//				p[1 + j] = arr[i];
//				j++;
//				i++;
//				if (arr[tmp] == '0')
//					count++;
//
//			}
//		}
//	}
//	i = 0;
//	while (p[i] != '\0')
//	{
//		printf("%c", p[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[100] = { '0','.' };
//	char arr1[100];
//	int i = 0;
//	int j = 0;
//	gets(arr1);
//	int tmp;
//	while (arr1[i] != '\0')
//	{
//		i++;
//		if (arr1[i] == '.')
//		{
//			while (arr1[i] != '\0')
//			{
//				if (arr1[i] == '0'&&arr1[i-1]!='0')
//					tmp = j;
//				arr[1 + j] = arr1[i];
//				i++;
//				j++;
//			}
//		}
//	}
//	for (i = 0; i <= tmp; i++)
//		printf("%c",arr[i]);
//	return 0;
//
//}
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//#define N 20
//void suijishu(int b[], int i)
//{
//	printf("输入数组为：");
//	printf("\n");
//	int j = 0;
//	for (j = 0; j < i;j ++)
//	{
//		b[j ] = rand() % 100;
//		printf("%d\t", b[j ]);
//	}
//}
//void jiaohuan(int *p, int i)
//{
//	int right = 0;
//	int left = i-1;
//	while (right < left)
//	{
//		int tmp = *(p + right);
//		*(p + right) -= *(p + left);
//		*(p + left) = tmp;
//		right++;
//		left--;
//	}
//}
//void shuchu(int b[], int i)
//{
//	int j = 0;
//	printf("逆序输出数组a:");
//	for (j = 0; j < i; j++)
//		printf("%d", b[i]);
//}
//
//int main()
//{
//	int arr[N],i,b;
//	suijishu(arr, N);
//	jiaohuan(arr, N);
//	shuchu(arr, N);
//	return 0;
//
//}
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 20
void Random(int *x, int k)
{
	int j = 0;
	for (j = 0; j < k; j++)
	{
		*(x + j) = rand()%100;
	}
	printf("原数组：\n");
	for (j = 0; j < k; j++)
		printf("%d   ", *(x + j));
	printf("\n");
}
void Swap(int *x, int k)
{
	int left = k-1, right = 0;
	while (left>= right)
	{
		int tmp = *(x + right);
		*(x + right) = *(x + left);
		*(x + left) = tmp;
		right++;
		left--;
	}
}
void Print(int *x, int k)
{
	int j = 0;
	printf("交换后的数组为；》\n");
	for (j = 0; j < k; j++)
		printf("%d   ", *(x + j));
}
int main()
{
	int arr[N];
	Random(arr, N);
	Swap(arr, N);
	Print(arr, N);
	return 0;
}