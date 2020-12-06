#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<windows.h>
//int main(void)
//{
//
//
//	int *p = (int*)malloc(10*sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	else
//	{
//		int i = 0;
//		for (i = 0; i <5; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d   ", *(p + i));
//		}
//		printf("\n");
//	}
//	int *p2 = realloc(p, 3000);
//	if (p2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	else
//	{
//		int i = 0;
//		p = p2;
//		for (i = 0; i <100; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 100; i++)
//		{
//			printf("%d     ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//
//}
//int main(void)
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()											   
//{
//	int i = 1;
//	for (i = 1; i < 1000; i++)
//	{									
//		printf("%d ", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	char *str = "abcdef";
//	printf("%s\n", str);
//	printf(str);
//	printf("abcdef");
//	return 0;
//}

//void getmemory1(char **p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char *str = NULL;
//	getmemory1(&str);
//	strcpy(str, "hello bit");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	FILE*pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
//int main()
//{
//	int  ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		printf("leap year");
//	else
//		printf("not leap year\n");
//	return 0;
//}
//int main()
//{
//	int x;
//	int y;
//	scanf("%d", &x );
//	if (x < 1)
//		printf("%d", x);
//	if (1 < x&&x < 10)
//		printf("%d", 2 * x - 1);
//	else
//		printf("%d", 3 * x - 11);
//	printf("\n");
//	return 0;
//
//}
//float   jiecheng(int x)
//{
//	if (x  == 1)
//	return 1;
//	else
//	return  x *jiecheng(x-1);
//
//}
//
//int main()
//{
//	int a, b, c;
// scanf("%d %d %d", &a,&b,&c);
//
// float n1 = jiecheng(a);
// printf("%.0fl\n", n1);
// float   n2 = jiecheng(b);
// printf("%.0fl\n", n2);
// float   n3 = jiecheng(c);
// printf("%.0f\n", n3);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	float n1 = jiecheng(a);
//	printf("%.0fl\n", n1);
//	float   n2 = jiecheng(b);
//	printf("%.0fl\n", n2);
//	float   n3 = jiecheng(c);
//	printf("\n");
//	return 0;
//}
//
//1307674368000
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//		printf("15\n120\n\n")
//		return 0;
//}
//1307674368000

//float taozhi(int n)
//{
//	float sum=1.0;
//	for (; n > 1; n--)
//	{			   
//
//		sum = (sum + 1) * 2;
//	}
//	return sum;
//
//}
//int main()
//{
//	float x;
//	int n;
//	scanf("%d", &n);
//	x = taozhi(n);
//	printf("%.0f\n", x);
//	return 0;
//}
//int main()
//{
//	int n=0;
//	int i = 0;
//	float x=100;
//	float y = 100;
//	scanf("%d", &n);
//	for (i= 1; i < n; i++)
//	{
//		
//		
//		y /= 2;
//		x += y*2;
//		
//	}
//	printf("%.4f %.4f\n", x, y/2);
//	return 0;
//
//}
//int main()
//{
//	int sum=0;
//	int i;
//	int j;
//	for (i = 2; i <= 1000; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//				sum += j;
//		}
//		if (sum == i)
//		{
//			printf("%d:", sum);
//			for (j = 1; j < i; j++)
//			{
//
//				
//					if (i%j == 0)
//					printf(" %d", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int sum = 0;
//		for (j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//				sum += j;
//
//		}
//	
//		if (sum == i)
//			printf("%d ", i);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	int j = 0;
//	for (j = 2; j <=n; j++)
//	{
//		if (n%j == 0)
//			sum += j;
//	}
//	if (sum == n)
//		printf("prime\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[41] = { 1, 1, 2 };
//	for (i = 0; i < 40; i++)
//	{
//		if (i == 0 || i == 1)
//			printf("1 ");
//		if(i > 1)
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	double j = 1;
//	double sum=0;
//	while (1 / j > 1e-6)
//	{
//		sum += 1 / j*i;
//		j += 2;
//		i *= -1;
//
//
//	}
//	printf("%.6f\n", sum*4);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int x;
	int i = 1;
	int j = 10000;
	int g = 1;
	int s = 0;
	int tmp = 1;
	scanf("%d", &x);
		int k = x / 10000;
	if (k >= 1 && k<10)
	{
		tmp = x;
		printf("%d\n", x);
		for (i = 0; i<5; i++)											 //////////////34568  34568-30000 4568 	  4000 568
		{
			s = tmp / j;
			printf("%d ", s);
			tmp = tmp - s*j;
			j /= 10;
		}																				//		34568
		printf("\n");
		j = 10;
		g = 1;
		tmp = x;
		for (i = 0; i<5; i++)
		{
			
			s = tmp % j;
			printf("%d ",s);
			tmp = tmp / 10;
		}
		printf("\n");

	}
}