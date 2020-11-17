#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(&arr, sz);
//	return 0;
//}
#include<string.h>
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}                
//33
typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}atu;

void print1(atu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("dex: %s\n", tmp.sex);

}
print2(aut ps)
{
	printf("name%s\n", ps->name);
	printf("age%d\n", ps->age);
}

int main()
{
	atu s = { "ÀîËÄ", 48, "15598883388", "ÄĞ" };
	print1( s);
	print2(&s);
	return 0;
}