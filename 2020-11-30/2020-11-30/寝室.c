#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int my_strlen(char *arr)
//{
//	int i = 0;
//	if (arr[i] == '\0')
//		return 0;
//	else
//	{
//		i++;
//		return	1 + my_strlen(&arr[i]);
//	}
//}
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd','\0' };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//
//}
#include<assert.h>

//char* my_strcpy(char* dest, const char*str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	char*ret = dest;
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[5] = { 'a', 'b', 'c', 'd', 'e' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//char *my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	while (*dest != '\0')
//
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//}


//int my_strcmp(const char*str1, const char*str2)
//{
//	assert(str1&&str2);
//	while (*str1==*str2 )
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return  -1;
//}
//int main()
//{
//	char*p1 = "abcdef";
//	char*p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}
			

//my_strcpy(char*x, char*y)
//{
//	while (*x++=*y++)
//	{
//		;
//	}
//	*x = '\0';
//}
//int main()
//{
//	char arr[100] = "abcdl7454743215675";
//	char arr2[] = "zxcvbnm,1234";
//	my_strcpy(arr, arr2);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[100] = "asdfgh";
//	char arr2[] = "12345'\0'066789";	
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//arr1找到\0然后停下来  将arr2得 补到arr1 上面去 最后添上\0

  


//my_strcat(char x[],const char y[])
//{
//	assert(*x != NULL);
//	assert(*y != NULL);
//	while (*x )
//		x++;
//	while (*x++=*y++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[100] = "asdfghjkl;\0zxcvbnm,.";
//	char arr2[] = "1234asd\0fqwer";
//	my_strcat(&arr1[0], arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//

//
//int main()
//{
//	char arr1[] = "sbcdrfghijklmn\0b";
//	char arr2[] = "sbcdrfghijklmn\0a";
//
//	int len = strcmp(arr1, arr2);
//	printf("%d", len);
//	return 0;
//}

//int my_strcmp(char*x, char*y)
//{
//	while (*x++ == *y++)
//	{
//		if (*x == '\0')
//		{
//			return 0;
//		}
//	}
//	if (*x != *y)
//		return *x - *y;
//		
//}
//int main()
//{
//	char arr1[] = "asdfghjkl";
//	char arr2[] = "asdasdfghjkl";
//	int ret=my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[15] = "abSDFAc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 10);
//	printf("%s", arr1);
//	return 0;
//}
 


//char *my_strncpy(char *x,const char*y, int n)
//{
//	char *start = x;
//
//	while (n&&(*x++=*y++))
//	{
//		n--;
//	}
//	if (n)
//	while (--n)
//		*x = '\0';
//	return (start);
//}
//int main()
//{
//	char arr1[19] = "abcdef";
//	char arr2[] = "bitasdcxzcz";
//	my_strncpy(arr1, arr2, 10);
//	printf("%s", arr1);
//	return 0;
//
//}


//int main()
//{
//	int power;
//	float money = 0.0;
//	scanf("%d", &power);
//	if (power > 4000)
//	{
//		money = (power - 4000)*0.73;
//		power = 4000;
//	}
//	if (power > 2000 && power <= 4000)
//	{
//		money += (power - 2000)*0.54;
//		power = 2000;
//	}
//	if ( power <= 2000)
//	{
//		money += power*0.48;
//	}
//	if (power < 0)
//		printf("error");
//	else
//		printf("%.2f", money);
//		return 0;
//
//}
//int main()
//{
//	int power;
//	scanf("%d", &power);
//	int money = 0;
//	int n = 0;
//	if (power >= 4000)
//		n = 3;
//	if (power<4000&&power>=2000)
//		n = 2; 
//	if (power <2000)
//		n = 3;
//	if (power < 0)
//		printf("error");
//	switch (n)
//		case 1:
//	{
//		money = (power - 4000)*0.73;
//		power = 4000;
//	}
//		case 2:
//		{
//				  money += (power - 2000)*0.57;
//		}
//
//}

//int main()
//{
//	int sum = 0, m, n, i, j, ret=0;
//	scanf("%d %d", &m, &n); 
//	j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = m*j + ret;
//		sum += ret;
//		j *= 10;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int N, i = 0, j = 0, sum1 = 0, sum2 = 0;
//	scanf("%d", &N);
//	int arr[100][100] = { 0 };
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i == j)
//				sum1 += arr[i][j];
//			if (j == N - 1 - i)
//				sum2 += arr[i][j];
//		}
//	}
//	int mil = 0;
//	mil = sum1*sum2;
//	printf("%d\n", mil);
//	return 0;
//}
//int main()
//{
//	char *p1 = "abcdefghi";
//	char *p2 = "def";
//	char *ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("存在 子窜\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


char* my_strstr(const char*p1, const char*p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char *s1 = NULL;
	char *s2 = NULL;
	char *cur = (char*)p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1&&*s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
				
int main()
{
	char arr1[] = "asdfghjkl";
	char arr2[] = "lkjhgfdsa";
	char *ret=my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到字串\n");
	}
	else
	{
		printf("%s\n", ret);

	}

	return 0;
}