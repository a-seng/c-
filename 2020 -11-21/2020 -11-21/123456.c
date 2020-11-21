#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[80] = {0};
//	char c;
//	gets(arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (arr[i] >= '0'&&arr[i] <= '9')
//		{
//			printf("%d", arr[i] - 48);
//		}
//		i++;
//	}
//	return 0;
//}


//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 1 };
//	int i=0;
//	int k;
//	while (arr[i] != '\0')
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (i = 0; i < n; i++)
//		{
//			k = arr[i + 1] - arr[i];
//			printf("%d", k);
//			if (i < 9)
//				printf(" ");
//			if ((i+1) % 3 == 0)
//				printf("\n");
//		}
//}
/*
int main()
{
	int n, m = 0, a[10], i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		m++;
		if (m % 3 == 0 || i + 1 == n - 1)
		{
			printf("%d\n", a[i + 1] - a[i]);
		}
		else
			printf("%d ", a[i + 1] - a[i]);

	}
	return 0;
}*/
//#include <stdio.h>
//
//int main(){
//	char n;
//	int i = 0, index = -1;
//	char s[81]; //这里是81，至于为什么我也不知道
//	scanf("%c\n", &n);
//	gets(s);    //输入字符串
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (n == s[i]){
//			index = i;    //当前下标赋值
//		}
//	}
//	if (index != -1){
//		printf("index = %d", index);
//	}
//	else{
//		printf("Not Found");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[80];
//	char c;
//	int index=-1;
//	scanf("%c\n", &c);
//	gets(arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (arr[i] == c)
//			index= i;
//		i++;
//	}
//	if (index== -1)
//		printf("Not found");
//	else
//		printf("index=%d\n", index);
//	return 0;
//}

//int main()
//{
//	int m, n;
//	int arr[100][6];
//	int i = 0;
//	int j = 0;
//	scanf("%d %d\n", &m, &n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{	   
//		int sum = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum += arr[i][j];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	int arr[10][10];
//	int i, j; 
//	scanf("%d", &n);
//	int sum=0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1; j++)
//		{
//			if (j != n -1- i)
//				sum += arr[i][j];
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
/*
int main()
{
	int i, j,sum,n,m,s;
	int arr[4][8];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 8; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		 m = 1;
		 s = 1;
		 sum = 0;
		for (j = 0; j < 8; j++)
		{
			n = arr[i][j] / m*s ;
			m *= 10;
			s *= 2;
			sum += n;
		}

		printf("%d.",sum);
		
	}
	return 0;
}*/
//#include<stdio.h>
//int main(){
//	int a[] = { 128, 64, 32, 16, 8, 4, 2, 1 };
//	char e[33];
//	int i = 0, sum = 0;
//	gets(e);
//	while (e[i])
//	{
//		sum += (e[i] - '0')*a[i % 8];
//		i++;
//		if (i % 8 == 0){
//			printf(".");
//			printf("%d", sum);
//			sum = 0;
//		}
//	}
//}



int main()
{
	int M, N;
	int arr[100][21];
	int i, j,k=0;
	char s[] = { "None" };//
	scanf("%d %d\n", &M, &N);  //
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);									//输入
		}
	}
	for (i = 1; i < M - 1; i++)		   //循环	   M-1  排除最后一行		  第一行
	{
		for (j = 1; j < N - 1; j++)			//循环			 N-1 排除最后一列		  第一列
		{
			if (arr[i][j]>arr[i][j + 1] && arr[i][j]>arr[i][j - 1]	//条件
				&& arr[i - 1][j] && arr[i + 1][j])		  {

				printf("%d %d %d\n", arr[i][j], i + 1, j + 1);			  //满足条件输出
				k = 1;													  //判定是否 有不存在的情况
			}
		}
	}
	if (k == 0)			 //不存在的情况
		printf("%s", &s);
}