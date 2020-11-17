#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>/*
int main()
{
	int i = 1;
	int sum;

	for (i = 1; i <= 999; i++)
	{
		int x3 = i / 100;
		int x2 = i /10% 10;
		int x1 = i % 10;
		if ((sum = x1*x1*x1 + x2*x2*x2 + x3*x3*x3) == i)
			printf("%d\n", i);
	}
	return 0;
}*/
int main()
{
	int a = 1;
	scanf("%d", &a);
	 int score = a / 10;
	 switch (score){
	 case 10:
	 case 9:
		 printf("%c", 'A');
		 break;
	 case 8:
		 printf("%c", 'B');
		 break;
	 case 7:
		 printf("%c", 'C');
		 break;
	 case 6:
		 printf("%c", 'D');
		 break;
	 default:printf("%c", 'E');
	 }
	 return 0;
}