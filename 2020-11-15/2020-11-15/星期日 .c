
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>/*
int main()
{
	int k = 1;
	int i = 0;
	char ji[16] = { 0 };
	char ou[16] = { 0 };
	printf("请您输入 一个数>:");
	scanf("%d\n",&k );
	for (i = 0; i < 32;i++)
	{
		if (((k >> i) & 1) == 1)
		{
			printf("1");
		}
		else
			printf("0")
		i++;
		if (((k >> i) & 1) == 1)
		{
			printf("%d", ou[i]);

		}
	}
	return 0;
}*/
//int main()
//{
//	int k = 0;
//	int i = 1;
//	int ret = 0;
//	printf("请输入>:");
//	scanf("%d\n", &k);
//	while (k>9)
//	{
//		ret = k % 10;
//		printf("%d  ", ret);
//		k=k / 10;
//	}
//	printf("%d", k);
//	return 0;
//}
int main()
{
	int arr[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 9 };
	printf("%d\n", &arr[9] - &arr[8]);
	return 0;
}
