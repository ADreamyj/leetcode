//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse(s.begin(), s.end());
//	int i = 0, j = 0;
//	while (i < s.size())
//	{
//		if (s[i] == ' ')//���ǰ������м��С� ������Ҫ����ߣ�������һ��ѭ��
//		{
//			i++;
//			continue;
//		}
//		for (j = i; j < s.size(); j++)
//		{
//			if (s[j] == ' ')
//				break;
//		}
//		reverse(s.begin() + i, s.begin() + j);
//		i = j;
//	}
//	cout << s << endl;
//	system("pause");
//	return 0;
//}