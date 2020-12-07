#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//  {
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
//		for (j = 0; j+i < m; j++)
//		{
//			
//			 int tmp= arr[i][j+i];
//			 arr[i][j+i] = arr[j+i][i];
//			 arr[j+i][i] = tmp;
//		}
//	}
//	for (i = 0; i < m ; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0;
//	char c;
//	char arr[100] = { 0 };
//	gets(arr);
//
//	for (i = 0; ((c = arr[i]) != '\0'); i++)
//	{
//		if (c >= 'a'&&c<= 'z')
//			arr[i] = c + ('z' - c - 1);//abcdefghijklmnopqrstuvwxyz
//		if (c >= 'A'&&c  <= 'Z')
//			arr[i] = c  + ('Z'c - 1);
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//
//
//}						  
//#include<stdio.h>
//int main() {
//	char text[3][100];//定义三行，每行最多不超过20个字符的二位数组
//	char c;
//	int i, j;
//
//	int upCase, lowCase, num, space, others;
//	upCase = lowCase = num = space = others = 0;
//	for (i = 0; i<3; i++){
//		gets(text[i]);
//		for (j = 0; j<100 && ((c = text[i][j]) != '\0'); j++)
//		{
//			if (c >= 'A'&&c <= 'Z')
//			{
//				upCase++;
//			}
//			else if (c >= 'a'&&c <= 'z')
//			{
//				lowCase++;
//			}
//			else if (c >= '0'&&c <= '9')
//			{
//				num++;
//			}
//			else if (c == ' ')
//			{
//				space++;
//			}
//			else {
//				others++;
//			}
//		}
//	}
//	printf("upCase=%d,lowCase=%d,num=%d,space=%d,others=%d", upCase, lowCase, num, space, others);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void cal(char str[])
//{
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] == 'z')
//		{
//			str[i] = 'a';
//		}
//		else if (str[i] == 'Z')
//		{
//			str[i] = 'A';
//		}
//		else if (str[i] >= 'a'  && str[i] < 'z')
//		{
//			str[i] = 'a' + 'z' - str[i];
//		}
//		else if (str[i] >= 'A'  && str[i] < 'Z')
//		{
//			str[i] = 'A' + 'Z' - str[i];
//		}
//	}
//	puts(str);
//}
//
//int main()
//{
//	char str[20];
//	gets(str);
//	cal(str);
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n, i, j;
//	scanf("%d", &n);
//	int p[100][100];
//	p[0][0] = 1;
//	p[1][0] = 1;
//	p[1][1] = 1;
//	for (i = 0; i < n; i++)
//	{
//		p[i][0] = 1;
//	}
//	printf("1\n1 1\n");
//	for (i = 2; i < n; i++)
//	{
//		printf("1 ");
//		for (j = 1; j < i; j++)
//		{
//			p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
//			p[i][j + 1] = 1;
//			printf("%d ", p[i][j]);
//		}
//		printf("1\n");
//	}
//	return 0;
//}
int main()
{
	int n;
	int i;
	int j;
	int sum = 0;
	int arr[10][10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d",&arr[i][j]);
			if (i == j)
				sum += arr[i][j];
		}
	}
	printf("%d\n", sum);


}