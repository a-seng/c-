#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//double ave(double *x, int n)
//{
//	double sum = 0;	  
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += *(x + i);
//	}
//
//	return sum/n;
//
//}
//int main(void)
//{
//
//	int N;
//
//	scanf("%d", &N);
//
//	double x[10], p;
//	int i;
//	for (i = 0; i<N; i++)
//		scanf("%lf", &x[i]);
//	p = ave(x, N);
//	printf("ave=%.2f\n", p);
//	return 0;
//}

//double result_real=0, result_imag=0;
//void complex_prod(double real1, double imag1, double real2, double imag2)
//{
//	result_real = (real1 * real2) - (imag1 * imag2);
//	result_imag = (real1*imag2) + (imag1*real2);
//
//}
//int main(void)
//{
//	double imag1, imag2, real1, real2;
//	
//	scanf("%lf %lf", &real1, &imag1);
//	scanf("%lf %lf", &real2, &imag2);
//	complex_prod(real1, imag1, real2, imag2);
//	
//	printf("product of complex is (%f)+(%f)i\n", result_real, result_imag);
//
//	return 0;
//}
//#include<math.h>
//
//
//int search(int x)
//{
//	int i = 0;
//	int count = 0;
//	int m = 0;
//	for (m = 10; m < x; m++)
//	{
//
//		for (i = 101; i <= x; i++)
//		{
//
//			int tmp = i;
//			if (m*m == i)
//			{
//				int shiwei = tmp / 10 % 10;
//				int baiwei = tmp / 100;
//				int gewei = tmp % 10;
//				if (shiwei == baiwei || shiwei == gewei || baiwei == gewei)
//					count++;
//			}
//
//
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int number;
//
//	scanf("%d", &number);
//	printf("count=%d\n", search(number));
//
//	return 0;
//}
//int f(int n)
//{
//	int i = 1;
//	int tmp;
//	int sum = 1;
//	if (n == 1 || n == 2)
//		return 1;
//	while (--n!=1)
//	{
//		tmp = sum;
//		sum += i;
//		i = tmp;
//	}
//	return sum;
//}												
//int f(int n, int i,int sum)
//{
//	if (i == n)
//		return sum;
//	else
//	{
//	int 	tmp = sum;
//		sum += i;
//		i = tmp;
//	}
//
//}
//int main()
//{
//	int n;
//	int i = 1;
//	int sum = 1;
//
//	scanf("%d", &n);
//	printf("%d\n", f(n,i,sum ));
//
//	return 0;
//}
//int Factorial(int n)
//{
//	if (n <= 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	return n*Factorial(n - 1);
//
//}
//
//int main()
//{
//	int N, NF;
//
//	scanf("%d", &N);
//	NF = Factorial(N);
//	if (NF)  printf("%d! = %d\n", N, NF);
//	else printf("Invalid input\n");
//
//	return 0;
//}


//int even(int n)
//{
//	if (n == 0)
//		return 1;
//	if (abs(n) % 2 != 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (even(n))
//		printf("%d is even.\n", n);  //偶数
//	else
//		printf("%d is odd.\n", n);   //奇数
//	return 0;
//}

//int isPalindromicString(char *x)
//{
//	int right = strlen(x)-1;
//	int left = 0;
//	int i = 0;
//	for (i; left <= right; left++, right--)
//	{
//		if (*(x + left) != *(x + right))
//			return 0;
//	}
//	return 1;
//}
//
//int main(){
//	char s[100];
//	gets(s);
//	if (isPalindromicString(s))
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#define z 3
//int main()
//{
//	int a[z][z] = { 0 }; int i, j, t;
//	for (i = 0; i<z; i++)
//	for (j = 0; j<z; j++)
//	{
//		cin >> a[i][j];
//	}
//
//	/*cout<<"输出！"<<endl;
//	for(i=0;i<z;i++)
//	{
//	for(j=0;j<z;j++)
//	{
//	cout<<"输出！"<<a[i][j];
//	}
//	cout<<endl;
//	}*/
//
//
//	//cout<<"输出！"<<endl;
//	for (i = 0; i<z; i++)
//	{
//		for (j = 0; j<z; j++)
//		{
//			cout << a[j][i] << " ";//<<"输出！"
//		}
//		cout << endl;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int Arry[4][4] = { { 10, 11, 12, 13 }, { 14, 15, 16, 17 }, { 18, 19, 20, 21 }, { 22, 23, 24, 25 } };
//	//转换之前输出
//	for (int i = 0; i<4; i++)
//	{
//		for (int j = 0; j<4; j++)
//		{
//			printf(" %d", Arry[i][j]);
//
//		}
//		printf("%\n");
//	}
//	printf("xxxxxxxxxxxx\n");
//	//进行行列转换
//	int temp;
//	int n = 0;
//	for (int i = 0; i<4; i++)
//	{
//		for (int j = i; j<4; j++)
//		{
//			temp = Arry[j][n];
//			Arry[j][n] = Arry[n][j];
//			Arry[n][j] = temp;
//		}
//		n++;
//
//	}
//	//转换之后输出
//	//转换之前输出
//	for (int i = 0; i<4; i++)
//	{
//		for (int j = 0; j<4; j++)
//		{
//			printf(" %d", Arry[i][j]);
//
//		}
//		printf("%\n");
//	}
//	getchar();																																			 2 3
//
//	return 0;
//
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
//

#include<stdio.h>
#include<stdio.h>
int main()
{
	int M, N;
	int arr[100][21];
	int i, j, k = 0;
	char s[] = { "None" };//
	scanf("%d %d\n", &M, &N);  //
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 1; i < M - 1; i++)
	{
		for (j = 1; j < N - 1; j++)
		{
			if (arr[i][j]>arr[i][j + 1] && arr[i][j]>arr[i][j - 1]	//条件
				&& arr[i - 1][j] && arr[i + 1][j])		  {

				printf("%d %d %d\n", arr[i][j], i + 1, j + 1);			  //满足条件输出
				k = 1;													  //判定是否 有不存在的情况
			}
		}
	}
	if (k == 0)
		printf("%s", &s);
}













