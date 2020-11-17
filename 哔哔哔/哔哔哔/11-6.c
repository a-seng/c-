#define _CRT_SECURE_NO_WARNINGS  1/*
#include<stdio.h>
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n\n");
//	}
//}*//*
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}*//*
//int main()
//{
//	int i = 0;
//	do {
//		printf("%d \n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//
//}*//*
//int main()
//{
//	int i = 5;
//	do{
//		if (5==i)
//			break;
//		printf("%d\n",i);
//
//	} while (i < 10);
//	return 0;
//}*//*
//int main()
//{
//	int num = 1;
//	int sum = 0;
//	int n = 1;
//	int a = 1;
//	for (scanf("%d", &n); num <= n; num++)         // 计算 1！+2！+3！.....+n!;
//	{
//		a = num*a;
//		sum = sum + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}*/
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>/*
//int main()
//{
//	char arr1[] = "I LOVE YOU UOY EVOL I";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}*/
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了， 下标是%d\n", mid);
//	else
//		printf("找不到\n");
//	return 0;
////}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
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
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof (arr[0]);
//	int bubble_sort(arr, sz);
//	for (i = 1; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
////}
//int main()
//{
//	int arr[3][3][4] = { { 1, 1,1 }, { 2, 2, 2 }, { 3,3 ,3 ,3  } };
//	int i = 1;
//	int j = 1;
//	int l = 1;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 3; j++){
//			for (l = 0; l < 4; l++){
//				printf("%d ", arr[i][j][l]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
//#include <stdio.h>
//int Strlen(const char*str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = Stelen(p);
//	printf("%d\n", len);
//	return 0;
//}