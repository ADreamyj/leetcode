//#define _CRT_SECURE_NO_WARNINGS  1
//
////两个字符串，根据第二哥字符串中的内容，删除第一个字符串
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	getline(cin , str1);
//	getline(cin, str2);
//
//	int v[256] = {0};
//	for (int i = 0; i < str2.size(); i++)
//	{
//		v[str2[i]]++;
//	}
//	string ret;
//	for (int i = 0; i < str1.size(); i++)
//	{
//		if (v[str1[i]] == 0)
//			ret += str1[i];
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}