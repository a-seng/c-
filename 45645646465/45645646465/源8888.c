#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int search(int arr[],int sz,int a)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		
		int mid = (right + left) / 2;
		if (arr[mid] > a)
			right -= 1;
		if (arr[mid] < a)
			left += 1;
		if (arr[mid] == a){
			return mid;
		}
	}
	if (left >right)
		return -1;
	
	

}
int main()
{
	int a;
	printf("������ҵ����֡���");
	scanf("%d", &a);
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
     int ret=search(arr,sz ,a );
	if (ret != -1)
		printf("����Ҫ�ҵ� �����±��ǡ���%d\n", ret);
	else
		printf("������˼�Ҳ���");
	return 0;
}
