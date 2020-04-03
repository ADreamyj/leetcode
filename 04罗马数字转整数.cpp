//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<unordered_map>
//#include<string>
//using namespace std;
//
//int Find(string s)
//{
//	unordered_map<char, int> m;
//	m['I'] = 1;
//	m['V'] = 5;
//	m['X'] = 10;
//	m['L'] = 50;
//	m['C'] = 100;
//	m['D'] = 500;
//	m['M'] = 1000;
//
//	int ret = 0, pos = 0;
//	for (int i = 0; i < s.size() - 1; i++)
//	{
//		if (m[s[i]] < m[s[i + 1]])
//			pos -= m[s[i]];
//		else
//			ret += m[s[i]];
//	}
//
//	ret += m[s.back()];
//	return ret + pos;
//}
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		cout << Find(str) << endl;
//	}
//	system("pause");
//	return 0;
//}