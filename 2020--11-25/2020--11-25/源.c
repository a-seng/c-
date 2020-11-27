#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	int arr1[5] = { 0 }, arr2[5] = { 0 }, arr3[5] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",& arr2[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr3[i] = arr2[i] + arr1[i];
//		printf("%d", arr3[i]);
//		i++;
//		if (i < n)
//		{
//			arr3[i] = arr1[i] - arr2[i];
//			printf("%d", arr3[i]);
//		}
//		
//	}
//	return 0;
//}
int mian()
{
	int M, N;
	scanf("%d %d", &M, &N);
	int arr[5][3] = { 0 };
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	float sum = 0.0, aver = 0.0;
	for (i = 0; i < M; i++)
	{
		sum = 0;
		aver = 0;
		for (j = 0; j < N; j++)
		{
			sum += arr[i][j];
		}
		aver = sum / N;
		printf("%d %.2f", sum, aver);
	}
	return 0;
}