#define _CRT_SECURE_NO_WARNINGS 1/*
int main()
{
	float  f, s, p, w, d;
	scanf("%f%f%f",&p,&w,&s);
	if (s < 250)
		d = 0;
	if (s >= 250 && s < 500)
		d = 0.02;
	if (s >= 500 && s < 1000)
		d = 0.05;
	if (s >= 1000 && s < 2000)
		d = 0.08;
	if (s >= 2000 && s < 3000)
		d = 0.10;
	if (s >= 3000)
		d = 0.15;
	f = p*w*s*(1 - d);
	printf("%.4f", f);
	return 0;
}*/
//int main()
//{
//	char  A;
//	scanf("%c", &A);
//	if (A > 64 && A < 91)
//		A += 32;
//	printf("%c\n", A);
//	return 0;
//}
#include<stdio.h>
/*
int main()
{
	float  a, b, c, tmp;
	scanf("%f %f %f",&a, &b, &c);
	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		tmp = b;
		b = c ;
		c = tmp;
	}
	printf("%.2f %.2f %.2f\n", a, b, c);
	return 0;

}*/
int main()
{
	int sum = 0;
	int i = 0;
	char arr[80] = { 0 };
	scanf("%s", &arr);

	while (arr[i])
	{			
		if ((int)arr[i]<58 && (int)arr[i]>47)
			(int)arr[i] = (int)arr[i] - 48;
		sum += (int)arr[i];
		i++;
	}
	printf("%d", sum);
	return 0;
}