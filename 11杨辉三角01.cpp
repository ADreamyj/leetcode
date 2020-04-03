//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//using namespace std;
//

//杨辉三角，输出所有的值
//vector<vector<int>> nums(int n)
//{
//	vector<vector<int>> vv;
//	vv.resize(n);
//	for (int i = 0; i < vv.size(); i++)
//	{
//		vv[i].resize(i + 1, 0);
//		vv[i][0] = 1;
//		vv[i][i] = 1;
//	}
//
//	for (int i = 0; i < vv.size(); i++)
//	{
//		for (int j = 0; j < vv[i].size(); j++)
//		{
//			if (vv[i][j] != 1)
//			{
//				vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//			}
//		}
//	}
//	for (int i = 0; i < vv.size(); i++)
//	{
//		for (int j = 0; j < vv[i].size(); j++)
//		{
//			cout << vv[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return vv;
//}
//int main()
//{
//	int n = 6;
//	nums(n);
//	system("pause");
//	return 0;
//}