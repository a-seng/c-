#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS  1/*
int panduan(a)
{   
	int i = 1;
	for (i = 2; i <= a - 1; i++)
	{
		if (a%i == 0)
		{
			return 0;
			break;
		}
	}
	if (i == a)
		return 1;
}
int main()
{
	int shu = 0;
	int a = 0;
	printf("请输入你想判断的数:>");
	scanf_s("%d",&a);
	shu = panduan(a);
	if (shu == 0)
		printf("不好意思该数 不为素数\n");
	else
		printf("该数%d为素数\n", a);
	return 0;
}*//*
int if_run(year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return year;
	}
	else
		return 0;
}
int main()
{
	int year = 1;
	int ret = 1;
	printf("请输入您想判断的年份>:");            用函数 判断闰年
	scanf_s("%d", &year);
	ret = if_run(year);
	if (ret != 0)
		printf("是的您输入的年份为闰年\n");
	else
		printf("不好意思您输入的年份不为闰年\n");
	return 0;
}*//*
int search_k( int key,int sz )
{
	int mid = 0;
	int arr[key];
	int right = 0;
	int left = sz-1;
	while(right <= left)
	{

		mid = (right + left) / 2;
		if (key < mid)
			right++;
		if (key>mid)
			left--;
		if (key = mid)
			break;
	}
	if (right <= left)
		printf("找到了下标是:>%d\n", mid);
	else 
		printf("没找到");
}
int main()
{
	int key,sz;

	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("请输入你想要查找的数>:");
	sz = sizeof(arr) / sizeof(arr[0]);
	scanf_s("%d",&key);
	search_k(arr[key],sz);
	return 0;
}*//*
if (n > 9)
{1234

	{
		print(n / 10){                 123
			if (n > 9)
			{

				{
					print(n / 10){
						if (n > 9)
						{

							{
								print(n / 10){
									if (n > 9)
									{

										{
											print(n / 10)
											printf("%d", n % 10);
										}
									;
								}
								printf("%d", n % 10);
							}
						;
					}
					printf("%d", n % 10);
				}
			;
	}
//	printf("%d", n % 10);/*
//}*/1234
//void print(int n) {             n==1234
//	if (n>9)    
//	{
//		print(n / 10);          1234/10
//	} 
//	printf("%d ", n % 10);
//}
//void print(int n) {              123
//	if (n>9)
//	{
//		print(n / 10);           123/10
//	}
//	printf("%d ", n % 10);
//}
//void print(int n) {              12
//	if (n>9)
//	{
//		print(n / 10);             12/10
//	}
//	printf("%d ", n % 10);
//}
//void print(int n) {           1
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);                                     1
//}*/
// 
int swap(int *                 c, int *                   d)
{
	int tmp = 0;
	tmp = * c;
	* c = * d;
	* d = tmp;
	return 100;
}
int main()
{
	int a = 10;
	int b = 20;
	swap( &       a, &            b);
	printf("%d\n %d\n", a, b);
		return 0;
}