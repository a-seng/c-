#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//char * my_strcpy(char* dest, const char*src)
//{
//
//}
//int main()
//{
//	char arr[4] = {0};
//	char*(*pf)(char *, const char*);
//	char *(*pfarr[4])	(char *, const char*);
//	return 0;
//}
//int main()
//{
//	char	 *p = "hello bit.";
	//printf("%s\n", p);
	//return 0;
//}
//printf("%s\n", p);
//int main()
//{
////	char str1[] = "hello bit.";
////	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");

	/*if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
//	   */
//	*str4 = "hllll";
//	printf("%s", *str4);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//int  array[10] = { 1,2,3,4,5,6,7,8,9,0 };
//int*ptr = array; 
//for (i = 0; i < 10; i++)
//{
//	(*ptr)++; 
//	ptr++;
//	printf("  %d", ptr[i]);
//	printf("  %d", *ptr);
//	printf("  %p", ptr[i]);
//	printf("  %p\n", *ptr);
//}
//
//return 0;
//			  
//}
/*int  Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 2;
	int b = 3*/;
//	int(*pAdd)(int, int) = Add;
//	int sum = (*pAdd)( a, b);
//	printf("%d", sum);
//	return 0;
//
//}

//int cmp_float(const void *e1, const void*e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test 2 ()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f", f[j]);
//	}
//}
//void test 3()
//{
//	struct Stu s[3]=
//}
//int main()
//{
//	 /*test 2();*/
//	test 3();
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	int arr1[5] = { 0 }, arr2[5] = { 0 }, arr3[5] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr3[i] = arr2[i] + arr1[i];
//		printf("%d ", arr3[i]);
//		i++;
//		if (i < n)
//		{
//			arr3[i] = arr1[i] - arr2[i];
//			printf("%d ", arr3[i]);
//		}
//
//	}
//	return 0;
//}

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	int arr[5][3] = { 0 };
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	float sum = 0.0, aver = 0.0;
	for (i = 0; i < M; i++)
	{
		sum = 0;
		aver = 0;
		for (j = 0; j < N; j++)
		{
			sum += arr[i][j];
			if (j == N - 1)
			{
				aver = sum / N;
				printf("%d  %.2f", sum, aver);
			}
		}
	}
	return 0;
}



