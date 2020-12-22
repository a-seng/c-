#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
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
/*

#define N 20
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
void Random(int x[N], int k)
{
	int j = 0;
	for (j = 0; j < k; j++)
	{
		x[j] = rand() % 100;
	}
	printf("原数组：\n");
	for (j = 0; j < k; j++)
		printf("%d   ", x[j]);
	printf("\n");
}
void Swap(int x[N], int k)
{
	int left = k - 1, right = 0;
	while (left >= right)
	{
		int tmp = x[right];
		x[right] = x[left];
		x[left] = tmp;
		right++;
		left--;
	}
}
void Print(int x[N], int k)
{
	int j = 0;
	printf("交换后的数组为；》\n");
	for (j = 0; j < k; j++)
		printf("%d   ", x[j]);
}
int main()
{
	int arr[N];
	Random(arr, N);
	Swap(arr, N);
	Print(arr, N);
	return 0;
}*/
//#include<stdio.h>
//#include<string.h>
//void my_get(char*k)
//{
//	char a[] = { "*****" };
//	int i = 0;
//	do{
//		gets(k+i);
//		i++;
//
//	} while (*k != a);
//}
//char * my_search(char* x)
//{
//	char *y;
//	char a[] = { "*****" };
//	int i = 0;
//	do{
//		y = strcmp(x+i , x+i  + 1);
//		i++;
//
//	} while (*(x+1+i)!= a);
//	
//	return y;
//
//}
//void main()
//{
//	char* arr[100]
//
//	my_get(arr[0]);
//	char*x = my_search(arr[0]);
//	printf("%s", x);
//}									
//#include<stdio.h>
//#include<string.h>
//void search(char *name[100], int x, int *pmax)
//{
//	int i = 0;
//	int k = 0;
//	int t = 0;
//	for (i = 0; i < x; i++)
//	{
//		if (t = strcmp(name[k], name[i]) < 0)
//			k=pmax= i;
//	}
//
//}
//int main()
//{
//	char *arr[100];			
//	char a[100][6];
//	int max;
//	int i = 0;
//	int j = 0;
//	do		  
//	{			 
//		arr[i] = a[i];
//		gets(arr[i]);
//		i++;
//	} while (j = strcmp(arr[i - 1], "*****") != 0);
//	search(arr[i], i - 1, &max);
//	printf("%s", arr[max]);
//	return 0;
//}
//void find(char *name[], int n, int *p)
//{
//	int i = 0;
//	char *pmax = name[0];
//	for (i = 1; i < n; i++)
//	{
//		if (strcmp(pmax, name[i]) < 0)
//		{
//			strcpy(pmax, name[i]);
//			*p = i;
//		}
//	}
//	
//}
//int main(void)
//{
//	char *str[100];
//	char a[100][6];
//	int i = 0, max;
//	printf("****Input strings****\n");
//	do
//	{
//		str[i] = a[i];
//		scanf("%s", str[i]);
//		i++;
//	} while (strcmp(str[i - 1], "*****") != 0);
//	find(str, i, &max);
//	printf("max=%s\n", str[max]);
//	return 0;
//}
//void find(char *name[], int n, int *p)
//{
//	int i = 0;
//	char *max = name[0];
//	for (i = 1; i < n; i++)
//	{
//		if (strcmp(max, name[i]) < 0)
//		{
//			max = name[i];
//			*p = i;
//		}
//	}
//}
//
//
//
//int main()
//{
//	char *a[100], arr[100][6];
//	int i=0, max=0;
//	do
//	{
//		a[i] = arr[i];
//		scanf("%s", a[i]);
//		i++;
//	} while (strcmp(a[i-1], "*****") != 0);
//	find(a, i, &max);
//	printf("%s", a[max]);
//	return 0;
//}


//void Swap(char *arr, int i,char *p)
//{
//	int j = 0;
//	while (*(p + j) = *(arr + i + j))
//	{
//	j++;
//	}
//	
//
//}
//
//int main()
//{
//	char arr[30];
//	int m;
//	scanf("%s", arr);
//	scanf("%d", &m);
//	char p[20] = { 0 };
//	Swap(arr,m-1, p );
//	printf("%s", p);
//	return 0;
//}

//
//int Count(char *x)
//{
//	int i = 0;
//	while (*(x + i))
//		i++;
//	return i;
//}
//int main()
//{
//	char x[100] = { 0 };
//	scanf("%s", &x);
//	int count = Count(x);
//	printf("%d", count);
//	return 0;

//void Copy(char*dest, const char*sour)
//{
//	int i = 0;
//	while (*(dest + i) = *(sour + i))
//		i++;
//}
//int main()
//{
//	char arr[100];
//	char arr2[100];
//	gets(arr);
//	gets(arr2);
//	Copy(arr, arr2);
//	printf("%s", arr);
//	return 0;
//}


//int main()
//{
//	char arr[100];
//	char arr1[100];
//	int count;
//	gets(arr);
//	gets(arr1);
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != arr1[i])
//		{
//			count = arr[i] - arr1[i];
//			break;
//		}								   
//	}
//	printf("%d\n", count);
//	return 0;
//}
int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i; j <n-1; j++)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("* ");
		printf("\n");
	}
}