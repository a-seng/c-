#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//enum Color
//{
//	END,
//	GREEn=100,
//	Blue
//
//};
//
//
//int main()
//{
//	enum Color c = 2; 
//	printf("%c %s %d\n", END, GREEn, Blue);
//	return 0;
//	
//}


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	
//	int ret = check_sys();
//	if (1 == ret )
//	{
//		printf("Ð¡¶Ë\n");
//
//	}
//	else
//	{
//		printf("´ó¶Ë\n");
//	}
//	return 0;
//}

union Un
{
	int a;
	char arr[5];

};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}






























































































