//#define _CRT_SECURE_NO_WARNINGS  1
//
////动态规划
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str1;
//	string str2;
//	while (cin >> str1 >> str2)
//	{
//		int len1 = str1.size();
//		int len2 = str2.size();
//		vector<vector<bool>> vv(len1 + 1, vector<bool>(len2 + 1, false));
//		vv[0][0] = true;
//		for (int i = 1; i <= len1; i++)
//		{
//			for (int j = 1; j <= len2; j++)
//			{
//				if (str1[i - 1] == '?' || str1[i - 1] == str2[j - 1])
//				{
//					//匹配一个字符
//					vv[i][j] = vv[i - 1][j - 1];
//				}
//				else if (str1[i - 1] == '*')
//				{
//					//匹配0个(j不动)，1个(两者都向前移动一个字符)，多个(str向前移动一个字符)
//					vv[i][j] = vv[i - 1][j] || vv[i - 1][j - 1] || vv[i][j - 1];
//				}
//			}
//		}
//		if (vv[len1][len2])
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;
//	}
//	system("pause");
//	return 0;
//}