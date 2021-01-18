
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//#include"Sales_date"
using namespace std;
				   	//const int v2 = 0;
	//int v1 = v2;
	//int i = 0;
	//int *p1 = &v1, &r1 = v1;
	//const int *p2 = &v2, *const p3 = &i, *r2 = v2;
	//r1 = v2;
	//r1 = 100;
	//p2 = p3;

	//int k = 0;
	//int &t = k;
	//int i = 0;
	//& t = i;
	//t = 100;
	//cout << k <<"   "<< i << endl;

//constexpr int size()
//{
//	return 1;
//}
		//int null = 0, *p = &null;		    


	//constexpr int sz = size();

		  	//string s = "wocao nidaye";
								 /*	cout << s << endl;*/
				//string line;
	//while (getline(cin, line))
	//	cout << line << endl;

		/*	string s;
	while (cin >> s)
	{
		cout << s << endl;
	}*/

   
	//string s1;
	//s1 = "hellow world";
	//string s2 = "hellow";
	//if (s1 > s2)
	//	cout << s1 << endl;
	//else
	//	cout << s2 << endl;

			 	//int i = 0;
	//decltype(i)j = 5;
	//j = 10;

		  	//string s("Hello World!!!");
	//decltype (s.size())punct_cnt = 0;
	//for (auto c:s)
	//if (ispunct(c))
	//	++punct_cnt;
	//cout << punct_cnt
	//	<< "   punctuation characters in " << s << endl;
				//string s("Hellow World!!!");
	//for (auto &c:s)
	//	c = toupper(c);
	//cout << s << endl;											
					  	//string a = "some thing";
	//if (!a.empty())
	//{
	//	a[0] = toupper(a[0]);
	//}
	//cout << a << endl;


int main()		   
{

	string s = "some thing";
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
	{
		s[index] = toupper(s[index]);
	}
    	cout << s << endl;

	system("pause");
	return 0;
}