#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i;
//	int arr;
//	int arr1 =152352;
//	printf("������������>:");
//	for (i = 1; i <= 3; i++)
//	{
//		scanf("%d", &arr);
//		if (arr == arr1)
//		{
//			printf("����������ȷ\n");
//			break;
//		}
//		if (i <= 2)
//			printf("������� ������������\n");
//	}
//	if (i <= 3)
//		printf("��¼�ɹ�\n");
//	else
//		printf("�˳�����\n");
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

	printf("����������Ҫ �ҵ�쳲�����������");
	scanf("%d", &k);
	//int ret = search(k);
	for (i = 3; i <= k; i++)
	{
		sum = arr[i - 1] + arr[i - 2];
	}
}