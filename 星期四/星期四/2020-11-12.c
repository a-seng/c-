#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i;
//	int arr;
//	int arr1 =152352;
//	printf("请您输入密码>:");
//	for (i = 1; i <= 3; i++)
//	{
//		scanf("%d", &arr);
//		if (arr == arr1)
//		{
//			printf("密码输入正确\n");
//			break;
//		}
//		if (i <= 2)
//			printf("密码错误 ，请重新输入\n");
//	}
//	if (i <= 3)
//		printf("登录成功\n");
//	else
//		printf("退出程序\n");
//	return 0;
//
//}
//int search(int k,int )
//{
//	int n,i;
//	if (n == 1 || n == 2);
//	for (i = 1; i <= n; i++)
//	{
//		search(n += 1, n += 2);
//	}
//}
int main()
{
	int k,sum,i;
	int arr[] = {0};

	printf("请输入您想要 找的斐波那契数》；");
	scanf("%d", &k);
	//int ret = search(k);
	for (i = 3; i <= k; i++)
	{
		sum = arr[i - 1] + arr[i - 2];
	}
}