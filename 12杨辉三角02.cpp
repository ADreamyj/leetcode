//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//using namespace std;
//

//这个题就是求杨辉三角中的一行的数字，它并不用把所有的杨辉三角都遍历出来
//也不需要开辟更大的空间，只需要把需要的那一行做出来就行了。

//vector<int> nums(int n)
//{
//	vector<int> v(n + 1, 0);
//	v[0] = 1;
//	for (int i = 1; i < n + 1; i++)
//	{
//		for (int j = i; j >= 1; j--)
//		{
//			v[j] += v[j - 1];
//		}
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	return v;
//}
//int main()
//{
//	int n = 6;
//	nums(n);
//	system("pause");
//	return 0;
//}