#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	if ((b=2))
//}
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//
//
//	return 0;

//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col) 
//
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}
//
//#include <stdio.h>
//void print(int p[], int sz) {
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
//#include <stdio.h>
//void test(int** ptr) {
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	int (*arr)[10] = &p;
//	//test(pp);
//	//test(&p);
//	test(arr[10]);
//	return 0;
//}

int main()
{
	printf("请输入 您想打印的行数》:");
	int n;//行数
	scanf("%d", &n);
	//用数组来 储存杨辉三角
	int arr[100][100] = { 0 };
	
	//调用一个函数
	int i = 0;	int j = 0;	for (i = 0, j = 0; j < n; j++)		arr[i][j] = 1;	for (i = 1; i < n; i++)	{		for (j = 1; j < i; j++)		{			arr[i][j] = arr[i][j - 1] + arr[i - 1][j - 1];			printf("%d ", arr[i][j]);		}		printf("\n");	}		return 0; 
}