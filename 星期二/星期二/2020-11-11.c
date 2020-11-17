 #define _CRT_SECURE_NO_WARNINGS 1
 #include<stdio.h>/*
int main()
{
	int i = 1; 
	double sum = 0.00;
	for (i = 1; i <= 100; i++)
	{
		sum += 1.0 / i;
	}
	printf("%fl\n", sum);
	return 0;
}*/
//# include<stdio.h>
//void swap2(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}/*
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//}*/
//int Max(int arr[],int sz)
//{
//	int i = 0;
//	int ax=arr[0];
//	for (i = 0; i <sz ; i++)
//	{
//		if (ax < arr[i])
//			ax = arr[i];
//		
//	}
//	return ax;
//}
//int main()
//{
//	int sz;
//	int arr[10] = { 1,2,3,4,14,6,11,8,9,12 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int max = Max(arr, sz);
//	printf("最大值是》：%d\n", max);
//	return 0;
//	
////}
//int main()
//{
//	int a, b, c, num1, num2, num3;
//	scanf("%d %d %d", &a, &b, &c);
//	int arr[3] = { a, b, c };
//	num1 = a; num2 = b; num3 = c;
//	if (a <= b)         // 1 2
//	{
//		num2 = a; //       1
//		num1 = b; //      2
//	} 
//	else  if (a <= c)  //  1 3
//	{
//		num2 = c;//         3
//		num3 = a;//           1
//
//	}
//	else if (b <= c){
//		num1 = c;
//		num2 = b;
//	}
//	printf("num1=%d  num2=%d  num3=%d", num1, num2, num3);
//	return 0;
//
////}
//int max_yue(int a, int b)
//{
//	int i,mix;
//	int m = 1;
//	if (a < b)
//		mix = a;
//	else
//		mix = b;
//	for (i = 1; i <=mix; i++);
//	if (a%i == 0 && b%i == 0){
//		 m=i;
//	}
//	return m;
//	
//
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int max=max_yue(a, b);
//	printf("%d\n", max);
//	return 0;
//
////}
//int main()
//{
//	int a = 44;
//	int b = 88;
//	
//	int i, mix;
//	int m = 1;
//	if (a < b)
//		mix = a;
//	else
//	{
//
//		mix = b;
//	}
//	for(i = 1; i <= mix; i++)
//	{
//		if ((a%i == 0) && (b%i == 0))
//		{
//			m = i;
//		}
//	}
//    printf("%d\n",m);
//	return 0;
////}
//int main(){
//	int sz, i,tmp;
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
//	sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("arr1[%d]=%d ,arr2[%d]=%d\n", i, arr1[i], i, arr2[i]);
//	}
//		return 0;
//	
//
////}
//int main()
//{
//     double  i = 0;
//	double sum = 0.0;
//	for (i = 1.0; i <= 100; i++)
//	{
//		sum = sum + 1 / i;
//		i++;
//		sum = sum - 1 / i;
//	}
//	printf("%fl", sum);
//	return  0;
////}
//int main()
//{
//	int i = 1;
//	int count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i == 9 || i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99
//			count++;  // 1  2    3 4 5 6    7  8 9  10 11  12 13 14 15 16 17 18 19 10
//
//	}
//	printf("%d\n",count);
//	return 0;
/*
{
int main()
	int i = 1;
	int arr1[] = { "      *        " };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 1; i <= 6;i++)
}*/
//
//int main()
//{
//	int b;
//	char c;
//	float a = 0.00;
//	float f = 0.00;
//	scanf("%f %d %c %f", &a, &b, &c, &f);
//	printf("%c %d %3.2f %3.2f", c, b, a, f);
//	return 0;
//
//int main()
//{
//	int a, b, c, d, a1, b1, c1, d1;
//	scanf("%d %d", &a, &b);
//	c = a / 100;
//	d = a % 100;
//	c1 = b / 100;
//	d1 = b % 100;
//	a1 = c1 - c;
//	b1 = d1 - d;
//	printf("%2d:%2d", a1, b1);
//	return 0;
//}
int main()
{
	int I = 0;
	double sum = 0;
	scanf("%d", &I);
	while (I <= 100000)
	{
		sum = I*0.1;
		break;
	}
	while (I > 100000 && I <= 200000)
	{
		sum = 100000*0.1+ (I - 100000)*0.075;
		break;
	}	while (I > 200000 && I < 400000)
	{
		sum = 100000*(0.1+0.075) + (I - 200000)*0.05;
		break;
	}while (I > 400000 && I < 600000)
	{
		sum = 100000 * (0.1 + 0.075+0.10)+ (I - 400000)*0.03;
		break;
	}while (I > 600000 && I < 1000000)
	{
		sum = 100000 * (0.1 + 0.075 + 0.05+0.06) + (I - 600000)*0.015;
		break;
	} while (I > 1000000)
	{
		sum = 100000 * (0.1 + 0.075 + 0.05 + 0.03+0.06) + (I - 1000000)*0.01;
		break;
	}printf("%9.2f", sum);
	return 0;

}