#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int n, i, count = 0, max, maxj;
//	scanf("%d", &n);
//	int a[100];
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	max = a[0];
//	maxj = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (max < a[i + 1])
//		{
//			max = a[i + 1];
//			maxj = i + 1;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (max>a[i])
//			count++;
//	}
//	if (count == n - 1)
//	printf("%d", maxj + 1);
//	else
//		printf("-1");
//	return 0;
//}