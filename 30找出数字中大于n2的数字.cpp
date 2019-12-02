//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
////#include<algorithm>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n,0);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//		}
//		//sort(v.begin(), v.end());
//
//		int temp = v[0];
//		int count = 1;
//		for (int i = 1; i < v.size(); i++)
//		{
//			if (temp == v[i])
//			{
//				count++;
//			}
//			else
//			{
//				count--;
//			}
//			if (count == 0)
//			{
//				temp = v[i];
//				count = 1;
//			}
//		}
//
//		cout << temp << endl;
//	}
//	system("pause");
//	return 0;
//}