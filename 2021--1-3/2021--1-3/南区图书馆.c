//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define Len sizeof(struct Student)
//
//struct Student
//{
//	int num;
//	char name[20];
//	float score;
//	struct Student*next;
//};
//
//struct Student* creat()
//{
//	int n = 0;
//	struct Student* p1, *p2, *head=NULL;
//	p2=p1 = (struct Student*)malloc(Len);
//	scanf("%d %s %f",&p1->num,p1->name,&p1->score);
//	if (p1->num != NULL)
//	do
//	{
//		if (n == 0)
//			head = p1;
//		else{
//			p2->next = p1;
//			p2 = p1;
//			p1 = (struct Student*)malloc(Len);
//			scanf("%d %s %.0f", &p1->num, p1->name, &p1->score);
//		}
//		n++;
//	} while (p1->num);
//	p2->next = NULL;
//	return head;
//}
//
//void print(struct Student*p)
//{				   
//	int n = 0;
//	while (p)
//	{
//		printf("%d %s %f\n", p->num, p->name, p->score);
//		p = p->next;
//	}
//}
//
//void test()
//{
//	printf("��������������� ѧ���� ѧ�� ���� �ͷ��� һ���м�����һ��ѧ��\n");
//	printf("��00  00����\n");
//	struct Student *p = creat();
//	print(p);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}