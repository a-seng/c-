#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//struct Stu
//{
//	char namr[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 2;
//	printf("%d\n", stu.age);
//}
//void set_age2(struct Stu*ppp)
//{
//	//ppp->age = 3;
//	printf("%d\n", ppp->age);
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu*ppp = &stu;       //
//
//	stu.age = 1;
//	printf("%d\n", stu.age);
//	set_age1(stu);
//	ppp->age = 4;
//	set_age2(ppp);
//	return 0;
//
//}
//int main()
//{
//	/*char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;*/
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//}int main()
{
	char a = 0xb6;	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	return 0;
}
