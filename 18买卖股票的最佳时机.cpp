//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////买卖股票的最大时机
////1，只能买一次，然后卖出，找最大利润。
//int Buy1(vector<int>& prices)
//{
//	//这道题用动态规划来解决。
//	int res = 0;//前i天获得股票利润最大收益。
//	int min_val = INT_MAX;//前i天股票的最小值。
//	for (int i = 0; i < prices.size(); i++) {
//		min_val = min(min_val, prices[i]);
//		res = max(res, prices[i] - min_val);
//	}
//	return res;
//}
//
////2.可以买入多次，卖出多次，找最大利润
//int Buy2(vector<int> & prices)
//{
//	int ret = 0;
//	for (int i = 1; i < prices.size(); i++)
//	{
//		if (prices[i - 1] < prices[i])
//			ret += prices[i] - prices[i - 1];
//	}
//	return ret;
//}
//int main()
//{
//	vector<int> prices = { 7, 1, 5, 3, 6, 4 };
//	cout << Buy1(prices) << endl;
//	cout << Buy2(prices) << endl;
//	system("pause");
//
//}