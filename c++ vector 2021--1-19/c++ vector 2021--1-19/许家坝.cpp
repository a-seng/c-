#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include<vector>
	 	//string s("Hello World");
	// const char *str = s.c_str();
	//vector<int> v{ 1, 2, 3, 45, 6, 6, 7, 8, 9, 0, 1 };
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//	cout << *it << " ";
	//cout << endl;
	//for (auto &k : v)
	//	k += k;
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//	cout << *it << " ";
	//cout << endl;
  

    //int arr[10] = { 1, 3, 5, 7, 9, 81, 88, 8, 90, 1 };
	//int(*p)[10];
	//p = &arr;
	//cout << *p << endl;
	//cout << *p + 1 << endl;
	//cout << *(p + 1) << endl;
	//cout << p[0] << endl;
	//cout << **p << endl;
	//cout << *p[0] + 5 << endl;
	//cout << *(p[0] + 1) << endl;

 	//const unsigned k = 10;
	//int a[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1};
	//int arr[k];
	//int *pbeg = begin(a);
	//int *last = end(a);
	//while (pbeg != last  &&pbeg >= 0)
	//{
	//	cout << *pbeg << " ";
	//	pbeg++;
	//}

 	//int int_arr[] = { 0, 1, 2, 3, 4, 5, 6 };
	//vector<int> ivec(begin(int_arr), end(int_arr));
	//for (auto k : ivec)
	//	cout << k << endl;

	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//vector<int> k1(arr + 1, arr + 8);
	//vector<int>k2(begin(arr), end(arr));
	//for (auto i : k1)
	//	cout << i << " ";
	//cout << endl;
	//for (auto i : k2)
	//	cout << i << " ";
	//cout << endl;

 	//string s1 = "Hellow C++";
	//string s2 = "aseng NIhao";
//	vector<string> v1(begin(s1), end(s1));
//	vector<string>v2(s1, s1 + 10);

	//int arr[5][5];
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		arr[i][j] = i*j + 10;
	//		cout << arr[i][j] << " ";
	//	}
	//}
	//cout << endl;
	//size_t k = 0;
	//for (auto &row : arr)
	//{
	//	for (auto &col : row)
	//	{
	//		col = k*k++;
	//	}
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		cout << arr[i][j] << " ";
	//	}
	//}
	//

 //	int arr[3][4];
	//for (int i = 0; i < 3;i++)
	//for (int j = 0; j < 4; j++)
	//	arr[i][j] = i*j;

	//for (auto p = arr; p != arr + 3;p++)
	//for (auto q = *p; q != *p + 4; q++)
	//	cout << *q << " ";
	//cout << endl;

	//int arr[3][4] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 4 };
	//for (int(*p)[4] = arr; p != end(arr); p++)
	//{
	//	for (int *q = begin(*p); q != end(*p); q++)
	//	{
	//		cout << *q << " ";
	//	}
	//}
	//cout << endl;

	//int arr[3][4];
	//for (int i = 0; i < 3;i++)
	//for (int j = 0; j < 4; j++)
	//	arr[i][j] = (i + j)*j;

	//using INT = int[4];
	//typedef int Int[4];
	//for (INT *p = arr; p != end(arr); p++)
	//{
	//	for (int *q = begin(*p); q != end(*p); q++)
	//		cout << *q << " ";
	//}
	//cout << endl;

#include<iterator>

int main()
{
	int arr[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			arr[i][j] = (i + 5)*(j + 4) + 10;
	}
	for (auto p1 = arr; p1 != end(arr); p1++)
	{
		for (auto q1 = begin(*p1); q1 != end(*p1); q1++)
			cout << *q1 << " ";
	}
	cout << endl;

	for (int(*p2)[4] = arr; p2 != end(arr); p2++)
	{
		for (int *q2 = begin(*p2); q2 != end(*p2); q2++)
			cout << *q2 << " ";
	}
	cout << endl;

	using INT = int[4];
	for (INT *p3 = arr; p3 != end(arr); p3++)
	{
		for (int *q3 = begin(*p3); q3 != end(*p3); q3++)
			cout << *q3 << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}
