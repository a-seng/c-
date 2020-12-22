//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//
////void creat()
////{
////	struct new{
////		int num;
////		char name;
////		struct *next;
////	};
////
////}
////int main()
////{
////	creat();
////		return 0;
////}
////#include<stdio.h>
////#include<stdlib.h>
////#define LEN sizeof(struct Student)
////struct Student
////{
////	long num;
////	float score;
////	struct Student*next;
////};
////int n;
////struct Student*creat(void)
////{
////	struct Student*head;
////	struct Student *p1, *p2;
////	n = 0;
////	p1 = p2 = (struct Student*)malloc(LEN);
////	scanf("%ld,%f", &p1->num, &p1->score);
////	head = NULL;
////	while (p1->num != 0)
////	{
////		n += 1;
////		if (n == 1)head = p1;
////		else p2->next = p1;
////		p2 = p1;
////		p1 = (struct Student*)malloc(LEN);
////		scanf("%ld ,%f", &p1->num, &p1->score);
////	}
////	p2->next = NULL;
////	return (head);									 
////}
////int main()
////{
////	struct Student*pt;
////	pt = creat();
////	printf("\nnum:%ld\nscore:%5.1f\n", pt->num, pt->score);
////	return 0;
////}
//#include<stdio.h>
//#include<stdlib.h>
//
//#define Len sizeof(struct Student)
//
//
//struct Student{
//	char name[10];
//	int score;
//	struct Student*next;
//};
//
//struct Student *creat()
//{
//	struct Student *p1, *p2, *head;
//	p1 = p2 = (struct Student*)malloc(Len);		 
//	printf("请输入 姓名和分数\n");
//	printf("输入“*****” “00”为结束输入\n");
//	scanf("%s %d",&p1->name, &p1->score);
//	int n = 0;
//	head = NULL;
//	if (strcmp("*****", p1->name) == 0){
//		free(p1);
//		return head;
//	}
//	while (strcmp("*****",p1->name)!=0)
//	{
//		n++;
//		if (n == 1)
//			head = p1;
//		else
//		{ 
//			p2->next = p1;
//			p2 = p1;
//			p1 = (struct Student *)malloc(Len);
//			scanf("%s %d",&p1->name, &p1->score);
//		}
//	}p2->next = NULL;
//	return head;
//}
//
//void print(struct Student*head)
//{
//	struct Student *p;
//	p = head;
//	if (p == NULL)
//		printf("该结构体为空\n");
//	else{
//		while (p){
//			printf("%s %d\n", p->name, p->score);
//			p = p->next;
//		}	
//	}
//}
//
//struct Student *Delete(struct Student* head){
//	if (head == NULL){
//		printf("您的数据库为空\n");
//		return NULL;
//	}
////	if (strcmp(head->name, name) == 0)
////	{
////		printf("删除成功\n");
////		head = head->next;
////		return head;
////	}
//	else{
//		printf("请输入 您想要删除的学生信息(name)\n");
//		char name[10];
//		int count = 0;
//		getchar();
//		gets(name);
//		struct Student *p1, *p2;				
//		p1=p2 = head;
//		while (p1){
//			if (strcmp(p1->name,name)==0){
//				if (count == 0)
//				{
//					head = head->next;
//					return head;
//				}
//				p2 ->next = p1->next;
//				free(p1);
//				printf("删除成功\n");
//				return head;
//			  }
//			count++;
//			p2 = p1;
//			p1 = p1->next ;
//		}
//		printf("未找到您所想要查找的数据\n");
//	}
//	return head;
//}
//
//void FreeAll(struct Student*head)
//{
//	if (head == NULL)
//		;
//	else 
//	{
//		struct Student*p1, *p2;
//		p1 = head;
//		p2 = p1->next;
//		while (p1)
//		{
//			free(p1);
//			p1 = p2;
//			p2 = p2->next;
//		}
//	}
//}
//
//int main()
//{
//	struct Student*p;
//	
//	p = creat();
//	print(p);
//	p=Delete(p);
//	print(p);
//	FreeAll(p);
//	return 0;
//}