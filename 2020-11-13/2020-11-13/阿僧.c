#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct Stu 
//{
//	char name[10];
//	int age;
//	char id[20];
//	double score;
//
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "����", 20, "2019010305" };
//	struct Stu*ps = &s1;
//	printf("%s\n", ps->name);
//	return 0;
////}
//int main()
//{
//	int a;
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h> void test1(int arr[]) {    printf("%d\n", sizeof(arr));//(2) } void test2(char ch[]) {    printf("%d\n", sizeof(ch));//(4) } int main() {    int arr[10] = {0};    char ch[10] = {0};    printf("%d\n", sizeof(arr));//(1)    printf("%d\n", sizeof(ch));//(3)    test1(arr);    test2(ch);    return 0; }
//#include <stdio.h>
//void test1(int arr[]) 
//{   
//	printf("%d\n", sizeof(arr));//(2) 
//}
//void test2(char ch[])
//{  
//	printf("%d\n", sizeof(ch));//(4)
//
//} 
//int main()
//{   
//	int arr[10] = {0}; 
//char ch[10] = {0}; 
//printf("%d\n", sizeof(arr));
////(1)  
//printf("%d\n", sizeof(ch));
////(3)   
//test1(arr);  
//test2(ch);  
//return 0;
//}
#include <stdio.h>    
void test1()  
{   
	printf("hehe\n"); 
}  
void test2(const char *str)  
{        printf("%s\n", str);    } 
int main()    {     
	test1(); 
	//ʵ�ã�����Ϊ�������ò�������     
	test2("hello bit.");//ʵ�ã�����Ϊ�������ò�������
	return 0;  
}
