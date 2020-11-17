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
	int arr[] = { 1, 2, 3, 4, 5, 7, 6, 8, 9, 10 };
	printf("您想要查找的数字:>");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (-1 == ret)
	{
		printf("找不到指定的数字\n");
//	}/*
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//	*/
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof (arr[0]);
//    bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}*/

#include <stdio.h>/*
int Strlen(const char*str)
{
	if (*str == '\0')
		return 0;
	else return 1 + Strlen(str + 1);
}
int main()
{
	char *p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}*/
int main()
{
	int a, b;
	printf("请输入 您想交换的两个数>:a  b\n");
	scanf("%d %d", &a, &b);
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d  b=%d", a, b);
	return 0;
	
}