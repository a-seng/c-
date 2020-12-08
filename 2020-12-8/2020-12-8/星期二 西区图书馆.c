#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h>
//int main()
//{
//	FILE* pf = fopen("log.txt", "w");
//	int i, j, arr[100];
//	for (i = 1; i < 50; i++)
//	{
//		arr[i] = i;
//		printf("%d ", arr[i]);
//		Sleep(500);
//		fprintf(pf, "time:%s\n", __TIME__);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//char* Compare(char*x, char*y)
//{
//	int k=strcmp(x,y);
//	if (k > 0)
//		return x;
//	else
//		return y;
//	
//}
//int main()
//{
//	char arr[3][100];
//	int i = 0;
//	char c;
//	for (i = 0; i < 3; i++)
//	{
//		gets(arr[i]);
//	}
//	char *max = Compare(*arr, *(arr+1));
//	char  *Max = Compare(arr[2], *max);
//	printf("%s\n",Max);
//	return 0;
//
//
//}

#include "stdio.h" 
#include "string.h" 
//int main() {
//	char arr[3][100], max[100];
//	int i = 0;
//	for (i = 0; i<3; i++)
//		gets(arr[i]);
//	if (strcmp(arr[0], arr[1])>0) strcpy(max, arr[0]);
//	else strcpy(max, arr[1]);
//	if (strcmp(max, arr[2])<0) strcpy(max, arr[2]);
//	printf("最大字符串为：");
//	puts(max);
//	return 0;
//}
//char* compare(char*x, char*y)
//{
//	if (strcmp(x, y) > 0)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	char a[100], b[100], c[100], *max;
//	gets(a);
//	gets(b);
//	gets(c);
//	max=compare(a, b);
//	max = compare(max, c);
//	printf("%s\n", max);
//	return 0;
//}
//char* compare(char*x, char*y)
//{
//	if (strcmp(x, y) > 0)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	char arr[3][100];
//	char *max;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		gets(arr[i]);
//	}
//	max = compare(arr[0], arr[1]);
//	max = compare(max, arr[2]);
//	printf("%s\n", max);
//	return 0;
//}

//int main()
//{
//	char A[100];
//	char c;
//	int count = 0, i = 0, j = 0;
//	gets(A);
//	for (i = 0; i < 100 && (c = A[i]) != '\0';i++)
//	{
//		if (A[i] == ' '||A[i]=='.')
//			count++;
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int A[3][4];
//	int i = 0;
//	int j = 0;
//	int max;
//	int Row, Low;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			scanf("%d",&A[i][j]);
//		}
//	}
//	max = A [0][0];
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			if (A[i][j]>max){
//				max = A[i][j];
//				Row = i;
//				Low = j;
//			}
//		}
//	}
//	printf("%d %d %d\n", max, Row, Low);
//	return 0;
//	
//}
/*
void inverted_order(int *x, int k,int n)
{
	int i = 0;
	for (i = 0; i < n; i++, n--)
	{
		int tmp = *(x + i);
		*(x + i) = *(x + n - i );
		*(x + n- i ) = tmp;
	}


}
int main()	 
{
	int arr[100];
	int i,  n;
	int right_move;
	scanf("%d %d", &n, &right_move);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d %d", &n,&right_move);
	inverted_order(arr, right_move,n );
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
	
}*/
//void move(int X[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int tmp = X[left];
//		X[left] = X[right];
//		X[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int n, right_move;
//	int i;
//	int arr[100];
//	scanf("%d %d", &n, &right_move);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	if (right_move>n)
//		right_move = right_move%n;
//
//	move(arr, n);
//	move(&arr[0], right_move);
//	move(&arr[right_move], n - right_move);
//	for (i = 0; i < n; i++){
//		printf("%d", arr[i]);
//		if (i < n - 1)
//			printf(" ");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int m = 0, n = 0, i = 0, j = 0;
//	scanf("%d", &n);
//	int a[n][n];
//	for (i = 0; i<n; i++)
//
//	{
//		for (j = 0; j<n; j++)
//
//		{
//			scanf("%d", &a[i][j]);
//			if (i != n - 1 && j != n - 1 && j != n - 1 - i)    //最后一行、最后一列、副对角线的角标关系
//
//			{
//				m = m + a[i][j];
//
//			}
//		}
//
//	}
//	printf("%d", m);
//	return 0;
//}
//				char * search_mix(char *x, char *y)
//{
//	if (strcmp(x, y) > 0)
//		return y;
//	else
//		return x;
//
//}
//int main()
//{
//	char *mix;
//	char arr[100][100];
//	int n;
//	scanf("%d\n", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//		gets(arr[i]);
//	mix = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		
//		mix=search_mix(mix, arr[i]);
//	}
//	printf("Min is:%s\n", mix);
//	return 0;				  
//}

//#include <stdio.h>
//#include <string.h>
//main()
//{
//	int N, i, a;
//	char str[1000][80], *c;
//	scanf("%d\n", &N);
//	for (i = 0; i < N; i++)
//		gets(str[i]);
//	c = str[0];
//	for (i = 1; i<N; i++)
//	{
//		if (strcmp(c, str[i])>0)
//			c = str[i];
//	}
//	printf("Min is: %s", c);
//	return 0;
//}
//#include<stdio.h>
//double matrixAvg(int M, int N, double arr[3][4])
//{
//	int i = 0, j = 0;
//	double sum = 0;
//	for (; i<M; i++)
//	{
//		for (; j<N; j++)
//		{
//			sum += arr[i][j];
//		}
//	}
//	return sum / (M*N);
//}
//int main(){
//	int M, N;
//	scanf("%d%d", &M, &N);
//	double aver, a[3][4];
//	int i, j;
//	for (i = 0; i<M; i++)
//	for (j = 0; j<N; j++)
//		scanf("%lf", &a[i][j]);
//	aver = matrixAvg(M, N, a);
//	printf("%.2f\n", aver);
//	return 0;
//}

//void arrayShiftRight( int arr[],int n,int m)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		int tmp = arr[n - 1];
//		for (j = 0; j < n-1; j++)
//		{
//			arr[n - 1 - j] = arr[n - 2 - j];
//
//		}
//		arr[0] = tmp;
//	}
//
//}
//int main(){
//	int i, n, m;
//	scanf("%d%d", &n, &m);
//	int arr[8];
//	for (i = 0; i<n; i++)
//		scanf("%d", &arr[i]);
//	arrayShiftRight(arr, n, m);
//	for (i = 0; i<n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//void sort(int *a, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i; j < n; j++)
//		{
//		
//			if (*(a + j) < a[i])
//			{
//				int tmp = a[i];
//				a[i] = *(a + j);
//				*(a + j) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i, n;
//	scanf("%d", &n);
//	int a[4];
//
//	for (i = 0; i<n; i++)
//		scanf("%d", &a[i]);
//
//	sort(a, n);
//
//	printf("After sorted the array is:");
//	for (i = 0; i < n; i++)
//		printf(" %d", a[i]);															#include <math.h>
int reverse(int n)
{
	int sum=0;
	int tmp = (abs(n));
	int tmp1 = (abs(n));
	int count = 0;
	while (tmp/=10)
		count++;
	int j = 10;
	int jin = pow(j, count );
	do{
		sum += (tmp1 %j)*jin;
		jin /= 10;
		tmp1/=10;
	} while (count--);
	if (n > 0)
		return sum;
	if (n < 0)
		return sum*(-1);


}
int main()
{
	int n;

	scanf("%d", &n);
	printf("%d\n", reverse(n));

	return 0;
}
//	printf("\n");
//
//	return 0;
//}
