#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int arr[100] = { 1, 52, 63, 74, 85, 96, 97, 98 };
//	int *p = arr[1];
//	int *pa = &a;
//	printf("%d\n", *p);
//	printf("%d\n", *p + 1);
//	printf("%d\n", *(p + 1));
//	printf("%d\n", *pa);
//	printf("%0x\n", pa);
//	printf("%p\n", &a);
//	printf("%d\n", *pa + 1);
//	return 0;
//}
//
/*
#include<stdio.h>
int main()
{
	int M, N;
	int arr[10][10];
	int i, j, k = 0;
	scanf("%d %d\n", &M, &N);  
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == 0 && j == 0)
			{
				printf("%4d", M);
				continue;
			}
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 1; i < M - 1; i++)
	{
		for (j = 1; j < N - 1; j++)
		{
			  {
				  printf("%4d\n", arr[i][j]);			  
			}
		}
	}

}*/
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcedf";
//	char* pc  = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//
//}
i/*nt main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,1 };
	int arr2[10] = { 2, 3, 4, 5, 6, 7, 8, 9,1, 1 };
	int arr3[10] = { 3, 4, 5, 6, 7, 8, 9, 1, 1, 2 };
	int * parr4[] = { &arr1, &arr2, &arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%  d", *(parr4[i] + j));

		}
		printf("\n");
	}
	return 0;
}*/
void printf12 (int (*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
       printf("%d", *(p+i));
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 0, 9, 8, 7, 6 }, { 1,1,1,1,1} };
	printf12 (&arr,3,5);
	return 0;

}