#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>/*
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
		
	}
	return -1;
}
int main()
{
	int k;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("您想要查找的数字:>");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (-1 == ret)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
//}*/
//int m/*ain()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
////}*/
//{
//	void print(int n)               1234
//	{
//		if (n > 9)             1234
//		{
//			print(n / 10);            123
//
//			{
//				void print(int n)          123
//				{
//					if (n > 9)
//					{
//						print(n / 10)          12
//
//						{
//							void print(int n)      12
//							{
//								if (n > 9)
//								{
//									print(n / 10)      1
//
//									{
//										void print(int n)    1
//										{
//											if (n > 9)
//											{
//												print(n / 10);
//											}
//											printf("%d ", n % 10)      1
//
//										}
//									};
//								}
//								printf("%d ", n % 10)       2
//
//							}
//						};
//					}
//					printf("%d ", n % 10)  3
//
//				}
//			}
//
//		}
//		printf("%d ", n % 10)    4
//
//	}
////}
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3,4,5,6 }, { 8, 9 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int j,i,s,g;
//	printf("请输入您想打印的乘法口诀表层数》；");
//	scanf("%d", &s );
//	for (j = s ; j >=1; j--)
//	{
//		for (i =1 ; i <=j ; i++)
//		{
//			g = i*j;
//			printf("%d*%d=%-2d ", i, j, g);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	int j, i, s, g;
//	scanf("%d", &s);
//	for (j = s; j >= 1; j--)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			g = i*j;
//			printf("%d*%d=%-4d ", i, j, g);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
int main()
{
	int i, a, b,tmp;
	scanf("%d %d %d", &i, &a, &b);
		tmp = a;
		if (a <= b&&i<=b )
			tmp = b;
		else if (a <= i&&b <= i )
			tmp = i ;
		printf("%d", tmp);
		return 0;
}