#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int M, N;
//	scanf("%d %d", &M, &N);
//	int arr[5][3] = { 0 };
//	int i, j;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	float aver = 0.0;
//	for (i = 0; i < M; i++)
//	{
//		sum = 0;
//		aver = 0;
//		for (j = 0; j < N; j++)
//		{
//			sum += arr[i][j];
//		}
//		aver = sum / N;
//		printf("%d  %.2f\n", sum, aver);
//	}
//	return 0;
//}
void sort(int *x, int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (x[j]>x[k])k = j;
			if (k != i)
			{
				t = x[i];
				x[i] = x[k];
				x[k] = t;
			}
		}
	}

}
int main()
{
	int i, *p, a[10];
	p = a;
	printf(" 10¸öÊý¡·£»");
	for (i = 0; i < 10; i++)
		scanf("%d", p++);
	p = a;
	sort(p, 10);
	for (p = a,i=0; i < 10; i++)
	{
		printf("%d    ", *p);
		p++;
	}
	printf("\n");
	return 0;
}