#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//struct p
//{
//	char name[10];
//}a[3];
//int main()
//{
//	int i;
//	for (i = 0; i<3; i++)
//		scanf("%s", a[i].name);
//
//	int j, s1 = 0, s2 = 0, s3 = 0;
//	for (j = 0; j<5; j++)
//	{
//		char b[10] = "0";
//		scanf("%s", b);
//		if (strcmp(a[0].name, b) == 0)
//			s1++;
//		if (strcmp(a[1].name, b) == 0)
//			s2++;
//		if (strcmp(a[2].name, b) == 0)
//			s3++;
//	}
//	if (s1>s2&&s1>s3)
//		printf("%s\n", a[0].name);
//	if (s2>s1&&s2>s3)
//		printf("%s\n", a[1].name);
//	if (s3>s2&&s3>s1)
//		printf("%s\n", a[2].name);
//
//	return 0;
//}
//#include<stdio.h>
//void print(int *p)
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//		printf("%d ", *(p + i));
//}
//void main()
//{
//
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//		print(arr);
//
//
//}
//
//#include<stdio.h>
//void main()
//{
//	char s[100];
//	gets(s);
//	char *str = s;
//	char *last_char;
//	for (last_char = str; *last_char != '\0'; last_char++);
//	last_char--;
//	while (str<last_char)
//	{
//		char temp;
//		temp = *str;
//		*str++ = *last_char;
//		*last_char-- = temp;
//	}
//	puts(s);
//}
//struct v
//{
//	float  x;
//	float y;
//};
//int main()
//{
//	struct v s[2];
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		scanf("%f %f", &s[i].x, &s[i].y);
//	}
//	printf("(%.1f,%.1f)", s[0].x - s[1].x, s[0].y - s[1].y);
//	return 0;
//
//}
//struct Student
//{
//	char name[20];
//	float score1;
//	float score2;
//	float score3;
//};
//
//int main(){
//	struct Student s[3],tmp;
//	float aver[3];
//	int max=0, i = 0,j = 0;
//	for (i = 0; i < 3; i++)
//		scanf("%s %f %f %f", s[i].name, &s[i].score1, &s[i].score2, &s[i].score3);
//	for (i = 0; i < 3; i++)
//		aver[i] = (s[i].score1 + s[i].score2 + s[i].score3)/3;
//	for (i = 0; i < 3; i++)
//	{
//		max = i;
//		for (j = i; j < 3; j++)
//		{
//			if (aver[max] < aver[j])
//				max = j;
//		}
//				tmp = s[i];
//				s[i] = s[max];
//				s[max] = tmp;
//				int tmp1 = aver[i];
//				aver[i] = aver [max];
//				aver[max] = tmp1;
//	}
//	for (i = 0; i < 3; i++)
//		printf("%s %.2f\n", s[i].name, aver[i]);
//}
//struct Date{
//	int Month;
//	int Day;
//};
//int main()
//{
//	struct Date s[10],tmp;
//	int i = 0, j = 0, max = 0, tmp1, count = 0;
//	int sum[10];
//	for (i = 0; i < 10; i++)
//	{
//		count++;
//		scanf("%d%d", &s[i].Month,& s[i].Day);
//		sum[i] = s[i].Month * 30 + s[i].Day;
//		if (s[i].Month == 0 && s[i].Day == 0)
//			break;
//	}
//		for (i = 0; i < count ; i++)
//		{
//			max  = i;
//			for (j = i; j < count-1; j++)
//			{
//				if (sum[max] > sum[j])
//					max = j;
//			}
//					tmp = s[i];
//					s[i] = s[max];
//					s[max] = tmp;
//					int tmp1 = sum[i];
//					sum [i] = sum  [max];
//					sum [max] = tmp1;
//		}
//			for (i = 0; i < count-1; i++)
//				printf("%d %d\n", s[i].Month , s[i].Day);
//			return 0;
//}														\


struct Student
{
	int num ;
	char name[10];
	int score;
};

int main()

{
	struct Student s[5][5];
	int N;
	int num = 0;			
	int i = 0, j = 0, max[5] = { 0 }, count=0;
	for(i = 0; i < 5; i++)
		{
		scanf("%d", &N);
			if (N == 0)
				break;
			max [i]= 0;
			for (j = 0; j < N; j++)
			{
				scanf("%d %s %d", &s[i][j].num, s[i][j].name, &s[i][j].score);
				if (s[i][max[i]].score < s[i][j].score)
					max [i] = j;
			}
			count++;
		}
	for (i = 0; i < count;i++)
		printf("%d %s\n", s[i][max[i]].num, s[i][max[i]].name);
	return 0;
}