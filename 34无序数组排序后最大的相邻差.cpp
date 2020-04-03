//#define _CRT_SECURE_NO_WARNINGS  1
//
//
//#include <iostream>
//#include <vector>
//#include <utility>
//using namespace std;
///*
//*一个无序的实数数组，求它们最近邻的两个值的差
//**/
//
////无序数组的最大序列
//double maxDiff(double a[], int n)
//{
//	double max = a[0];
//	double min = a[0];
//	for (int i = 1; i<n; ++i)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	double bar = (max - min) / (n - 1);
//	int pos;
//	//pair<first,second> : first表示桶的左边界index，second表示桶的右边界index
//	vector< pair<int, int> > buckets(n, make_pair(-1, -1));
//	//这里桶内存相应数据的下标，而不是相应的数据，方便后面的数据计算，以免有精度损失。
//	for (int i = 0; i<n; i++)
//	{
//		pos = (int)((a[i] - min) / bar);
//		if ((buckets[pos].first == -1) && (buckets[pos].second == -1))
//		{ 
//			//下标比较，若为double型比较注意精度问题
//			buckets[pos].first = buckets[pos].second = i;
//		}
//		else
//		{
//			if (a[buckets[pos].first] > a[i])
//				buckets[pos].first = i;
//			if (a[buckets[pos].second] < a[i])
//				buckets[pos].second = i;
//		}
//	}
//
//	int lastIx = 0;
//	double max_diff = 0;
//	double tmp_diff = 0;
//
//	for (int i = 1; i<n; ++i)
//	{ 
//		//计算桶之间的距离
//		if ((buckets[i].first == -1) && (buckets[i].second == -1))
//		{
//			//桶为空的标志,不处理
//		}
//		else
//		{
//			tmp_diff = a[buckets[i].first] - a[buckets[lastIx].second];
//			if (tmp_diff > max_diff)
//			{
//				max_diff = tmp_diff;
//			}
//			lastIx = i;//lastIx指上一个非空桶的index，且第一个桶和最后一个桶肯定非空。
//		}
//	}
//	return max_diff;
//}
//
//int main(){
//	double a[] = { 2, 4, 8, 16, 19.0, 7, 7, 30 };
//	cout << maxDiff(a, 8) << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int getnum(int a, int b)
//{
//	if (a == b)
//	{
//		return a;
//	}
//	if ((a & 1) == 0 && (b & 1) == 0)
//	{
//		return getnum(a >> 1, b >> 1) << 1;
//	}
//	else if ((a & 1) == 0 && (b & 1) != 0)
//	{
//		return getnum(a >> 1, b);
//	}
//	else if ((a & 1) != 0 && (b & 1) == 0)
//	{
//		return getnum(a, b >> 1);
//	}
//	else
//	{
//		int max = a > b ? a : b;
//		int min = a < b ? a : b;
//		return getnum(max - min, min);
//	}
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		cout << m * n /getnum(m, n) << endl;
//	}
//	return 0;
//}
