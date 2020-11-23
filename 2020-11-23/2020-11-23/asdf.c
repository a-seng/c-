#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<math.h>
/*
int main()
{
	char s[81], b[81], c[81];
	int i, j = 0, k = 0, sum;
	gets(s);
	sum = strlen(s);
	for (i = 0; i<sum; i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
		{
			b[j] = s[i];
			j++;
		}
	}
	int cnt;
	for (i = 0, cnt = 0; b[i] == '0'; i++)
	{
		cnt++;
	}
	for (i = cnt; i<j; i++)
	{
		c[k] = b[i];
		k++;
	}
	if (k>0){
		for (i = 0; i<k; i++)
		{
			printf("%c", c[i]);
		}
	}
	else printf("0");
return 0;
}*/
//int main()
//{
//	double  a=0x1122334411223344;
//	int *pa =& a;
//   // double * c=a;
//	*pa = 0;
//	//*c = 0;
//	printf("%p", &a);
//	return 0;
//
//}
//
//int main()
//{
//	int a = 0x11223344;
//	char *pa = &a;
//	*pa = 0;
//	printf("%p", &a);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char *pa = &a;
//	char *pc = (*pa) + 1;
//	*pc = 0;
//
//	//char *pa = &a;
//	printf("%p", &a);
//	return 0;
//}
////
//int main()
//{
//	int a = 0x11223344;
//	int *pa = &a;
//	char *pc = &a;
//	printf("%d\n", &a );
//	printf("%d\n", *pa+1);
//	printf("%d\n", *pc+1);
//	return 0;  
//}
//
/*
	int a[10] = { 0 };
	int i = 0;
	int *p = a;
	for (i = 0; i < 12; i++)
	{
		*p = i;
		p++;
	}
	return 0;*/

//int *test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	printf("%d\n", *p);
//	*p = 100;
//	printf("%d\n", *p);
//	return 0;
//}
//int main(void)
//{
//	char *arr[3] = { "abc", "def", "ghi" };
//	char *pArr = arr[0];
//
//	printf("字符串数组arr的每个字符串元素是:  ");
//	for (int index = 0; index < 3; index++)
//	{
//		printf("%s ", arr[index]);
//	}
//
//	printf("\n");
//	printf("字符串数组arr第一个字符串的每个元素是:  ");
//	for (int index = 0; index <15 ; index++)
//	{
//		printf("%c ", *(pArr + index));
//	}
//
//	printf("\n");
//
//	return 0;
//}
int main(void)
{
	int a = 1;
	int *pc = &a;
	printf("%0x\n",& pc);
	printf("%p\n", &pc);
	return 0;
}