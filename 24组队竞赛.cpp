//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v;
//		v.resize(3 * n);
//		for (int i = 0; i < 3 * n; i++)
//		{
//			cin >> v[i];
//		}
//		sort(v.begin(), v.end());
//		int sum = 0;
//		for (int i = n; i <= 3 * n - 2; i += 2)
//		{
//			sum += v[i];
//		}
//		cout << sum << endl;
//	}
//	system("pause");
//	return 0;
//}