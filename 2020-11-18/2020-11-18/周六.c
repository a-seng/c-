#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
//void re(char *A)
//{
	/*int right = strlen(A) - 1;
	int n = strlen(A);
	int left = 0;
	int i = 0;
	while (left<right)
	{
		char tmp = *(A+left);
		*(A + left) = A[right];
		A[right] = tmp;
		left++;
		right--;
		}*/
//	int len = strlen(A);
//	char *left = A;
//	char *right = A+ len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[1000];
//	gets(arr);
//	re(arr);
//	printf("%s\n", arr);
//	return 0;
//
//}
//void qian_n(int x, int y)
//{
//
//	//先确定 符号
//	int  j, sum,n,ret;
//	sum = 0;
//	ret = 0;
//	//确定 位数
//	for (j = 0; j < y; j++)
//	{
//		ret += x * (int)pow(10, j);
//		sum += ret;
//	}
//	printf("%d", sum);
//	//每一位
//	//求和
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	//输入 一个数字 求 他的 Sy
//	//Sy=x+xx+xxx+xxxx.....+pow(x,y)
//	//函数解决
//	qian_n(x, y);
//	return 0;
//}

//void shui(int i)
//{
//	先求他有多少位
//	
//	计算 每一位的 次方
//	相加
//	int j = 0;
//	for (j=0; j < i; j++)			  //查看每一位书是否符合条件
//	{
//		
//		int tmp = j;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /=10;
//			   	}
//		if (sum =j)
//			printf("%d ", j);
//		
//	}
//}
//int main()
//{
//	int x = 10000;
//	求1~10000000之间的自恋数
//	shui(x);
//	return 0;
//}
//void shui(int i)
//{
//	int j = 0;
//	for (j = 10; j < i; j++)			
//	{
//
//		int tmp = j;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		int sum = 0;
//		tmp = j;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == j)
//			printf("%d\n ", j);
//	}
//}
//int main()
//{
//	int x = 10000000000;
//	shui(x);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	for (j = 0; j < n; j++)
//	{	
//		int k = 0;
//		for (k = 0; k < n - 1-j; k++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 1 + j * 2; k++)
//			printf("*");
//		printf("\n");
//	}	   
//	for (j = 0; j < n - 1; j++)
//	{
//		int k = 0;
//		for (k = 0; k < 1 + j; k++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < (n - 2 - j) * 2 + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void diao(int *a, int *b)
//{
//	int i, j,k=0;
//	int n=strlen(a);
//	for (i = 0; i < n; i++)
//	{				  
//		if (a[i] % 2 != 0)
//		{
//			b[k] = a[i], k++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			b[k] = a[i], i++;
//		}
//	}
//}
//int main()
//{
//	int arr[100];
//	while ()
//	scanf("%s", &arr);
//	int brr[100];
//	diao(arr, brr);
//	printf("%d", brr);
//	return 0;
//



//
//void 		 move(int arr1[], int sz)
//{
//	int left = 0, right = sz;
//	while (left < right)
//	{
//		while ((left < right) && (arr1[left] % 2 != 0))
//		{
//			left++;
//		}
//		while ((left < right) && (arr1[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr1[left];
//			arr1[left ] = arr1[right];
//			arr1[right] = tmp;
//        }
//	}
//
//}
//void print(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 90, 12, 23, 4, 1234, 21, 4, 21, 4, 5, 32, 45, };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	move(arr1,sz);
//	print(arr1,sz);
//}
//int main()
//{
//	printf("请输入 您想打印的行数》:");
//	int n;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	int i = 0;//	int j = 0;//	for (i = 0, j = 0; i < n; i++)//		arr[i][j] = 1;//	for (i = 1; i < n; i++)//	{//		for (j = 1; j < i+1; j++)//		{//			arr[i][j] = arr[i-1][j] + arr[i - 1][j - 1];//			//		}//		//	}//	int k = 0;//	for (i = 0; i < n; i++)//	{//		for (k = 0; k < n / 2 - 1-i;k++)//		printf("       ");//		for (j = 0; j < i+1; j++)//		{//			printf("%7d", arr[i][j]);//////		}//		printf("\n");////	}////	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (i = 0, j = 0; i < n; i++)
//		arr[i][j] = 1;
//	for (i = 0, j = 0; i < n;j++,i++)
//		arr[i][j] = 1;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i-1; j++)
//		{
//			arr[i][j] = arr[i-1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//
//		for (j = 0; j < n; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//汉诺塔问题  有三根棒子  放 盘盘   ；；；；；；；；；
//有 64个盘子
//void move(int n)
//{
//	int one, two, three;
//	if (n = 3)
//	{
//		printf("one>two");
//		printf("one>three");
//		printf("two>three");
//		printf("one>two");
//		printf("three>two");
//		printf("three>one");
//		printf("two>one");
//		printf("two>three");
//		printf("one>two");
//		printf("one>three");
//		printf("two>three");
//	}
//	if (n > 3)
//	{
//		move(n - 1);
//
//	}
//		
//	
//	
//}
//int main()
//{
//	int n = 0;
//	//输入有多少个盘盘
//	scanf("%d", &n);
//	move(n);
//}
//先移动前面 63个    62 61 60.。。。。。。5.。。。4.。。3.。
//三个怎么移动 
//先把第一个 移动到 第三跟 棒子上去  
//再把 第二个 移动到 第二根棒子上去 
//再把 第一个 移动到 第二根 棒子上去 
//再把 	   第三个 移动到 第三根棒子上去
//再把 第一份· 移动到 第一根 棒子上去 
//再把 第二个 移动到 第三根 棒子上去 
//再把 第一个 移动到  第三根 棒子上去

void move(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c->%c\n", x, z);
	}
	else
	{
		move(n - 1, x, z, y);
		printf("%c->%c\n", x, z);
	}
}
int main()
{
	int n;
		printf("请输入汉诺塔层,\n");
		scanf("%d", &n);
		printf("汉诺塔问题移动步骤，\n");
		move(n, 'x', 'y', 'z');
		return 0;
}