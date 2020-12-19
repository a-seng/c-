#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	double x, y, z;
//	scanf("%d;%fl,%fl,%fl", &num, &x, &y, &z);
//	printf("The each subject score of  No. %d is %.2fl, %.2fl, %.2fl.", num, x, y, z);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A'&&ch <= 'z')
//		{
//			printf("YES\n");
//			getchar();
//		}
//		else
//		{
//			printf("NO\n");
//			getchar();
//		}
//	}
//	return 0;
//}
int main()
{
	int arr[100];
	int max, max1;
	int n,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	max1 = 1;
	int k = 1;

	for (i = 1; i < n; i++)
	{
		int tmp = max;
		if (arr[i]>max)
		{
			max = arr[i];
			max1 = i + 1;
			k = 2;
		}
		if (arr[i] == tmp)
			k = 3;
	}
	if (k ==1)
		printf("1");
	if (k ==2)
		printf("%d",max1);
	if (k ==3)
		printf("-1");
	return 0;

}