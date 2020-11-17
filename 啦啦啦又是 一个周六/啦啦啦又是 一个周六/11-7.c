//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int a = 1;
//		for (a = 1; a <= i; a++)
//		{
//			printf("%d*%d=%-2d ", i, a, a*i);
//
//		}
//		printf("\n");
//	}
//		return 0;/*
//		while (a <= i){
//
//			int c = 1;
//			c = i *a;
//			printf("%d*%d=%-2d ", i, a, c);                          9*9 乘法口诀表 ；；；
//			a++;
//		}
//		printf("\n");
//		
//	}
//	return 0;*/
////}
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意 ，您的电脑 在1分钟内关机 ，如果 输入；我是猪，就取消关机\n 请输入>:");
//	
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS  1
#include <string.h>
#include <stdio.h>/*
int main()
{
	char abc1[] = "bi\0t";
	char abc2[20] = "############";
	strcpy (abc2, abc1);          
	printf("%s\n", abc2);
	return 0;
//}*/
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 2;
//	for (n; i <=sqrt(n); i++) //sqrt()   开平方根！！！！
//	{
//		if (n%i == 0)
//			break;
//	}
//	if (n == i)
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret =%d\n", ret);
	return 0;

}