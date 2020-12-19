#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//#define SIZE 10
//struct Student_type
//{
//	char name[10];
//	int num;
//	int age;
//	char addr[15];
//}stud[SIZE];
//
//int main()
//{										
//	int i;
//	FILE*fp;
//	if ((fp = fopen("stu.dat", "rb") == NULL))
//	{
//		printf("cannot open file \n");
//		exit(0);
//	}
//	for (i = 0; i < SIZE; i++)
//	{
//		fread(&stud[i], sizeof(struct Student_type), 1, fp);
//		printf("%d-10s %4d  %4d %-15s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
//	}
//	fclose(fp);
//	return 0;
//
//}
//struct G616
//{
//	char name[10];
//	char handsome[10];
//	int high;
//	float weight;
//	int  passgirlfriend;
//	int score;
//};
//int main()
//{
//	struct G616  boy[5];
//	int i = 0;
//	printf("请输入他的名字 颜值 身高 体重 交往过的女朋友 分数\n");
//	for (i = 0; i < 2; i++)
//	{
//		scanf(" %s %s %d %f %d %d",boy[i].name, boy[i].handsome, &boy[i].high, &boy[i].weight, &boy[i].passgirlfriend, &boy[i].score);
//
//	}
//	for (i = 0; i < 2; i++)
//	{
//		printf(" %s %s %d %f %d %d\n",boy[i].name, boy[i].handsome,boy[i].high,boy[i].weight,boy[i].passgirlfriend, boy[i].score);
//
//	}
//	return 0;
//
//	
//}
struct student
{
	char name[10];
	int age;
	float weight;
	int score;
};
int main()
{
	
	struct student s[2];
	struct student *p[2] = { &s[0], &s[1] };
	printf("请输入 名字 年龄 体重 分数\n");
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		scanf("%s %d %f %d", p[i]->name, &p[i]->age, &p[i]->weight, &p[i]->score);
	}
	for (i = 0; i < 2; i++)
	{
		printf("%s %d %f %d\n", p[i]->name, p[i]->age, p[i]->weight, p[i]->score);
	}
	struct student *tmp;
	tmp = p[0];
	p[0] = p[1];
	p[1] = tmp;//0000000 
	for (i = 0; i < 2; i++)
	{
		printf("%s %d %f %d\n", p[i]->name, p[i]->age, p[i]->weight, p[i]->score);
	}

	return 0;
	
}
//void main()
//{
//	int x = 023;
//	int y = 23;
//	printf("%d %d", --x,--y);
//}

//int main()
//{
//	int a;
//	int b;
//	b = (a = 10, a + 10, a++);
//	printf("%d %d" , b, a);
//	return 0;
//}