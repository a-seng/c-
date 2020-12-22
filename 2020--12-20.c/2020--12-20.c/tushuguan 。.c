#define _CRT_SECURE_NO_WARNINGS 1

#define N 20
#include<stdlib.h>

#include"valu.h"
int main()
{
	int arr[N];
	Random(arr, N);
	Swap(arr, N);
	Print(arr, N);
	return 0;
}