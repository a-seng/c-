#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;


	//int arr[3][4];
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//		arr[i][j] = (i + 9)*(j + 3)*(j - 5);
	//}

	//for (auto row = arr; row != end(arr); row++)
	//{
	//	for (auto low = begin(*row); low != end(*row); low++)
	//		cout << *low << " ";
	//}
	//for (int(*p1)[4] = arr; p1 != end(arr); p1++)
	//{
	//	for (int *q1 = begin(*p1); q1 != end(*p1); q1++)
	//		cout << *q1 << " ";
	//}

	//int k = 0;
	//k = -30 * 3 + 21 / 5;					 //-86
	//cout << k << endl;
	//k = -30 + 3 * 21 / 5;				//-18
	//cout << k << endl;
	//k = 30 / 3 * 21 % 5;			   //0
	//cout << k << endl;
	//k = -30 / 3 * 21 % 4;		  //-2
	//cout << k << endl;

//#define MAX 50
//
//typedef struct
//{
//	char ch[MAX+1];
//	int length;
//}SString;
//
//
//int Index(SString d, SString s, int pos)
//{
//	int i = pos;
//	int j = 1;
//	while (i <= s.length  &&  j <= d.length)
//	{
//		if (s.ch[i] == d.ch[j])
//		{
//			++i;
//			++j;
//		}
//		else																	  //abcdefghijklmn
//		{																		 //                    m
//			i = i - j + 2;
//			j = 1;
//		}
//	}
//
//	if (j > d.length)
//		return 	   i - j + 1;
//	else
//		return 0;
//
//}	  	//SString s1;

typedef int array[3][4];
typedef int k[4];
typedef k s[3];

int main()
{
	array p = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 } };
	s p1 = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 } };
	
	




	system("pause");
	return 0;
}
