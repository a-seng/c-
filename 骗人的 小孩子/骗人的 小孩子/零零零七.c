
#define _CRT_SECURE_NO_WARNINGS  1
////#include <stdio.h>/*
//void test()
//{
//	static int i=0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}*/
////
////int main()
////{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}
//#define ADD(x,y,z) ((x)+(y)+(z))
#include<stdio.h>
//int main()
//{
//	int c, D=1;
//	int sum = 0;
//	int a, b;
//	scanf("%d %d %d", &a, &b&&D,&c);
//	
//
//	sum = 10 * ADD(a,b,c);
//	printf("%d\n", sum);
//	return 0;
////}
//int main()
//{
//	int num = 10;
//	&num;
//	printf("%p\n", &num);
//	return 0;
////}
//int main()
//{
//	char ch = 'w';
//	char*pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
////}
//int main(){
//	struct stu
//	{
//		char name[20];
//		int age;
//		char sex[5];
//		char id[15];
//	};
//	struct stu s = { "张三", 20, "男", "20180101" };
//	printf("name =%s age = %d sex= %s id = %s\n", s.name, s.age, s.sex, s.id);
//	struct stu*ps = &s;
//	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age
//		, ps->sex, ps->id);
//	return 0;
////}
//int main(){
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	int sub = 0;
//	int cheng = 0;
//	int chu = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	sub = a - b;
//	cheng = a*b;
//	printf("%d\n %d\n %d\n", sum, sub, cheng);
//	printf("%c",sum=)
//	while (b == 0){
//		printf("不好意思 输入错误 被除数 不能为0");
//		break;
//	}
//	chu = a / b;
//	printf("%d\n", chu );
//	return 0;
//


//int main(){
//	int C = 0;
//	int F = 0;
//	scanf("%d", &F);
//	C = 5 * (F - 32) / 9;
//	printf("Celsius=%d\n", C);
//	return 0;
////}
//int sum(int b)
//{
//	int c = 0;
//	static int a = 3;
//	c += 1;
//	a += 2;
//	return ( a+b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(b));
//	}
////}
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (m%n){
//
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main(){
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年 回家睡觉吧！！！");
//	else if (age>50)
//	{
//
//		printf("不错嘛小子 你老了欸");//                              记住 else如果 不加 if 后面 不能跟条件
//	}
//	else if(age >= 18 && age <= 50)
//	{
//		printf("不错 不从 ");
//	}
//	return 0;
////}
//int main(){
//	int i = 1;
//	while(i < 100)
//	if (0 == i % 2){
//		printf("%d\n", i);
//			i++;
//	}
//	return 0;
////}
//int main()
//{
//	int day = 0;
//
//	switch (day){
//	case 1:
//		printf("周一\n"); break;
//	case 2:
//		printf("周二\n"); break;
//	case 3:
//		printf("周三\n"); break;
//	case 4:
//		printf("周四\n"); break;
//	case 5:
//		printf("周五\n"); break;
//	case 6:
//		printf("周六\n"); break;
//	case 7:
//		printf("周日\n"); break;
//	case 8:
//		printf("周啦啦啦\n"); break;
//	}
//	return 0;
//}
//int main(){
//	int day = 0;
//	scanf("%d", &day);
//	switch (day){
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weakday\n");                  //注意 case 后面加：  必须加 { 才可以加break
//                                             scanf 后面 加 加 加 &&&&&&&&&&&&&&&&&&&&&&&&&&&
//		break;
//	case 6:
//	case 7:
//		printf("放假");
//	}
//	return 0;
////}
//int main(){
//	int num = 0;
//	while (num <= 10){
//		printf("%d\n", num);
//		num++;
//	}
//	return 0;
//}
int main()
{
	int ch = 0;
	while ((ch + getchar()) != EOF)
	{
		if (ch<'0' || ch >'9')
			continue;
		putchar(ch);
	}
	return 0;

}