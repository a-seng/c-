#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(a+5 );
//	int *ptr2 = (int *)((int)a + 1);			00000000 00000000 00000000 00001010
//	printf("%x,%x", ptr1[-3], *ptr2);	    11111111 11111111 11111111 11110111
//	return 0;										10000000 00000000 00000000 00001010
//}													 
//int main()
//{
//	char a[5][5];		 //[1a]2[1234][3][4][5b]  [6][7][8]9c[][10] [11][12][13d][14][15]	   [][][][e][]
//	int (*p)[4];		 //[1] [] [] []
//	p = a;			  //
//	printf("%d,%d\n", &a[4][2] - &p[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}




//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p1 = (int*)(&aa + 1);
//	int *p2 = (*(aa + 1));
//	printf("%d,%d\n", *(p1 - 1), *p2 - 1);
//	return 0;
//}
int main()
{
	char*a[] = { "work","at","alibaba" };
	char **pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}