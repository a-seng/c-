#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
	//const int k1 = 100, k2 = 200, k3 = 300;
	//int size;
	//int k;
	//cin >> k;
	//switch (k)
	//{
	//case k1:
	//string str;
	//cin >> str;
	//string tmp = str;
	//int count=1;
	//int max=0;

	//while (cin >> str)
	//{
	//	if (tmp == str)
	//	{
	//		count++;
	//	}
	//	else
	//		count = 1;
	//
	//	if (count > max)
	//		max = count;

	//	tmp = str;


	//}
	//cout << max << endl;
	//int i = 0, j = 0;
	//string str, k;
	//cin >> k;
	//str = k;
	//int count = 1, max = 1;
	//string tmp;
	//while (cin >> k)          
	//{
	//	if (str == k)
	//		count++;
	//	else
	//		count = 1;
	//	if (max < count)
	//	{
	//		max = count;
	//		tmp = k;
	//	}
	//	str = k;
	//}
	//cout << tmp << "   " << max << endl;		                                                                                     
	//}

	//vector<int>v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//for (auto beg = v.begin(), end = v.end(); beg != end; ++beg)
	//{
	//	auto &p = *beg;
	//	p *= 2;
	//	cout << *beg << " ";
	//}
	//cout << endl;

#include<vector>
int main()
{
	string rsp;
	do{										   2x
		cout << " please enter teo values : ";
		int val1 = 0, val2 = 0;
		cin >> val1 >> val2;
		cout << " The sum of " << val1<< "  and " << val2<< " = " << val1 + val2 << endl;
		cout << " More ? Enter yes or no: " << endl;
		cin>>rsp;
	} while (!rsp.empty() && rsp[0] != 'n');





	system("pause");
	return 0;
}