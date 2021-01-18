#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

		   	//string word;
	//while (cin >> word)
	//	cout << word << endl;
		//string line;
	//while (getline(cin, line))
	//	cout << line << endl;

	//string line;
	//while (getline(cin, line))
	//{
	//	if (!line.empty())
	//		cout << line << endl;
	//	else
	//		break;
	//}

	//string str("some thing");
	//for (auto c : str)
	//	cout << c << endl;

	//string s = "Hello World!!!";
	//string::size_type punct_cnt = 0;
	//for (auto c:s)
	//if (ispunct(c))
	//	++punct_cnt;
	//cout << punct_cnt << endl;

	//for (auto &c : s)
	//	c = toupper(c);
	//cout << s << endl;

	//if (!s.empty())
	//	cout << s[0] << endl;

	//string s("Hello World!!!");

	//for (string::size_type index = 0; index != s.size() && !isspace(s[index]); ++index)
	//	s[index] = toupper(s[index]);
	//cout << s << endl;

	//const string s = "0123456789ABCDEF";
	//string result;
	//string::size_type n;
	//while (cin >> n)
	//{
	//	if (n < s.size())
	//	{
	//		result += s[n];
	//		cout << result << endl;
	//	}
	//	else
	//		cout << "ÊäÈë´íÎó" << endl;
	//}

	//string s;
	//cin >> s;
	//for (char &n: s)
	//{
	//	if (isalpha(n))
	//		n = 'X';

	//}
	//cout << s << endl;

	//string s;
	//cin >> s;
	//string::size_type count = 0;
	//while (count < s.size())
	//{
	//	if (isalpha(s[count]))
	//		s[count] = 'X';
	//	count++;
	//}
	//cout << s << endl;

	//string str;
	//cin >> str;
	//string str2;

	//for (auto k : str)
	//{
	//	if (!ispunct(k))
	//		str2 += k;
	//}
	//cout << str2 << endl;

	//vector<int>v{ 1, 2, 3, 4, 5, 6, 7, 8 };
	//for (vector<int>::iterator it = v.begin(); it!= v.end(); it++)
	//	cout << *it << endl;

	//vector<string>v1(10);
	//vector<string>v2{ 10 };
	//cout << endl;

	//vector<int>v;
	//int i;
	//while (cin >> i)
	//{
	//	v.push_back(i);
	//}





#include<vector>

int main()
{
	vector<int>v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto &i : v)
		i *= i;
	for (auto i : v)
		cout << i << " ";
	cout << endl;





	




	system("pause");
	return 0;
}
																																				