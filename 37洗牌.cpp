//#define _CRT_SECURE_NO_WARNINGS  1
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int T, n, k;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n >> k;
//		vector<int> v(2 * n);
//		for (int i = 0; i < 2 * n; i++)
//		{
//			cin >> v[i];
//		}
//		while (k--)
//		{
//			vector<int> table(v);
//			//循环只遍历一半，一次刚好找到两个数的下标
//			for (int i = 0; i < n; i++)
//			{
//				//这个就是找规律了，下标0到0，下标1到2，下标2到4
//				v[2 * i] = table[i];
//				//下标3到1，下标4到3，下标5到5
//				v[2 * i + 1] = table[i + n];
//			}
//		}
//		for (int i = 0; i < v.size(); i++)
//		{
//			cout << v[i] << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}