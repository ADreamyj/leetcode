//#define _CRT_SECURE_NO_WARNINGS  1
//
//
//#include <iostream>
//#include <vector>
//#include <utility>
//using namespace std;
///*
//*һ�������ʵ�����飬����������ڵ�����ֵ�Ĳ�
//**/
//
////����������������
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
//	//pair<first,second> : first��ʾͰ����߽�index��second��ʾͰ���ұ߽�index
//	vector< pair<int, int> > buckets(n, make_pair(-1, -1));
//	//����Ͱ�ڴ���Ӧ���ݵ��±꣬��������Ӧ�����ݣ������������ݼ��㣬�����о�����ʧ��
//	for (int i = 0; i<n; i++)
//	{
//		pos = (int)((a[i] - min) / bar);
//		if ((buckets[pos].first == -1) && (buckets[pos].second == -1))
//		{ 
//			//�±�Ƚϣ���Ϊdouble�ͱȽ�ע�⾫������
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
//		//����Ͱ֮��ľ���
//		if ((buckets[i].first == -1) && (buckets[i].second == -1))
//		{
//			//ͰΪ�յı�־,������
//		}
//		else
//		{
//			tmp_diff = a[buckets[i].first] - a[buckets[lastIx].second];
//			if (tmp_diff > max_diff)
//			{
//				max_diff = tmp_diff;
//			}
//			lastIx = i;//lastIxָ��һ���ǿ�Ͱ��index���ҵ�һ��Ͱ�����һ��Ͱ�϶��ǿա�
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
