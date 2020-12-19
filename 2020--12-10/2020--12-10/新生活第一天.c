#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j + i < m; j++)
//		{
//			int tmp = arr[i][j + i];
//			arr[i][j + i] = arr[j + i][i];
//			arr[j + i][i] = tmp;
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i, j, s[n][m];
//	for (i = 0; i<n; i++)for (j = 0; j<m; j++)scanf("%d", &s[i][j]);
//	for (j = 0; j<m; j++){
//		for (i = 0; i<n; i++){
//			printf("%d", s[i][j]);
//			if (i != n) printf(" ");
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//#include<math.h>
//int main(){
//	char s[33];
//	int i, j, sum;
//	scanf("%s", s);
//	for (i = 0, j = 0, sum = 0; i<32; i++){
//		if (s[i] == '1')sum += pow(2, 7 - j);
//		j++;
//		if (j == 8 && i != 31){
//			j = 0;
//			printf("%d.", sum);
//			sum = 0;
//		}
//		if (i == 31)printf("%d", sum);
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int m, n, p;
//	scanf("%d%d", &m, &n);
//	int str[20][20];
//	int i, j;
//	for (i = 0; i<m; i++){
//		for (j = 0; j<n; j++){
//			scanf("%d", &str[i][j]);
//		}
//	}
//	for (i = 1, p = 0; i<m - 1; i++){
//		for (j = 1; j<n - 1; j++){
//			if (str[i][j]>str[i - 1][j] && str[i][j]>str[i][j + 1] && str[i][j]>str[i + 1][j] && str[i][j]>str[i][j - 1])
//			{
//				printf("%d %d %d\n", str[i][j], i + 1, j + 1); p++;
//			}
//		}
//	}
//	if (p == 0)printf("None %d %d", m, n);
//}

#include<stdlib.h>
#include<stdio.h>
int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int *p;
f(int *s, int p[][3])
{
	*s = p[1][1];
}

main()
{
	p = (int*)malloc(sizeof(int));
	f(p, a);
	printf("%d\n", *p);
}