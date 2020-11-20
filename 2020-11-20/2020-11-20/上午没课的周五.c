#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i, j, k1, k2;
//	int n;
//	int s;
//	int k;
//	int count=0;
//	scanf("%d", &n);
//	int arr[6][6] = { 0 };
//	if (n == 1)
//		printf("0 0");
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				scanf("%d", &arr[i][j]);
//		}
//		
//		for (i = 0; i < n; i++)
//		{
//			k1 = i, k2 = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (arr[k1][k2] < arr[k1][j])
//				{
//					k2 = j;
//				}
//			}
//			for (s = 0; s < n; s++)
//			{
//				if (arr[k1][k2] < arr[s][k2])
//				{
//					count++;
//					if (count==n-1)
//					{
//						printf("%d %d", k1, k2);
//						k = 1;
//					}
//				}
//			}
//		}
//		if (k = 0)
//			printf("NONE");
//		
//	}
//}
//



































//int main()
//{
//	char arr1[50] = { 0 };
//	char  c;
//	int i = 0;
//
//	while ((c = getchar()) != '\n')
//	{
//		arr1[i ] = c;
//		i++;
//		if (c >= 'a'&&c <= 'w')
//		{
//			c += 3;
//			putchar(c);
//		}
//		else if (c >= 'x'&&c <= 'z')
//		{
//			c -= 23;
//			putchar(c);
//		}
//		else
//			printf("entry error");
//	}
//	printf("\n");
//	
//}







//
//double jie(int n)
//{
//	if (n == 1||n==0)
//		return 1;
//	if (n < 0)
//		printf("error");
//	else
//		 return jie(n - 1)*n;
//
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		arr[i] = n;
//		double sum = jie(arr[i]);
//		printf("%.0lf ", sum);
//		i++;
//	}
//	return 0;
//}
//
//
//
//
//


//int main()
//{
//	int n, k, i,j, max,s;
//	int z = 0;
//    int k2=0;
//	scanf("%d", &n);
//	if (n == 0)
//		printf("0 0");
//	else {
//		int arr[6][6] = { 0 };
//
//		for (i = 0; i < n; i++)
//		{
//
//			for (j = 0; j < n; j++)
//				scanf("%d", &arr[i][j]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			int k1 = i;
//			int k2 = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (arr[k1][k2] <= arr[i][j])
//				{
//					k1 = i;
//					k2 = j;
//				}
//
//			}
//			for (s = 0; s < n; s++)
//			{
//
//				if (arr[k1][k2] <= arr[s][k2])
//				{
//					if (s == n - 1)
//					{
//						printf("%d %d", k1, k2);
//						z = 1;
//					}
//				}
//			}
//		}
//		if (z == 0)
//			printf("NONE");
//	}
//}

//#include<stdio.h>
//int main(){
//	int n, i, j, x, y, z, f, a[6][6], m;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	for (j = 0; j<n; j++)
//		scanf("%d", &a[i][j]);
//	if (n == 1) printf("0 0");
//	else{
//		for (i = 0; i<n; i++) 
//		{
//			x = 0; f = 0;
//			for (y = 0; y<n; y++)
//			{
//				if (a[i][x] <= a[i][y])  x = y;
//			}
//			for (z = 0; z<n; z++)
//			{ 
//				if (a[z][x] <= a[f][x])  f = z; 
//			}
//
//			if (f == i)
//			{ 
//				m = 1; break; 
//			}
//			else 
//				m = 0;
//		}
//	} if(m == 1)
//		printf("%d %d", i, x);
//	else
//		printf("NONE");
//}

//#include<stdio.h>
//int main()
//{
//	int n, k, i, j, max, s;
//	int k2 = 0;
//	int z;
//	scanf("%d", &n);
//	int arr[4][4] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int k1 = i;
//		int k2 = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[k1][k2] < arr[i][j])
//			{
//				k1 = i;
//				k2 = j;
//			}
//
//		}
//		for (s = 0; s < n; s++)
//		{
//
//			if (arr[k1][k2] <=arr[s][k2])
//			{
//				if (s == n - 1)
//				{
//					printf("%d %d", k1, k2);
//					z = 1;
//				}
//				
//			}
//		}
//	}
//	if (z = 0)
//		printf("NONE");
//}