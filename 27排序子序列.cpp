//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n, 0);
//		for (int i = 0; i < v.size(); i++)
//		{
//			cin >> v[i];
//		}
//		int flag = 1;//用flag标记转折点的情况
//		int sum = 0;//用sum来记录转折点
//		for (int i = 0; i < v.size() - 1; i++)
//		{
//			if (flag == 1)
//			{
//				if (v[i] > v[i + 1])
//					flag = 0;
//				else if (v[i] < v[i + 1])
//					flag = 2;
//			}
//			else if (flag == 0 && v[i] < v[i + 1])
//			{
//				flag = 1;
//				sum++;
//			}
//			else if (flag == 2 && v[i] > v[i + 1])
//			{
//				flag = 1;
//				sum++;
//			}
//		}
//		cout << sum + 1 << endl;
//	}
//	system("pause");
//	return 0;
//}